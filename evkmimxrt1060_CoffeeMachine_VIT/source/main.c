/*
 * Copyright 2020-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* Board includes */
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "main.h"
#include "cmd.h"

#include "fsl_sd.h"
#include "ff.h"
#include "diskio.h"
#include "fsl_sd_disk.h"
#include "sdmmc_config.h"

#include "fsl_debug_console.h"

#include "fsl_gpio.h"
#include "fsl_iomuxc.h"
#include "fsl_dmamux.h"
#include "fsl_codec_common.h"
#include "fsl_wm8960.h"
#include "app_definitions.h"
#include "lvgl.h"
#include "littlevgl_support.h"
#include "app_streamer.h"
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SHELL_TASK_STACK_SIZE  (1024)
#define SDCARD_TASK_STACK_SIZE (512)

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

int BOARD_CODEC_Init(void);
static void APP_SDCARD_DetectCallBack(bool isInserted, void *userData);

/*******************************************************************************
 * Variables
 ******************************************************************************/
codec_handle_t codecHandle   = {0};
wm8960_config_t wm8960Config = {
    .i2cConfig = {.codecI2CInstance = BOARD_CODEC_I2C_INSTANCE, .codecI2CSourceClock = BOARD_CODEC_I2C_CLOCK_FREQ},
    .route     = kWM8960_RoutePlaybackandRecord,
    .leftInputSource  = kWM8960_InputDifferentialMicInput3,
    .rightInputSource = kWM8960_InputDifferentialMicInput2,
    .playSource       = kWM8960_PlaySourceDAC,
    .slaveAddress     = WM8960_I2C_ADDR,
    .bus              = kWM8960_BusI2S,
    .format = {.mclk_HZ = 6144000U, .sampleRate = kWM8960_AudioSampleRate48KHz, .bitWidth = kWM8960_AudioBitWidth16bit},
    .master_slave = false,
};
codec_config_t boardCodecConfig = {.codecDevType = kCODEC_WM8960, .codecDevConfig = &wm8960Config};

static volatile bool s_lvgl_initialized = false;
lv_ui guider_ui;
extern streamer_handle_t streamerHandle;

/*******************************************************************************
 * Code
 ******************************************************************************/

/*
 * AUDIO PLL setting: Frequency = Fref * (DIV_SELECT + NUM / DENOM)
 *                              = 24 * (30 + 66/625)
 *                              = 722.5344 MHz
 */
const clock_audio_pll_config_t audioPllConfig = {
    .loopDivider = 30,  /* PLL loop divider. Valid range for DIV_SELECT divider value: 27~54. */
    .postDivider = 1,   /* Divider after the PLL, should only be 1, 2, 4, 8, 16. */
    .numerator   = 66,  /* 30 bit numerator of fractional loop divider. */
    .denominator = 625, /* 30 bit denominator of fractional loop divider */
};

void BOARD_EnableSaiMclkOutput(bool enable)
{
    if (enable)
    {
        IOMUXC_GPR->GPR1 |= IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK;
    }
    else
    {
        IOMUXC_GPR->GPR1 &= (~IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK);
    }
}

int BOARD_CODEC_Init(void)
{
    CODEC_Init(&codecHandle, &boardCodecConfig);

    /* Initial volume kept low for hearing safety. */
    CODEC_SetVolume(&codecHandle, kCODEC_PlayChannelHeadphoneLeft | kCODEC_PlayChannelHeadphoneRight, 50);

    return 0;
}

static void VIT_Task(void *param)
{
    status_t ret;
    out_sink_t out_sink = VIT_SINK;

    Vit_Language = EN;

    PRINTF("\r\nStarting streamer demo application\r\n");

    STREAMER_Init();
    ret = STREAMER_mic_Create(&streamerHandle, out_sink);
    if (ret != kStatus_Success)
    {
        PRINTF("STREAMER_Create failed\r\n");
        goto error;
    }

    PRINTF("Starting recording\r\n");
#ifdef VIT_PROC
    PRINTF("\r\nTo see VIT functionality say wake-word and command.\r\n");
#endif
    STREAMER_Start(&streamerHandle);

    osa_time_delay(200000000);

    STREAMER_Stop(&streamerHandle);

error:
    PRINTF("Cleanup\r\n");
    STREAMER_Destroy(&streamerHandle);
}

static void GUI_Task(void *param)
{
    lv_port_pre_init();
    lv_init();
    lv_port_disp_init();
    lv_port_indev_init();

    s_lvgl_initialized = true;

    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    for (;;)
    {
        lv_task_handler();
        vTaskDelay(5);
    }
}


int main(void)
{
    int ret;

    /* Init board hardware. */
    /* Set the eLCDIF read_qos priority high, to make sure eLCDIF
     * can fetch data in time when PXP is used.
     */
    *((volatile uint32_t *)0x41044100) = 5;

    BOARD_ConfigMPU();
    BOARD_InitBootPins();
    BOARD_InitSemcPins();
    BOARD_BootClockRUN();
    /* 1. Init SAI clock .*/
    CLOCK_InitAudioPll(&audioPllConfig);
    BOARD_InitDebugConsole();

    /*Clock setting for LPI2C*/
    CLOCK_SetMux(kCLOCK_Lpi2cMux, BOARD_CODEC_I2C_CLOCK_SOURCE_SELECT);
    CLOCK_SetDiv(kCLOCK_Lpi2cDiv, BOARD_CODEC_I2C_CLOCK_SOURCE_DIVIDER);

    CLOCK_SetMux(kCLOCK_Sai1Mux, DEMO_SAI1_CLOCK_SOURCE_SELECT);
    CLOCK_SetDiv(kCLOCK_Sai1PreDiv, DEMO_SAI1_CLOCK_SOURCE_PRE_DIVIDER);
    CLOCK_SetDiv(kCLOCK_Sai1Div, DEMO_SAI1_CLOCK_SOURCE_DIVIDER);

    /*Enable MCLK clock*/
    BOARD_EnableSaiMclkOutput(true);

    DMAMUX_Init(DEMO_DMAMUX);
    DMAMUX_SetSource(DEMO_DMAMUX, DEMO_TX_CHANNEL, (uint8_t)DEMO_SAI_TX_SOURCE);
    DMAMUX_EnableChannel(DEMO_DMAMUX, DEMO_TX_CHANNEL);
    DMAMUX_SetSource(DEMO_DMAMUX, DEMO_RX_CHANNEL, (uint8_t)DEMO_SAI_RX_SOURCE);
    DMAMUX_EnableChannel(DEMO_DMAMUX, DEMO_RX_CHANNEL);

    PRINTF("\r\n");
    PRINTF("**********************************\r\n");
    PRINTF("LVGL Coffee Machine with VIT demo \r\n");
    PRINTF("**********************************\r\n");
    PRINTF("\r\n");

    ret = BOARD_CODEC_Init();
    if (ret)
    {
        PRINTF("CODEC_Init failed\r\n");
        return -1;
    }

    if (xTaskCreate(GUI_Task, "littlevgl", configMINIMAL_STACK_SIZE + 800, NULL, tskIDLE_PRIORITY + 2, NULL) != pdPASS)
    {
        PRINTF("\r\nFailed to create GUI_Task\r\n");
        //while (1)
            ;
    }

    if (xTaskCreate(VIT_Task, "VIT", configMINIMAL_STACK_SIZE + 800, NULL, tskIDLE_PRIORITY + 3, NULL) != pdPASS)
    {
        PRINTF("\r\nFailed to create VIT_Task\r\n");
        while (1)
            ;
    }

    /* Run RTOS */
    vTaskStartScheduler();

    /* Should not reach this statement */
    return 0;
}

void vApplicationMallocFailedHook(void)
{
    for (;;)
        ;
}

/*!
 * @brief FreeRTOS tick hook.
 */
void vApplicationTickHook(void)
{
    if (s_lvgl_initialized)
    {
        lv_tick_inc(1);
    }
}

/*!
 * @brief Stack overflow hook.
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    portDISABLE_INTERRUPTS();

    /* Loop forever */
    for (;;)
        ;
}


/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "gui_vit.h"
#include "custom.h"
#include "task.h"

static int CafeMachine_SCR = 0;
const char unknown_string[]= "Unknown Command\0";
const char speak_cmd_string[]= "Please Speak a Command\0";

typedef enum
{
    UNKNOWN                = 0,
	RETURN                 = 1,
	COFFEE_MACHINE         = 2,
	ESPRESSO               = 3,
	RISTRETTO              = 4,
	AMERICANO              = 5,
	CAPPUCCINO             = 6,
	CAFE_LATTE             = 7,
	CAFE_MOCHA             = 8,
	START                  = 9,
	SMALL                  = 10,
	REGULAR                = 11,
	LARGE                  = 12
} VIT_VoiceCommands_en;


void gui_WakeupWord(void)
{
	if (CafeMachine_SCR == HOME_SCR)
	{
		lv_obj_set_hidden(guider_ui.label_DefaultScrn_cmd, 0);
	}
	else if (CafeMachine_SCR == CAFE_HOME_SCR)
	{
		lv_obj_set_hidden(guider_ui.label_CafeHm_cmd, 0);
	}
	else if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
	{
		lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 0);
	}
	else if (CafeMachine_SCR == CAFE_BREW_SCR)
	{
		return ;
	}
}
void gui_VoiceCmd(VIT_VoiceCommand_st *VoiceCommand)
{
	switch(VoiceCommand->Cmd_Id)
	{
		case UNKNOWN:
			if (CafeMachine_SCR == HOME_SCR)
			{
				lv_label_set_text(guider_ui.label_DefaultScrn_cmd, unknown_string);
				lv_refr_now(NULL);
				vTaskDelay(2000);
				lv_obj_set_hidden(guider_ui.label_DefaultScrn_cmd, 1);
				lv_label_set_text(guider_ui.label_DefaultScrn_cmd, speak_cmd_string);
			}
			else if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_label_set_text(guider_ui.label_CafeHm_cmd, unknown_string);
				lv_refr_now(NULL);
				vTaskDelay(2000);
				lv_obj_set_hidden(guider_ui.label_CafeHm_cmd, 1);
				lv_label_set_text(guider_ui.label_CafeHm_cmd, speak_cmd_string);
			}
			else if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				lv_label_set_text(guider_ui.label_CafeSettings_cmd, unknown_string);
				lv_refr_now(NULL);
				vTaskDelay(2000);
				lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 1);
				lv_label_set_text(guider_ui.label_CafeSettings_cmd, speak_cmd_string);
			}
			else if (CafeMachine_SCR == CAFE_BREW_SCR)
			{

			}
			break;

		case COFFEE_MACHINE:
			if (CafeMachine_SCR == HOME_SCR)
			{
				setup_scr_CafeHm(&guider_ui);
				lv_scr_load(guider_ui.CafeHm);
				lv_obj_clean(guider_ui.DefaultScrn);
				lv_obj_del(guider_ui.DefaultScrn);
				CafeMachine_SCR = CAFE_HOME_SCR;
			}
			break;

		case ESPRESSO:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_espressoBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;

		case RISTRETTO:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_ristrettoBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;

		case AMERICANO:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_americanoBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;

		case CAPPUCCINO:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_cappucinoBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;
		case CAFE_LATTE:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_latteBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;
		case CAFE_MOCHA:
			if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
				lv_event_send(guider_ui.CafeHm_mochaBtn, LV_EVENT_RELEASED, NULL);
				CafeMachine_SCR = CAFE_SETTINGS_SCR;
			}
			break;
		case SMALL:
			if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 1);
				lv_btn_set_state(guider_ui.CafeSettings_smallSizeBtn, LV_BTN_STATE_CHECKED_RELEASED);
				lv_event_send(guider_ui.CafeSettings_smallSizeBtn, LV_EVENT_RELEASED, NULL);
			}
			break;
		case REGULAR:
			if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 1);
				lv_btn_set_state(guider_ui.CafeSettings_mediumSizeBtn, LV_BTN_STATE_CHECKED_RELEASED);
				lv_event_send(guider_ui.CafeSettings_mediumSizeBtn, LV_EVENT_RELEASED, NULL);
			}
			break;
		case LARGE:
			if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 1);
				lv_btn_set_state(guider_ui.CafeSettings_largeSizeBtn, LV_BTN_STATE_CHECKED_RELEASED);
				lv_event_send(guider_ui.CafeSettings_largeSizeBtn, LV_EVENT_RELEASED, NULL);
			}
			break;
		case START:
			if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				lv_obj_set_hidden(guider_ui.label_CafeSettings_cmd, 1);
				setup_scr_CafeBrewScr(&guider_ui);
				lv_scr_load(guider_ui.CafeBrewScr);
				CafeMachine_SCR = CAFE_HOME_SCR;
			}
			break;
		case RETURN:
			if (CafeMachine_SCR == HOME_SCR)
			{
				lv_label_set_text(guider_ui.label_DefaultScrn_cmd, "This's The Home Page");
				lv_refr_now(NULL);
				vTaskDelay(2000);
				lv_obj_set_hidden(guider_ui.label_DefaultScrn_cmd, 1);
				lv_label_set_text(guider_ui.label_DefaultScrn_cmd, speak_cmd_string);
				CafeMachine_SCR = HOME_SCR;
			}
			else if (CafeMachine_SCR == CAFE_HOME_SCR)
			{
			    setup_scr_DefaultScrn(&guider_ui);
			    lv_scr_load(guider_ui.DefaultScrn);
			    lv_obj_clean(guider_ui.CafeHm);
			    lv_obj_del(guider_ui.CafeHm);
			    CafeMachine_SCR = HOME_SCR;
			}
			else if (CafeMachine_SCR == CAFE_SETTINGS_SCR)
			{
				setup_scr_CafeHm(&guider_ui);
			    lv_scr_load(guider_ui.CafeHm);
			    lv_obj_clean(guider_ui.CafeSettings);
			    lv_obj_del(guider_ui.CafeSettings);
			    CafeMachine_SCR = CAFE_HOME_SCR;

			}
			else if (CafeMachine_SCR == CAFE_BREW_SCR)
			{
			}
			break;
	}
}

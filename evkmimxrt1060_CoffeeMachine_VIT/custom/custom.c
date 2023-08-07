// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl/lvgl.h"
#include "custom.h"
#include "FreeRTOS.h"
#include "task.h"

/*********************
 *      DEFINES
 *********************/
#define BLENDER_POWER_MAX       6

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
char g_ovTempTxt[5] = {'0', '3','5','0', '\0'};
char g_ckTimeTxt[6] = {'0', '0', ':', '0', '0', '\0'};

uint32_t g_ovTemp;
uint32_t g_ckTime;
uint8_t g_ckActive;

uint32_t tempArcMaxVal;
uint32_t tempArcMinVal;

uint32_t g_blendTime;
uint8_t g_blendActive;
uint8_t blenderPowerLevel;

lv_chart_series_t * BlenderHm_powerLevel_1;
lv_chart_series_t * BlenderHm_bgndChart_1;

extern lv_ui guider_ui;
extern volatile uint32_t currTime_s;

uint32_t blenderSetup;
/**
 * Create a demo application
 */

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
	g_ckActive = false;
	g_ovTemp = 150;
	g_ckTime = 0;
	

	/* Setup Oven settings and Oven cook screen first.
	 *
	 * These screens need to be setup here so that the temperature Arc
	 * minimum and maximums can be configured.
	 */
	setup_scr_OvenSettings(&guider_ui);
	setup_scr_OvenCk(&guider_ui);

	/* Configure temperature arc minimum and maximums */
	tempArcMinVal = lv_arc_get_angle_start(guider_ui.OvenCk_tempArc);
    tempArcMaxVal = lv_arc_get_angle_end(guider_ui.OvenCk_tempArc);

    /* Initialize Blender setup semaphore */
	blenderSetup = 0;
}

/* *
 * Oven Screen functions
 * */

/*
 * Function: checkOvenMode
 *
 * Description: This function checks that at least one of the different modes is selected.
 *
 * Inputs: None
 *
 * Returns: True if a mode is selected; False if none of the modes are selected
 */
static bool checkOvenMode(void)
{
    bool modeSelected = false;
    uint32_t btnState;
    
    /* Check that at least one mode button is selected */
    btnState = lv_btn_get_state(guider_ui.OvenSettings_bakeBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    btnState = lv_btn_get_state(guider_ui.OvenSettings_broilBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    btnState = lv_btn_get_state(guider_ui.OvenSettings_cleanBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    btnState = lv_btn_get_state(guider_ui.OvenSettings_warmBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    btnState = lv_btn_get_state(guider_ui.OvenSettings_convectBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    btnState = lv_btn_get_state(guider_ui.OvenSettings_conventBtn);
    if(btnState == 0x3) {
        modeSelected = true;
    }
    
    return modeSelected;
}

/*
 * Function: ovenModeSelection_cb
 *
 * Description: This function executes any time one of the oven mode buttons is pressed.
 * It ensures that only one of the mode buttons is active at a time.
 *
 * Inputs: btn, event
 * btn is the LVGL button object that triggered this call.
 * event is the LVGL event sent from the LVGL object.
 *
 * Returns: none.
 */
void ovenModeSelection_cb(lv_obj_t * btn, lv_event_t event)
{
    uint32_t btnState;
    
    if(event == LV_EVENT_RELEASED) {
        if(btn == guider_ui.OvenSettings_bakeBtn) {
            /* Bake button has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_bakeBtn);
            
             if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.OvenSettings_broilBtn) {
        	/* Broil mode has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_broilBtn);
            
            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.OvenSettings_cleanBtn) {
        	/* Cleaning mode has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_cleanBtn);
            
            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.OvenSettings_warmBtn) {
        	/* Warming mode has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_warmBtn);
            
            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.OvenSettings_convectBtn) {
        	/* Convection cook mode has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_convectBtn);
            
            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.OvenSettings_conventBtn) {
        	/* Conventional cook mode has been selected */
            btnState = lv_btn_get_state(guider_ui.OvenSettings_conventBtn);
            
            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
             }
        }
    }
    
}

/*
 * Function: ovStartBtn_cb
 *
 * Description: This function executes when the Start button is pressed on the Oven
 * Settings screen.  It will check that a mode is selected and validates that a time
 * greater than zero is selected.  If these two conditions are true, then the function will
 * get the time and temperature from the rollers, sets the temperature arc and time meter
 * on the Oven Cook screen.  Finally, it then transitions to the Oven cook screen.
 *
 * Inputs: btn, event
 * btn is the LVGL button object that triggered this call.
 * event is the LVGL event sent from the LVGL object.
 *
 * Returns: none.
 */
void ovStartBtn_cb(lv_obj_t * btn, lv_event_t event)
{
    char tempChar[3];
    
    if(event == LV_EVENT_RELEASED) {
        /* Check that a valid oven mode has been selected. */
        if(!checkOvenMode()) {
            return;
        }
        
        /* Check that a valid time has been selected */
        if((lv_roller_get_selected(guider_ui.OvenSettings_secsRoller) == 0)&&
           (lv_roller_get_selected(guider_ui.OvenSettings_minsRoller) == 0)) {
               return;
        }
        
        /* Get Temperature from the tempRoller and convert to an integer */
        lv_roller_get_selected_str(guider_ui.OvenSettings_tempRoller, g_ovTempTxt, 5);
        g_ovTemp = atoi(g_ovTempTxt);
        
        /* Get Minutes from the minuteRoller */
        lv_roller_get_selected_str(guider_ui.OvenSettings_secsRoller, tempChar, 0);

        /* Now populate minutes in global variable */
        if((tempChar[0] > 47) && (tempChar[0] < 58)) {
            g_ckTimeTxt[3] = tempChar[0];
        }
        
        if((tempChar[1] > 47) && (tempChar[1] < 58)) {
        g_ckTimeTxt[4] = tempChar[1];
        }
        
        g_ckTime = atoi(tempChar);
        
        /* Get Hours from the hourRoller */
        lv_roller_get_selected_str(guider_ui.OvenSettings_minsRoller, tempChar, 0);

        /* Now populate hours in global variable */
        if((tempChar[1] > 47) && (tempChar[1] < 58)) {
            g_ckTimeTxt[0] = tempChar[1];
        }
        
        if((tempChar[0] > 47) && (tempChar[0] < 58)) {
            g_ckTimeTxt[1] = tempChar[0];
        }
        
        g_ckTime += atoi(tempChar) * 60;
        
        /* Set the text labels on the Oven Cook screen */
        lv_label_set_text(guider_ui.OvenCk_ckTemp, g_ovTempTxt);
        lv_label_set_text(guider_ui.OvenCk_ckTime, g_ckTimeTxt);
        
        /* Set the time meter on the Oven Cook screen */
        lv_linemeter_set_scale(guider_ui.OvenCk_timeMeter, 360, (uint16_t)g_ckTime);
        lv_linemeter_set_scale(guider_ui.OvenCk_timeMeter, 360, 36);
        lv_linemeter_set_range(guider_ui.OvenCk_timeMeter, 0, g_ckTime);
        lv_linemeter_set_value(guider_ui.OvenCk_timeMeter, g_ckTime);
        
        /* Set the temperature arc on the Oven Cook screen */
        lv_arc_set_end_angle(guider_ui.OvenCk_tempArc, (uint16_t)(((g_ovTemp-150) * 1.30) + tempArcMinVal));
        
        /* Set cook active semaphore such that the cook time will be updated */
        g_ckActive = true;
        
        /* Load the Oven Cook screen */
        lv_disp_load_scr(guider_ui.OvenCk);
    }
}

/*
 * Function: ckCancelbtn_cb
 *
 * Description: This function executes when the Cancel button on the Oven Cook Screen
 * is pressed.  This function resets the text for the time and
 *
 * Inputs: btn, event
 * btn is the LVGL button object that triggered this call.
 * event is the LVGL event sent from the LVGL object.
 *
 * Returns: none.
 */
void ckCancelbtn_cb(lv_obj_t * btn, lv_event_t event)
{
    if(event == LV_EVENT_RELEASED) {
        // load oven UI screen and reset time / temp variables
        g_ckTimeTxt[0] = '0';
        g_ckTimeTxt[1] = '0';
        g_ckTimeTxt[3] = '0';
        g_ckTimeTxt[4] = '0';
        
        g_ovTemp = 150;
        g_ckTime = 0;
        g_ckActive = false;
        
        lv_label_set_text(guider_ui.OvenCk_ckTime, g_ckTimeTxt);
        lv_linemeter_set_value(guider_ui.OvenCk_timeMeter, 0);
    }
}

/*
 * Function: ovenCk_cb
 *
 * Description: This function executes when the cook counter decrements.  It
 * updates the time meter and time text when the counter decrements and the
 * oven cook function is active.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void ovenCk_cb(void)
{
    uint32_t temp32;

    // Set the label of the time boxes
    if(g_ckActive == true)
    {

        /* Get the mins of the cook time */
        temp32 = g_ckTime / 60;

        /* Populate the text arrays with the minutes */
        g_ckTimeTxt[0] = temp32 / 10 + 48;
        g_ckTimeTxt[1] = temp32 % 10 + 48;

        /* Get the seconds of the cook time */
        temp32 = g_ckTime % 60;

        /* Populate the text arrays with the seconds */
        g_ckTimeTxt[3] = temp32 / 10 + 48;
        g_ckTimeTxt[4] = temp32 % 10 + 48;

        /* Set the text widget and linemeter widget */
        lv_label_set_text(guider_ui.OvenCk_ckTime, g_ckTimeTxt);
        lv_linemeter_set_value(guider_ui.OvenCk_timeMeter, g_ckTime);

        /* If the cook time has expired, set g_ckActive to false;
         * Otherwise, decrement the cook time variable
         */
        if(g_ckTime == 0)
        {
            g_ckActive = false;
        }
        else
        {
            g_ckTime--;
        }
    }
}

/*
 * Coffee machine functions
 */

/*
 * Function: checkOvenMode
 *
 * Description: This function checks that at least one of the different modes is selected.
 *
 * Inputs: None
 *
 * Returns: True if a mode is selected; False if none of the modes are selected
 */
bool checkCupSize(void)
{
    bool sizeSelected = false;
    uint32_t btnState;

    /* Check that at least one mode button is selected */
    btnState = lv_btn_get_state(guider_ui.CafeSettings_largeSizeBtn);
    if(btnState == 0x3) {
    	sizeSelected = true;
    }

    btnState = lv_btn_get_state(guider_ui.CafeSettings_mediumSizeBtn);
    if(btnState == 0x3) {
    	sizeSelected = true;
    }

    btnState = lv_btn_get_state(guider_ui.CafeSettings_smallSizeBtn);
    if(btnState == 0x3) {
    	sizeSelected = true;
    }

    return sizeSelected;
}

/*
 * Function: ovenModeSelection_cb
 *
 * Description: This function executes any time one of the oven mode buttons is pressed.
 * It ensures that only one of the mode buttons is active at a time.
 *
 * Inputs: btn, event
 * btn is the LVGL button object that triggered this call.
 * event is the LVGL event sent from the LVGL object.
 *
 * Returns: none.
 */
void cafeSettingsSizeSelection_cb(lv_obj_t * btn, lv_event_t event)
{
    uint32_t btnState;

    if(event == LV_EVENT_RELEASED) {
        if(btn == guider_ui.CafeSettings_largeSizeBtn) {
            /* Bake button has been selected */
            btnState = lv_btn_get_state(guider_ui.CafeSettings_largeSizeBtn);

             if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.CafeSettings_mediumSizeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.CafeSettings_smallSizeBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.CafeSettings_mediumSizeBtn) {
        	/* Broil mode has been selected */
            btnState = lv_btn_get_state(guider_ui.CafeSettings_mediumSizeBtn);

            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.CafeSettings_largeSizeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.CafeSettings_smallSizeBtn, LV_BTN_STATE_RELEASED);
             }
        }
        else if(btn == guider_ui.CafeSettings_smallSizeBtn) {
        	/* Cleaning mode has been selected */
            btnState = lv_btn_get_state(guider_ui.CafeSettings_smallSizeBtn);

            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.CafeSettings_largeSizeBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.CafeSettings_mediumSizeBtn, LV_BTN_STATE_RELEASED);
             }
        }
    }

}

/*
 * Function: cafeBrewBtn_cb
 *
 * Description: This function executes when the cook counter decrements.  It
 * updates the time meter and time text when the counter decrements and the
 * oven cook function is active.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void cafeBrewBtn_cb(lv_obj_t * btn, lv_event_t event)
{
    const void * selectedImage;
    char tempTxt[11] = {'0','1','2','3','4','5','6','7','8','9','\0'};

    if(event == LV_EVENT_RELEASED) {
    	// Load the Brew select screen
    	//lv_obj_clean(lv_scr_act());
    	//lv_obj_del(lv_scr_act());
    	//lv_obj_clean(&guider_ui);
    	//setup_scr_CafeSettings(&guider_ui);
        /////////////////////////////////////////////////////////////
        // Get which image was selected.
        if(btn == guider_ui.CafeHm_espressoBtn) {
            // Set img according to button selected.
            //selectedImage = &_espresso100x100;
        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, false);
        	tempTxt[0] = 'E';
        	tempTxt[1] = 's';
        	tempTxt[2] = 'p';
        	tempTxt[3] = 'r';
        	tempTxt[4] = 'e';
        	tempTxt[5] = 's';
        	tempTxt[6] = 's';
        	tempTxt[7] = 'o';
        	tempTxt[8] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        if(btn == guider_ui.CafeHm_ristrettoBtn) {
            // Set img according to button selected.
            //selectedImage = &_ristretto100x100;

        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, false);
        	tempTxt[0] = 'R';
        	tempTxt[1] = 'i';
        	tempTxt[2] = 's';
        	tempTxt[3] = 't';
        	tempTxt[4] = 'r';
        	tempTxt[5] = 'e';
        	tempTxt[6] = 't';
        	tempTxt[7] = 't';
        	tempTxt[8] = 'o';
        	tempTxt[9] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        if(btn == guider_ui.CafeHm_americanoBtn) {
            // Set img according to button selected.
            //selectedImage = &_americano100x100;
        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, false);
        	tempTxt[0] = 'A';
        	tempTxt[1] = 'm';
        	tempTxt[2] = 'e';
        	tempTxt[3] = 'r';
        	tempTxt[4] = 'i';
        	tempTxt[5] = 'c';
        	tempTxt[6] = 'a';
        	tempTxt[7] = 'n';
        	tempTxt[8] = 'o';
        	tempTxt[9] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        if(btn == guider_ui.CafeHm_cappucinoBtn) {
            // Set img according to button selected.
            //selectedImage = &_cappuccinno100x100;
        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, false);
        	tempTxt[0] = 'C';
        	tempTxt[1] = 'a';
        	tempTxt[2] = 'p';
        	tempTxt[3] = 'p';
        	tempTxt[4] = 'u';
        	tempTxt[5] = 'c';
        	tempTxt[6] = 'c';
        	tempTxt[7] = 'i';
        	tempTxt[8] = 'n';
        	tempTxt[9] = 'o';
        	tempTxt[10] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        if(btn == guider_ui.CafeHm_latteBtn) {
            // Set img according to button selected.
            //selectedImage = &_latte100x100;
        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, false);
        	tempTxt[0] = 'C';
        	tempTxt[1] = 'a';
        	tempTxt[2] = 'f';
        	tempTxt[3] = 'e';
        	tempTxt[4] = ' ';
        	tempTxt[5] = 'L';
        	tempTxt[6] = 'a';
        	tempTxt[7] = 't';
        	tempTxt[8] = 't';
        	tempTxt[9] = 'e';
        	tempTxt[10] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        if(btn == guider_ui.CafeHm_mochaBtn) {
            // Set img according to button selected.
            //selectedImage = &_mocha100x100;
        	lv_obj_set_hidden(guider_ui.CafeSettings_americanoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_ristrettoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_cappucinoLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_latteLarge, true);
        	lv_obj_set_hidden(guider_ui.CafeSettings_espressoLarge, true);

        	lv_obj_set_hidden(guider_ui.CafeSettings_mochaLarge, false);
        	tempTxt[0] = 'C';
        	tempTxt[1] = 'a';
        	tempTxt[2] = 'f';
        	tempTxt[3] = 'e';
        	tempTxt[4] = ' ';
        	tempTxt[5] = 'M';
        	tempTxt[6] = 'o';
        	tempTxt[7] = 'c';
        	tempTxt[8] = 'h';
        	tempTxt[9] = 'a';
        	tempTxt[10] = '\0';

        	lv_label_set_text(guider_ui.CafeSettings_cupImgLabel, tempTxt);
        }

        /////////////////////////////////////////////////////////////
        // Load the coffee cup picture before loading the screen.
        //lv_img_set_src(guider_ui.CafeSettings_coffeeCupImg, selectedImage);

        // Ensure size is unselected
        lv_btn_set_state(guider_ui.CafeSettings_smallSizeBtn, LV_BTN_STATE_RELEASED);
        lv_btn_set_state(guider_ui.CafeSettings_mediumSizeBtn, LV_BTN_STATE_RELEASED);
        lv_btn_set_state(guider_ui.CafeSettings_largeSizeBtn, LV_BTN_STATE_RELEASED);

        lv_slider_set_value(guider_ui.CafeSettings_strengthSlider, 50, LV_ANIM_OFF);


        //lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_FADE_ON, 2000, 0, true);
    }
}

/*
 * Function: pourAnimationDone_cb
 *
 * Description: This function executes when the coffee fill animation completes.  It
 * updates the time meter and time text when the counter decrements and the
 * oven cook function is active.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void pourAnimationDone_cb(lv_anim_t * a)
{
	lv_obj_t *old_scr = NULL;

    char tempTxt[15] = {'D', 'o','n','e','!',' ','E','n','j','o','y','!','!','!','\0'};
    uint32_t temp32;

    /* Set the label text and refresh the screen immediately so that the changes take effect */
    lv_label_set_text(guider_ui.CafeBrewScr_statusLabel, tempTxt);
    lv_refr_now(NULL);

    /* Get the current time (in seconds) and add 3 to delay 3 seconds */
#if !LV_USE_GUIDER_SIMULATOR
#if 0
    temp32 = currTime_s + 3;

    while(currTime_s < temp32)
    {}
#else
    vTaskDelay(3000);
#endif
#endif
    /* Delay is done; so now, clean the screen, setup and load the new screen */
    old_scr = lv_scr_act();

    setup_scr_CafeHm(&guider_ui);
    lv_scr_load(guider_ui.CafeHm);
    //lv_obj_clean(lv_scr_act());
    lv_obj_clean(old_scr);
    lv_obj_del(old_scr);
    old_scr = NULL;



}

void clearBlndSetup(void)
{
	blenderSetup = 0;
}
/*
 * Function: blenderSetup_cb
 *
 * Description: This function executes when the Blender demo is loaded from the
 * Default Screen. It reconfigures the charts to meet the desired format and settings.
 * It also initializes the power level of the blender.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void blenderSetup_cb(void)
{
	uint32_t tmp32;
	if (blenderSetup == 0) {

	blenderPowerLevel = 0;

	lv_chart_ext_t * ext_bgndChart    = lv_obj_get_ext_attr(guider_ui.BlenderHm_bgndChart);
	lv_chart_ext_t * ext_pwrLevelChart    = lv_obj_get_ext_attr(guider_ui.BlenderHm_powerLevel);
	_lv_ll_clear(&ext_bgndChart->series_ll);
	_lv_ll_clear(&ext_pwrLevelChart->series_ll);

	lv_obj_set_event_cb(guider_ui.BlenderHm_powerLevel, incrementPowerLevel_cb);
	lv_chart_set_update_mode(guider_ui.BlenderHm_powerLevel, LV_CHART_UPDATE_MODE_CIRCULAR);
	tmp32 = lv_chart_get_point_count(guider_ui.BlenderHm_powerLevel);
	if (tmp32 != 6) {
		lv_chart_set_point_count(guider_ui.BlenderHm_powerLevel, 6);
	}

	tmp32 = lv_chart_get_point_count(guider_ui.BlenderHm_bgndChart);
	if (tmp32 != 6) {
		lv_chart_set_point_count(guider_ui.BlenderHm_bgndChart, 6);
	}

	BlenderHm_powerLevel_1 = lv_chart_add_series(guider_ui.BlenderHm_powerLevel, lv_color_make(0xff, 0x00, 0xff));
	BlenderHm_bgndChart_1 = lv_chart_add_series(guider_ui.BlenderHm_bgndChart, lv_color_make(0xff, 0xff, 0xff));

	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,2);
	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,4);
	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,6);
	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,8);
	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,10);
	lv_chart_set_next(guider_ui.BlenderHm_bgndChart, BlenderHm_bgndChart_1,12);

	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);
	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);
	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);
	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);
	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);
	lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1,0);

	/* Correct the styles */
	/* Write style LV_CHART_PART_BG for BlenderHm_bgndChart */
	static lv_style_t style_BlenderHm_bgndChart_bg;
	lv_style_init(&style_BlenderHm_bgndChart_bg);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_bgndChart_bg
	lv_style_set_bg_color(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_BlenderHm_bgndChart_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_BlenderHm_bgndChart_bg
	lv_style_set_border_opa(&style_BlenderHm_bgndChart_bg, LV_STATE_FOCUSED, 0);
	lv_style_set_border_color(&style_BlenderHm_bgndChart_bg, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_BlenderHm_bgndChart_bg, LV_STATE_FOCUSED, 0);
	lv_obj_add_style(guider_ui.BlenderHm_bgndChart, LV_CHART_PART_BG, &style_BlenderHm_bgndChart_bg);

	//Write style LV_CHART_PART_BG for BlenderHm_powerLevel
	static lv_style_t style_BlenderHm_powerLevel_bg;
	lv_style_init(&style_BlenderHm_powerLevel_bg);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_powerLevel_bg
	lv_style_set_bg_color(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_BlenderHm_powerLevel_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_BlenderHm_powerLevel_bg
	lv_style_set_border_opa(&style_BlenderHm_powerLevel_bg, LV_STATE_FOCUSED, 0);
	lv_style_set_border_color(&style_BlenderHm_powerLevel_bg, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_BlenderHm_powerLevel_bg, LV_STATE_FOCUSED, 0);
	lv_obj_add_style(guider_ui.BlenderHm_powerLevel, LV_CHART_PART_BG, &style_BlenderHm_powerLevel_bg);



	blenderSetup = 1;
	}
}

/*
 * Function: blenderModeSelection_cb
 *
 * Description: This function executes when the cook counter decrements.  It
 * updates the time meter and time text when the counter decrements and the
 * oven cook function is active.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void blenderModeSelection_cb(lv_obj_t * btn, lv_event_t event)
{
    // Check to see which button was pressed and then ensure all others are not
    // selected.
    uint32_t btnState;

    if(event == LV_EVENT_RELEASED) {
        if(btn == guider_ui.BlenderHm_iceBtn) {
            // Ice button was pressed.  Clear all others
            btnState = lv_btn_get_state(guider_ui.BlenderHm_iceBtn);

             if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.BlenderHm_smoothieBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_soupBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_pulseBtn, LV_BTN_STATE_RELEASED);
             }

             // Also set Power level to max and time to 1:00 minute
             blenderPowerLevel = BLENDER_POWER_MAX;
             setBlenderPowerLevel();

             lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, 1, LV_ANIM_ON);
             lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 0, LV_ANIM_ON);
        }
        else if(btn == guider_ui.BlenderHm_smoothieBtn) {
            // Smoothie button was pressed.  Clear all others
            btnState = lv_btn_get_state(guider_ui.BlenderHm_smoothieBtn);

            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.BlenderHm_iceBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_soupBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_pulseBtn, LV_BTN_STATE_RELEASED);
             }

            // Also set Power level to max and time to 1:00 minute
             blenderPowerLevel = 3;
             setBlenderPowerLevel();

             lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, 0, LV_ANIM_ON);
             lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 30, LV_ANIM_ON);
        }
        else if(btn == guider_ui.BlenderHm_soupBtn) {
            // Soup button was pressed. Clear all others
            btnState = lv_btn_get_state(guider_ui.BlenderHm_soupBtn);

            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.BlenderHm_smoothieBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_iceBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_pulseBtn, LV_BTN_STATE_RELEASED);
             }

            // Also set Power level to max and time to 1:00 minute
             blenderPowerLevel = 1;
             setBlenderPowerLevel();

             lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, 0, LV_ANIM_ON);
             lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 45, LV_ANIM_ON);
        }
        else if(btn == guider_ui.BlenderHm_pulseBtn) {
            // Pulse mode selected.
            btnState = lv_btn_get_state(guider_ui.BlenderHm_pulseBtn);

            if (btnState == 0x3) {
                 lv_btn_set_state(guider_ui.BlenderHm_smoothieBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_soupBtn, LV_BTN_STATE_RELEASED);
                 lv_btn_set_state(guider_ui.BlenderHm_iceBtn, LV_BTN_STATE_RELEASED);
             }

            // Also set Power level to max and time to 1:00 minute
             blenderPowerLevel = 3;
             setBlenderPowerLevel();

             lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, 0, LV_ANIM_ON);
             lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 1, LV_ANIM_ON);
        }
    }

}

/*
 * Function: setBlenderPowerLevel
 *
 * Description: This function executes when the cook counter decrements.  It
 * updates the time meter and time text when the counter decrements and the
 * oven cook function is active.
 *
 * Inputs: None
 *
 * Returns: None.
 */
static void setBlenderPowerLevel(void)
{
    uint32_t i;

    blenderPowerLevel = blenderPowerLevel % 7;

    for(i=0; i<6; i++) {
         if(blenderPowerLevel > i) {
            lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1, (i+1)*2);
        }
        else {
            lv_chart_set_next(guider_ui.BlenderHm_powerLevel, BlenderHm_powerLevel_1, 0);
        }
    }
}

/*
 * Function: incrementPowerLevel_cb
 *
 * Description: This function executes when the PowerLevel chart is clicked.
 * It simply increments and mods the blenderPowerLevel variable and then calls
 * the setBlenderPowerLevel function, which actually updates the chart.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void incrementPowerLevel_cb(lv_obj_t * chartObj, lv_event_t event)
{
    /* Increment Power Level */
    if(event == LV_EVENT_RELEASED) {
        /* Increment power level variable by one and mod by 7 */
        blenderPowerLevel++;
        blenderPowerLevel = blenderPowerLevel % 7;

        /* Call setBlenderPowerLevel() to actually update the chart */
        setBlenderPowerLevel();
    }
}

/*
 * Function: adjustBlendTime_cb
 *
 * Description: This function executes when the time adjustment buttons are pressed (either
 * up or down).  When executing, it adjusts both the minutes and seconds rollers.
 *
 * Inputs: btn, event
 * btn is the LVGL btn object that triggers the event.
 * event is the LVGL event that is sent in this function call.
 *
 * Returns: None.
 */
void adjustBlendTime_cb(lv_obj_t * btn, lv_event_t event)
{
    uint16_t minsPos, secsPos, maxMins, maxSecs;

    if(event == LV_EVENT_RELEASED) {
        /* Get current position of the rollers as well as maximum count */
        minsPos = lv_roller_get_selected(guider_ui.BlenderHm_minsRoller);
        secsPos = lv_roller_get_selected(guider_ui.BlenderHm_secsRoller);
        maxMins = lv_roller_get_option_cnt(guider_ui.BlenderHm_minsRoller);
        maxSecs = lv_roller_get_option_cnt(guider_ui.BlenderHm_secsRoller);

        if(btn == guider_ui.BlenderHm_blenTimeDn) {
            /* Down button has been pressed so, decrement time here */
            if(secsPos == 0) {
            	/* If the seconds place is already '0', need to decrement the minutes
            	 * position (assuming it is greater than '0')
            	 */
                if(minsPos > 0) {
                    lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 59, LV_ANIM_ON);
                    lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, minsPos - 1, LV_ANIM_ON);
                }
            }
            else {
            	/* Else, the seconds position is already greater than '0' and we can just simply
            	 * decrement the seconds position
            	 */
                lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, secsPos - 1, LV_ANIM_ON);
            }

        }
        else if(btn == guider_ui.BlenderHm_blenTimeUp) {
            /* Up button has been pressed, so increment time here */
            if(secsPos == maxSecs - 1) {
            	/* If the seconds position has selected the maximum - 1, we need to increment
            	 * the minutes (assuming the minutes aren't already at the maximum).
            	 */
                if(minsPos < maxMins - 1) {
                    lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 0, LV_ANIM_ON);
                    lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, minsPos + 1, LV_ANIM_ON);
                }
            }
            else {
            	/* Else, simply increment the seconds position */
                lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, secsPos + 1, LV_ANIM_ON);
            }
        }
    }

}

/*
 * Function: blenderStartBtn_cb
 *
 * Description: This function executes when the blender start button is pressed.
 * It then checks that a blender mode has been selected, gets the time from the
 * input rollers, and then sets the active mode semaphore.
 *
 * Inputs: btn, event
 * btn is the LVGL button that triggered the event.
 * event is the specific LVGL event that is sent to this function.
 *
 * Returns: None.
 */
void blenderStartBtn_cb(lv_obj_t * btn, lv_event_t event)
{
    uint32_t temp32 = 0, btnState, btnState2;
    uint8_t modeSelected = 0;

    btnState = lv_btn_get_state(guider_ui.BlenderHm_blendStartBtn);

        if (btnState == LV_BTN_STATE_CHECKED_RELEASED) {

            btnState2 = lv_btn_get_state(guider_ui.BlenderHm_iceBtn);
            if(btnState2 == LV_BTN_STATE_CHECKED_RELEASED) {
                modeSelected = 1;
            }

            btnState2 = lv_btn_get_state(guider_ui.BlenderHm_smoothieBtn);
            if(btnState2 == LV_BTN_STATE_CHECKED_RELEASED) {
                modeSelected = 1;
            }

            btnState2 = lv_btn_get_state(guider_ui.BlenderHm_soupBtn);
            if(btnState2 == LV_BTN_STATE_CHECKED_RELEASED) {
                modeSelected = 1;
            }

            btnState2 = lv_btn_get_state(guider_ui.BlenderHm_pulseBtn);
            if(btnState2 == LV_BTN_STATE_CHECKED_RELEASED) {
                modeSelected = 1;
            }

            /* Get Minutes from the minuteRoller */
            temp32 = lv_roller_get_selected(guider_ui.BlenderHm_secsRoller);
            /* Now populate minutes in global variable */
            if(temp32 < 60) {
                g_blendTime = temp32;
            }

            temp32 = lv_roller_get_selected(guider_ui.BlenderHm_minsRoller);

            if (temp32 < 10) {
                g_blendTime += (temp32 * 60);
            }

            /* Set blender active if there is a valid mode selected and if
             * there is a valid power level set.
             */
            if((modeSelected == 1) && (blenderPowerLevel > 0) && (g_blendTime > 0)) {
                g_blendActive = true;
            }
            else {
                lv_btn_set_state(guider_ui.BlenderHm_blendStartBtn, LV_BTN_STATE_RELEASED);
            }
        }

        if (btnState == LV_BTN_STATE_RELEASED) {
            /* Reset blend time and deactivate blending */
            g_blendActive = false;
            g_blendTime = 0;

            /* Reset time selection rollers */
            lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, 0, LV_ANIM_OFF);
            lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, 0, LV_ANIM_OFF);

            /* Ensure mode selection buttons are clear.
             * Don't worry about the start button, it is clear because we got to this
             * function.
             */
            lv_btn_set_state(guider_ui.BlenderHm_iceBtn, LV_BTN_STATE_RELEASED);
            lv_btn_set_state(guider_ui.BlenderHm_smoothieBtn, LV_BTN_STATE_RELEASED);
            lv_btn_set_state(guider_ui.BlenderHm_soupBtn, LV_BTN_STATE_RELEASED);
            lv_btn_set_state(guider_ui.BlenderHm_pulseBtn, LV_BTN_STATE_RELEASED);

            /* Reset power level */
            blenderPowerLevel = 0;
            setBlenderPowerLevel();

        }
}

/*
 * Function: blendActive_cb
 *
 * Description: This function executes when the blender counter decrements.  It
 * updates the time rollers to the appropriate blending time.
 *
 * Inputs: None
 *
 * Returns: None.
 */
void blendActive_cb(void)
{
    uint32_t temp32;

    /* Only execute if the blender is running */
    if(g_blendActive == true)
    {

        /* Get the number of minutes from the Blend time */
        temp32 = g_blendTime / 60;


        if(temp32 < 10) {
            /* Set minutes roller to the number of minutes left (determined from g_blendTime) */
        	lv_roller_set_selected(guider_ui.BlenderHm_minsRoller, temp32, LV_ANIM_OFF);
        }

        /* Get the number of seconds left in this minute from g_blendTime */
        temp32 = g_blendTime % 60;

        if(temp32 < 60) {
            /* If there are less than 60 seconds left in this minute, update the roller */
        	lv_roller_set_selected(guider_ui.BlenderHm_secsRoller, temp32, LV_ANIM_OFF);
        }

        if(g_blendTime == 0)
        {
            /* g_blendTime = 0, so deactivate the blender */
            g_blendActive = false;

            /* Unpress the blender start button */
            lv_btn_set_state(guider_ui.BlenderHm_blendStartBtn, LV_BTN_STATE_RELEASED);
        }
        else
        {
        	/* Otherwise, just decrement the counter */
            g_blendTime--;
        }
    }
}

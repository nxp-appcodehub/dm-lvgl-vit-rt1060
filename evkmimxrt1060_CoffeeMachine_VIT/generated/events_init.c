/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"





















#include "custom.h"
#include "custom.h"
#include "custom.h"
#include "custom.h"
#include "custom.h"
#include "custom.h"











void events_init(lv_ui *ui)
{
}

static void DefaultScrn_OvenBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.OvenHm))
			setup_scr_OvenHm(&guider_ui);
		lv_scr_load_anim(guider_ui.OvenHm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void DefaultScrn_CafeBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeHm))
			setup_scr_CafeHm(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeHm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		guider_ui.DefaultScrn = NULL;
	}
		break;
	default:
		break;
	}
}

static void DefaultScrn_BlenderBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.BlenderHm))
			setup_scr_BlenderHm(&guider_ui);
		lv_scr_load_anim(guider_ui.BlenderHm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		blenderSetup_cb();
	}
		break;
	default:
		break;
	}
}

void events_init_DefaultScrn(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->DefaultScrn_OvenBtn, DefaultScrn_OvenBtnevent_handler);
	lv_obj_set_event_cb(ui->DefaultScrn_CafeBtn, DefaultScrn_CafeBtnevent_handler);
	lv_obj_set_event_cb(ui->DefaultScrn_BlenderBtn, DefaultScrn_BlenderBtnevent_handler);
}

static void OvenHm_Bckgndevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.OvenSettings))
			setup_scr_OvenSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.OvenSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void OvenHm_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.DefaultScrn))
			setup_scr_DefaultScrn(&guider_ui);
		lv_scr_load_anim(guider_ui.DefaultScrn, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_OvenHm(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->OvenHm_Bckgnd, OvenHm_Bckgndevent_handler);
	lv_obj_set_event_cb(ui->OvenHm_backBtn, OvenHm_backBtnevent_handler);
}

static void CafeHm_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.DefaultScrn))
			setup_scr_DefaultScrn(&guider_ui);
		lv_scr_load_anim(guider_ui.DefaultScrn, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_espressoBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_ristrettoBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_americanoBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_cappucinoBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_latteBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeHm_mochaBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeSettings))
			setup_scr_CafeSettings(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		cafeBrewBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

void events_init_CafeHm(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->CafeHm_backBtn, CafeHm_backBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_espressoBtn, CafeHm_espressoBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_ristrettoBtn, CafeHm_ristrettoBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_americanoBtn, CafeHm_americanoBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_cappucinoBtn, CafeHm_cappucinoBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_latteBtn, CafeHm_latteBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeHm_mochaBtn, CafeHm_mochaBtnevent_handler);
}

static void CafeSettings_smallSizeBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		cafeSettingsSizeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeSettings_mediumSizeBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		cafeSettingsSizeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeSettings_largeSizeBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		cafeSettingsSizeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void CafeSettings_brewStartevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!checkCupSize()) {
		return;
		}
				setup_scr_CafeBrewScr(&guider_ui);
		
			lv_scr_load(guider_ui.CafeBrewScr);
	}
		break;
	default:
		break;
	}
}

static void CafeSettings_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.CafeHm))
			setup_scr_CafeHm(&guider_ui);
		lv_scr_load_anim(guider_ui.CafeHm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_CafeSettings(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->CafeSettings_smallSizeBtn, CafeSettings_smallSizeBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeSettings_mediumSizeBtn, CafeSettings_mediumSizeBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeSettings_largeSizeBtn, CafeSettings_largeSizeBtnevent_handler);
	lv_obj_set_event_cb(ui->CafeSettings_brewStart, CafeSettings_brewStartevent_handler);
	lv_obj_set_event_cb(ui->CafeSettings_backBtn, CafeSettings_backBtnevent_handler);
}

static void BlenderHm_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.DefaultScrn))
			setup_scr_DefaultScrn(&guider_ui);
		lv_scr_load_anim(guider_ui.DefaultScrn, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
		clearBlndSetup();
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_smoothieBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		blenderModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_iceBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		blenderModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_soupBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		blenderModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_pulseBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		blenderModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_blendStartBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		blenderStartBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_blenTimeUpevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		adjustBlendTime_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void BlenderHm_blenTimeDnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		adjustBlendTime_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

void events_init_BlenderHm(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->BlenderHm_backBtn, BlenderHm_backBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_smoothieBtn, BlenderHm_smoothieBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_iceBtn, BlenderHm_iceBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_soupBtn, BlenderHm_soupBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_pulseBtn, BlenderHm_pulseBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_blendStartBtn, BlenderHm_blendStartBtnevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_blenTimeUp, BlenderHm_blenTimeUpevent_handler);
	lv_obj_set_event_cb(ui->BlenderHm_blenTimeDn, BlenderHm_blenTimeDnevent_handler);
}

static void OvenSettings_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.DefaultScrn))
			setup_scr_DefaultScrn(&guider_ui);
		lv_scr_load_anim(guider_ui.DefaultScrn, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_broilBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_warmBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_conventBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_convectBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_cleanBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_bakeBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovenModeSelection_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_tempUpBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t maxCnt, currSel; 
		maxCnt = lv_roller_get_option_cnt(guider_ui.OvenSettings_tempRoller);
		        
		        currSel = lv_roller_get_selected(guider_ui.OvenSettings_tempRoller);
		        if((currSel + 1) < maxCnt) {
		            lv_roller_set_selected(guider_ui.OvenSettings_tempRoller, currSel+1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_minsUpBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t maxCnt, currSel;
		maxCnt = lv_roller_get_option_cnt(guider_ui.OvenSettings_minsRoller);
		        
		        currSel = lv_roller_get_selected(guider_ui.OvenSettings_minsRoller);
		        if((currSel + 1) < maxCnt) {
		            lv_roller_set_selected(guider_ui.OvenSettings_minsRoller, currSel+1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_secsUpBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t maxCnt, currSel;
		maxCnt = lv_roller_get_option_cnt(guider_ui.OvenSettings_secsRoller);
		        
		        currSel = lv_roller_get_selected(guider_ui.OvenSettings_secsRoller);
		        if((currSel + 1) < maxCnt) {
		            lv_roller_set_selected(guider_ui.OvenSettings_secsRoller, currSel+1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_tempDnBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t currSel; 
		currSel = 
		lv_roller_get_selected(guider_ui.OvenSettings_tempRoller);
		        if(currSel > 0) {
		            lv_roller_set_selected(guider_ui.OvenSettings_tempRoller, currSel-1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_minsDnBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t currSel; 
		currSel = 
		lv_roller_get_selected(guider_ui.OvenSettings_minsRoller);
		        if(currSel > 0) {
		            lv_roller_set_selected(guider_ui.OvenSettings_minsRoller, currSel-1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_secsDnBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		uint16_t currSel; 
		currSel = 
		lv_roller_get_selected(guider_ui.OvenSettings_secsRoller);
		        if(currSel > 0) {
		            lv_roller_set_selected(guider_ui.OvenSettings_secsRoller, currSel-1, LV_ANIM_ON);
		}
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_ckStartevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ovStartBtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

static void OvenSettings_ckResetevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_btn_set_state(guider_ui.OvenSettings_bakeBtn, LV_BTN_STATE_RELEASED);
		        lv_btn_set_state(guider_ui.OvenSettings_broilBtn, LV_BTN_STATE_RELEASED);
		        lv_btn_set_state(guider_ui.OvenSettings_cleanBtn, LV_BTN_STATE_RELEASED);
		        lv_btn_set_state(guider_ui.OvenSettings_warmBtn, LV_BTN_STATE_RELEASED);
		        lv_btn_set_state(guider_ui.OvenSettings_convectBtn, LV_BTN_STATE_RELEASED);
		        lv_btn_set_state(guider_ui.OvenSettings_conventBtn, LV_BTN_STATE_RELEASED);
		        
		        // Select option 1 for all rollers
		        lv_roller_set_selected(guider_ui.OvenSettings_tempRoller, 0, LV_ANIM_ON);
		        lv_roller_set_selected(guider_ui.OvenSettings_minsRoller, 0, LV_ANIM_ON);
		        lv_roller_set_selected(guider_ui.OvenSettings_secsRoller, 0, LV_ANIM_ON);
	}
		break;
	default:
		break;
	}
}

void events_init_OvenSettings(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->OvenSettings_backBtn, OvenSettings_backBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_broilBtn, OvenSettings_broilBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_warmBtn, OvenSettings_warmBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_conventBtn, OvenSettings_conventBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_convectBtn, OvenSettings_convectBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_cleanBtn, OvenSettings_cleanBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_bakeBtn, OvenSettings_bakeBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_tempUpBtn, OvenSettings_tempUpBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_minsUpBtn, OvenSettings_minsUpBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_secsUpBtn, OvenSettings_secsUpBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_tempDnBtn, OvenSettings_tempDnBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_minsDnBtn, OvenSettings_minsDnBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_secsDnBtn, OvenSettings_secsDnBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_ckStart, OvenSettings_ckStartevent_handler);
	lv_obj_set_event_cb(ui->OvenSettings_ckReset, OvenSettings_ckResetevent_handler);
}

static void OvenCk_backBtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_scr_load(guider_ui.OvenSettings);
	}
		break;
	default:
		break;
	}
}

static void OvenCk_ckCancelevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		ckCancelbtn_cb(obj, event);
	}
		break;
	default:
		break;
	}
}

void events_init_OvenCk(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->OvenCk_backBtn, OvenCk_backBtnevent_handler);
	lv_obj_set_event_cb(ui->OvenCk_ckCancel, OvenCk_ckCancelevent_handler);
}

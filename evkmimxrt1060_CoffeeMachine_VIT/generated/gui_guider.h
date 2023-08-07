/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *DefaultScrn;
	lv_obj_t *DefaultScrn_Bckgnd;
	lv_obj_t *DefaultScrn_OvenBtn;
	lv_obj_t *DefaultScrn_OvenBtn_label;
	lv_obj_t *DefaultScrn_CafeBtn;
	lv_obj_t *DefaultScrn_CafeBtn_label;
	lv_obj_t *DefaultScrn_BlenderBtn;
	lv_obj_t *DefaultScrn_BlenderBtn_label;
	lv_obj_t *OvenHm;
	lv_obj_t *OvenHm_Bckgnd;
	lv_obj_t *OvenHm_backBtn;
	lv_obj_t *OvenHm_backBtn_label;
	lv_obj_t *OvenHm_time;
	lv_obj_t *OvenHm_date;
	lv_obj_t *CafeHm;
	lv_obj_t *CafeHm_CafeBgnd;
	lv_obj_t *CafeHm_backBtn;
	lv_obj_t *CafeHm_backBtn_label;
	lv_obj_t *CafeHm_espressoBtn;
	lv_obj_t *CafeHm_espressoBtn_label;
	lv_obj_t *CafeHm_ristrettoBtn;
	lv_obj_t *CafeHm_ristrettoBtn_label;
	lv_obj_t *CafeHm_americanoBtn;
	lv_obj_t *CafeHm_americanoBtn_label;
	lv_obj_t *CafeHm_cappucinoBtn;
	lv_obj_t *CafeHm_cappucinoBtn_label;
	lv_obj_t *CafeHm_latteBtn;
	lv_obj_t *CafeHm_latteBtn_label;
	lv_obj_t *CafeHm_mochaBtn;
	lv_obj_t *CafeHm_mochaBtn_label;
	lv_obj_t *CafeHm_infoBtn;
	lv_obj_t *CafeHm_infoBtn_label;
	lv_obj_t *CafeHm_cleanBtn;
	lv_obj_t *CafeHm_cleanBtn_label;
	lv_obj_t *CafeHm_ristrettoLabel;
	lv_obj_t *CafeHm_expressoLabel;
	lv_obj_t *CafeHm_americanoLabel;
	lv_obj_t *CafeHm_cappucinoLabel;
	lv_obj_t *CafeHm_latteLabel;
	lv_obj_t *CafeHm_mochaLabel;
	lv_obj_t *CafeSettings;
	lv_obj_t *CafeSettings_Bckgnd;
	lv_obj_t *CafeSettings_americanoLarge;
	lv_obj_t *CafeSettings_smallSizeBtn;
	lv_obj_t *CafeSettings_smallSizeBtn_label;
	lv_obj_t *CafeSettings_mediumSizeBtn;
	lv_obj_t *CafeSettings_mediumSizeBtn_label;
	lv_obj_t *CafeSettings_largeSizeBtn;
	lv_obj_t *CafeSettings_largeSizeBtn_label;
	lv_obj_t *CafeSettings_brewStart;
	lv_obj_t *CafeSettings_brewStart_label;
	lv_obj_t *CafeSettings_strengthSlider;
	lv_obj_t *CafeSettings_sliderLabel;
	lv_obj_t *CafeSettings_cupImgLabel;
	lv_obj_t *CafeSettings_backBtn;
	lv_obj_t *CafeSettings_backBtn_label;
	lv_obj_t *CafeSettings_espressoLarge;
	lv_obj_t *CafeSettings_ristrettoLarge;
	lv_obj_t *CafeSettings_cappucinoLarge;
	lv_obj_t *CafeSettings_latteLarge;
	lv_obj_t *CafeSettings_mochaLarge;
	lv_obj_t *CafeBrewScr;
	lv_obj_t *CafeBrewScr_Bckgnd;
	lv_obj_t *CafeBrewScr_coffeePourAnim;
	lv_obj_t *CafeBrewScr_welcomeLabel;
	lv_obj_t *CafeBrewScr_statusLabel;
	lv_obj_t *BlenderHm;
	lv_obj_t *BlenderHm_Bckgnd;
	lv_obj_t *BlenderHm_backBtn;
	lv_obj_t *BlenderHm_backBtn_label;
	lv_obj_t *BlenderHm_backSlate;
	lv_obj_t *BlenderHm_smoothieBtn;
	lv_obj_t *BlenderHm_smoothieBtn_label;
	lv_obj_t *BlenderHm_iceBtn;
	lv_obj_t *BlenderHm_iceBtn_label;
	lv_obj_t *BlenderHm_soupBtn;
	lv_obj_t *BlenderHm_soupBtn_label;
	lv_obj_t *BlenderHm_pulseBtn;
	lv_obj_t *BlenderHm_pulseBtn_label;
	lv_obj_t *BlenderHm_blendStartBtn;
	lv_obj_t *BlenderHm_blendStartBtn_label;
	lv_obj_t *BlenderHm_bgndChart;
	lv_obj_t *BlenderHm_powerLevel;
	lv_obj_t *BlenderHm_blenTimeUp;
	lv_obj_t *BlenderHm_blenTimeUp_label;
	lv_obj_t *BlenderHm_blenTimeDn;
	lv_obj_t *BlenderHm_blenTimeDn_label;
	lv_obj_t *BlenderHm_secsRoller;
	lv_obj_t *BlenderHm_minsRoller;
	lv_obj_t *BlenderHm_colonLbl;
	lv_obj_t *OvenSettings;
	lv_obj_t *OvenSettings_Bckgnd;
	lv_obj_t *OvenSettings_backBtn;
	lv_obj_t *OvenSettings_backBtn_label;
	lv_obj_t *OvenSettings_broilBtn;
	lv_obj_t *OvenSettings_broilBtn_label;
	lv_obj_t *OvenSettings_warmBtn;
	lv_obj_t *OvenSettings_warmBtn_label;
	lv_obj_t *OvenSettings_conventBtn;
	lv_obj_t *OvenSettings_conventBtn_label;
	lv_obj_t *OvenSettings_convectBtn;
	lv_obj_t *OvenSettings_convectBtn_label;
	lv_obj_t *OvenSettings_cleanBtn;
	lv_obj_t *OvenSettings_cleanBtn_label;
	lv_obj_t *OvenSettings_bakeBtn;
	lv_obj_t *OvenSettings_bakeBtn_label;
	lv_obj_t *OvenSettings_lightBtn;
	lv_obj_t *OvenSettings_lightBtn_label;
	lv_obj_t *OvenSettings_tempLabel;
	lv_obj_t *OvenSettings_minsLabel;
	lv_obj_t *OvenSettings_secsLabel;
	lv_obj_t *OvenSettings_time;
	lv_obj_t *OvenSettings_tempRoller;
	lv_obj_t *OvenSettings_minsRoller;
	lv_obj_t *OvenSettings_secsRoller;
	lv_obj_t *OvenSettings_label16;
	lv_obj_t *OvenSettings_tempUpBtn;
	lv_obj_t *OvenSettings_tempUpBtn_label;
	lv_obj_t *OvenSettings_minsUpBtn;
	lv_obj_t *OvenSettings_minsUpBtn_label;
	lv_obj_t *OvenSettings_secsUpBtn;
	lv_obj_t *OvenSettings_secsUpBtn_label;
	lv_obj_t *OvenSettings_tempDnBtn;
	lv_obj_t *OvenSettings_tempDnBtn_label;
	lv_obj_t *OvenSettings_minsDnBtn;
	lv_obj_t *OvenSettings_minsDnBtn_label;
	lv_obj_t *OvenSettings_secsDnBtn;
	lv_obj_t *OvenSettings_secsDnBtn_label;
	lv_obj_t *OvenSettings_ckStart;
	lv_obj_t *OvenSettings_ckStart_label;
	lv_obj_t *OvenSettings_ckReset;
	lv_obj_t *OvenSettings_ckReset_label;
	lv_obj_t *OvenCk;
	lv_obj_t *OvenCk_Bckgnd;
	lv_obj_t *OvenCk_backBtn;
	lv_obj_t *OvenCk_backBtn_label;
	lv_obj_t *OvenCk_lightBtn;
	lv_obj_t *OvenCk_lightBtn_label;
	lv_obj_t *OvenCk_time;
	lv_obj_t *OvenCk_tempArc;
	lv_obj_t *OvenCk_timeMeter;
	lv_obj_t *OvenCk_ckCancel;
	lv_obj_t *OvenCk_ckCancel_label;
	lv_obj_t *OvenCk_ckTemp;
	lv_obj_t *OvenCk_ckTime;
	lv_obj_t *OvenCk_tempIcon;
	lv_obj_t *OvenCk_timerIcon;
	lv_obj_t *label_DefaultScrn_cmd;
	lv_obj_t *label_CafeHm_cmd;
	lv_obj_t *label_CafeSettings_cmd;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_DefaultScrn(lv_ui *ui);
void setup_scr_OvenHm(lv_ui *ui);
void setup_scr_CafeHm(lv_ui *ui);
void setup_scr_CafeSettings(lv_ui *ui);
void setup_scr_CafeBrewScr(lv_ui *ui);

#include "lvgl/src/lv_widgets/lv_anim_img.h"
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf001)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf002)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf003)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf004)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf005)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf006)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf007)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf008)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf009)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf010)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf011)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf012)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf013)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf014)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf015)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf016)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf017)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf018)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf019)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf020)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf021)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf022)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf023)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf024)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf025)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf026)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf027)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf028)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf029)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf030)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf031)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf032)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf033)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf034)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf035)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf036)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf037)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf038)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf039)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf040)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf041)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf042)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf043)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf044)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf045)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf046)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf047)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf048)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf049)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf050)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf051)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf052)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf053)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf054)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf055)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf056)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf057)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf058)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf059)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf060)
LV_IMG_DECLARE(CafeBrewScr_coffeePourAnimcf061)
void setup_scr_BlenderHm(lv_ui *ui);
void setup_scr_OvenSettings(lv_ui *ui);
void setup_scr_OvenCk(lv_ui *ui);
LV_IMG_DECLARE(_ristretto_alpha_100x100);
LV_IMG_DECLARE(_americano_alpha_100x100);
LV_IMG_DECLARE(_Combined_Shape_alpha_400x241);
LV_IMG_DECLARE(_mocha_alpha_100x100);
LV_IMG_DECLARE(_latte_alpha_50x50);
LV_IMG_DECLARE(_icecream_selected_alpha_50x50);
LV_IMG_DECLARE(_pulse_alpha_80x75);
LV_IMG_DECLARE(_icecream_alpha_50x50);
LV_IMG_DECLARE(_MainImage_alpha_480x272);
LV_IMG_DECLARE(_Light_selected_alpha_30x30);
LV_IMG_DECLARE(_small_alpha_35x35);
LV_IMG_DECLARE(_Broil_alpha_30x30);
LV_IMG_DECLARE(_btn_clean_alpha_30x30);
LV_IMG_DECLARE(_cappuccinno_alpha_100x100);
LV_IMG_DECLARE(_btn_info_alpha_30x30);
LV_IMG_DECLARE(_Light_alpha_30x30);
LV_IMG_DECLARE(_Bake_selected_alpha_30x30);
LV_IMG_DECLARE(_Convent_selected_alpha_30x30);
LV_IMG_DECLARE(_Bake_alpha_30x30);
LV_IMG_DECLARE(_soup_alpha_50x50);
LV_IMG_DECLARE(_ristretto_alpha_50x50);
LV_IMG_DECLARE(_smoothie_selected_alpha_50x50);
LV_IMG_DECLARE(_pulse_ghosted_alpha_80x75);
LV_IMG_DECLARE(_cappuccinno_alpha_50x50);
LV_IMG_DECLARE(_chevron_down_alpha_40x20);
LV_IMG_DECLARE(_Clean_selected_alpha_30x30);
LV_IMG_DECLARE(_Blender01_alpha_480x272);
LV_IMG_DECLARE(_Oven_alpha_150x45);
LV_IMG_DECLARE(_Blender_alpha_150x45);
LV_IMG_DECLARE(_chevron_alpha_40x20);
LV_IMG_DECLARE(_medium_alpha_35x40);
LV_IMG_DECLARE(_smoothie_alpha_50x50);
LV_IMG_DECLARE(_Warm_selected_alpha_30x30);
LV_IMG_DECLARE(_Convent_alpha_30x30);
LV_IMG_DECLARE(_Convect_selected_alpha_30x30);
LV_IMG_DECLARE(_temperature_icon_alpha_20x25);
LV_IMG_DECLARE(_icon_timer_alpha_20x25);
LV_IMG_DECLARE(_espresso_alpha_100x100);
LV_IMG_DECLARE(_espresso_alpha_50x50);
LV_IMG_DECLARE(_reset_alpha_100x50);
LV_IMG_DECLARE(_stop_alpha_75x75);
LV_IMG_DECLARE(_mocha_alpha_50x50);
LV_IMG_DECLARE(_soup_selected_alpha_50x50);
LV_IMG_DECLARE(_americano_alpha_50x50);
LV_IMG_DECLARE(_Clean_alpha_30x30);
LV_IMG_DECLARE(_start_active_alpha_100x50);
LV_IMG_DECLARE(_Small_selected_alpha_35x35);
LV_IMG_DECLARE(_Broil_selected_alpha_30x30);
LV_IMG_DECLARE(_Oven01_alpha_480x272);
LV_IMG_DECLARE(_coffee_machine_alpha_150x45);
LV_IMG_DECLARE(_Rectangle_alpha_480x272);
LV_IMG_DECLARE(_latte_alpha_100x100);
LV_IMG_DECLARE(_Convect_alpha_30x30);
LV_IMG_DECLARE(_Medium_selected_alpha_35x40);
LV_IMG_DECLARE(_back_alpha_30x30);
LV_IMG_DECLARE(_Warm_alpha_30x30);
LV_IMG_DECLARE(_large_alpha_50x50);
LV_IMG_DECLARE(_Large_selected_alpha_50x50);
LV_IMG_DECLARE(_start_alpha_75x75);

#ifdef __cplusplus
}
#endif
#endif
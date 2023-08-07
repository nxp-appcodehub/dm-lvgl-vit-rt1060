/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_OvenSettings(lv_ui *ui){

	//Write codes OvenSettings
	ui->OvenSettings = lv_obj_create(NULL, NULL);

	//Write codes OvenSettings_Bckgnd
	ui->OvenSettings_Bckgnd = lv_img_create(ui->OvenSettings, NULL);

	//Write style LV_IMG_PART_MAIN for OvenSettings_Bckgnd
	static lv_style_t style_OvenSettings_Bckgnd_main;
	lv_style_init(&style_OvenSettings_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_Bckgnd_main
	lv_style_set_image_recolor(&style_OvenSettings_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->OvenSettings_Bckgnd, LV_IMG_PART_MAIN, &style_OvenSettings_Bckgnd_main);
	lv_obj_set_pos(ui->OvenSettings_Bckgnd, 0, 0);
	lv_obj_set_size(ui->OvenSettings_Bckgnd, 480, 272);
	lv_obj_set_click(ui->OvenSettings_Bckgnd, true);
	lv_img_set_src(ui->OvenSettings_Bckgnd,&_Oven01_alpha_480x272);
	lv_img_set_pivot(ui->OvenSettings_Bckgnd, 0,0);
	lv_img_set_angle(ui->OvenSettings_Bckgnd, 0);

	//Write codes OvenSettings_backBtn
	ui->OvenSettings_backBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_backBtn
	static lv_style_t style_OvenSettings_backBtn_main;
	lv_style_init(&style_OvenSettings_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_backBtn_main
	lv_style_set_text_color(&style_OvenSettings_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_OvenSettings_backBtn_main
	lv_style_set_text_color(&style_OvenSettings_backBtn_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_backBtn_main, LV_STATE_PRESSED, lv_color_make(0xdd, 0xd4, 0xd4));
	lv_style_set_image_recolor_opa(&style_OvenSettings_backBtn_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_backBtn_main
	lv_style_set_text_color(&style_OvenSettings_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_backBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_backBtn_main);
	lv_obj_set_pos(ui->OvenSettings_backBtn, 10, 10);
	lv_obj_set_size(ui->OvenSettings_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes OvenSettings_broilBtn
	ui->OvenSettings_broilBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_broilBtn
	static lv_style_t style_OvenSettings_broilBtn_main;
	lv_style_init(&style_OvenSettings_broilBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_broilBtn_main
	lv_style_set_text_color(&style_OvenSettings_broilBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_broilBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_broilBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_broilBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_broilBtn_main
	lv_style_set_text_color(&style_OvenSettings_broilBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_broilBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_broilBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_broilBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_broilBtn_main);
	lv_obj_set_pos(ui->OvenSettings_broilBtn, 10, 60);
	lv_obj_set_size(ui->OvenSettings_broilBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_broilBtn,LV_BTN_STATE_RELEASED,&_Broil_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_broilBtn,LV_BTN_STATE_PRESSED,&_Broil_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_broilBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Broil_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_broilBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Broil_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_broilBtn, true);

	//Write codes OvenSettings_warmBtn
	ui->OvenSettings_warmBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_warmBtn
	static lv_style_t style_OvenSettings_warmBtn_main;
	lv_style_init(&style_OvenSettings_warmBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_warmBtn_main
	lv_style_set_text_color(&style_OvenSettings_warmBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_warmBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_warmBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_warmBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_warmBtn_main
	lv_style_set_text_color(&style_OvenSettings_warmBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_warmBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_warmBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_warmBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_warmBtn_main);
	lv_obj_set_pos(ui->OvenSettings_warmBtn, 10, 95);
	lv_obj_set_size(ui->OvenSettings_warmBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_warmBtn,LV_BTN_STATE_RELEASED,&_Warm_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_warmBtn,LV_BTN_STATE_PRESSED,&_Warm_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_warmBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Warm_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_warmBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Warm_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_warmBtn, true);

	//Write codes OvenSettings_conventBtn
	ui->OvenSettings_conventBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_conventBtn
	static lv_style_t style_OvenSettings_conventBtn_main;
	lv_style_init(&style_OvenSettings_conventBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_conventBtn_main
	lv_style_set_text_color(&style_OvenSettings_conventBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_conventBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_conventBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_conventBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_conventBtn_main
	lv_style_set_text_color(&style_OvenSettings_conventBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_conventBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_conventBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_conventBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_conventBtn_main);
	lv_obj_set_pos(ui->OvenSettings_conventBtn, 10, 165);
	lv_obj_set_size(ui->OvenSettings_conventBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_conventBtn,LV_BTN_STATE_RELEASED,&_Convent_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_conventBtn,LV_BTN_STATE_PRESSED,&_Convent_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_conventBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Convent_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_conventBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Convent_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_conventBtn, true);

	//Write codes OvenSettings_convectBtn
	ui->OvenSettings_convectBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_convectBtn
	static lv_style_t style_OvenSettings_convectBtn_main;
	lv_style_init(&style_OvenSettings_convectBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_convectBtn_main
	lv_style_set_text_color(&style_OvenSettings_convectBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_convectBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_convectBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_convectBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_convectBtn_main
	lv_style_set_text_color(&style_OvenSettings_convectBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_convectBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_convectBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_convectBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_convectBtn_main);
	lv_obj_set_pos(ui->OvenSettings_convectBtn, 10, 130);
	lv_obj_set_size(ui->OvenSettings_convectBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_convectBtn,LV_BTN_STATE_RELEASED,&_Convect_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_convectBtn,LV_BTN_STATE_PRESSED,&_Convect_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_convectBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Convect_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_convectBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Convect_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_convectBtn, true);

	//Write codes OvenSettings_cleanBtn
	ui->OvenSettings_cleanBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_cleanBtn
	static lv_style_t style_OvenSettings_cleanBtn_main;
	lv_style_init(&style_OvenSettings_cleanBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_cleanBtn_main
	lv_style_set_text_color(&style_OvenSettings_cleanBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_cleanBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_cleanBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_cleanBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_cleanBtn_main
	lv_style_set_text_color(&style_OvenSettings_cleanBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_cleanBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_cleanBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_cleanBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_cleanBtn_main);
	lv_obj_set_pos(ui->OvenSettings_cleanBtn, 10, 235);
	lv_obj_set_size(ui->OvenSettings_cleanBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_cleanBtn,LV_BTN_STATE_RELEASED,&_Clean_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_cleanBtn,LV_BTN_STATE_PRESSED,&_Clean_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_cleanBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Clean_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_cleanBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Clean_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_cleanBtn, true);

	//Write codes OvenSettings_bakeBtn
	ui->OvenSettings_bakeBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_bakeBtn
	static lv_style_t style_OvenSettings_bakeBtn_main;
	lv_style_init(&style_OvenSettings_bakeBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_bakeBtn_main
	lv_style_set_text_color(&style_OvenSettings_bakeBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_bakeBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_bakeBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_bakeBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_bakeBtn_main
	lv_style_set_text_color(&style_OvenSettings_bakeBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_bakeBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_bakeBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_bakeBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_bakeBtn_main);
	lv_obj_set_pos(ui->OvenSettings_bakeBtn, 10, 200);
	lv_obj_set_size(ui->OvenSettings_bakeBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_bakeBtn,LV_BTN_STATE_RELEASED,&_Bake_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_bakeBtn,LV_BTN_STATE_PRESSED,&_Bake_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_bakeBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Bake_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_bakeBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Bake_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_bakeBtn, true);

	//Write codes OvenSettings_lightBtn
	ui->OvenSettings_lightBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_lightBtn
	static lv_style_t style_OvenSettings_lightBtn_main;
	lv_style_init(&style_OvenSettings_lightBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_lightBtn_main
	lv_style_set_text_color(&style_OvenSettings_lightBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_lightBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_lightBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_lightBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_lightBtn_main
	lv_style_set_text_color(&style_OvenSettings_lightBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_lightBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_lightBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_lightBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_lightBtn_main);
	lv_obj_set_pos(ui->OvenSettings_lightBtn, 440, 10);
	lv_obj_set_size(ui->OvenSettings_lightBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenSettings_lightBtn,LV_BTN_STATE_RELEASED,&_Light_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_lightBtn,LV_BTN_STATE_PRESSED,&_Light_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_lightBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Light_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenSettings_lightBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Light_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenSettings_lightBtn, true);

	//Write codes OvenSettings_tempLabel
	ui->OvenSettings_tempLabel = lv_label_create(ui->OvenSettings, NULL);
	lv_label_set_text(ui->OvenSettings_tempLabel, "DEG F");
	lv_label_set_long_mode(ui->OvenSettings_tempLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenSettings_tempLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenSettings_tempLabel
	static lv_style_t style_OvenSettings_tempLabel_main;
	lv_style_init(&style_OvenSettings_tempLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_tempLabel_main
	lv_style_set_radius(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenSettings_tempLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenSettings_tempLabel, LV_LABEL_PART_MAIN, &style_OvenSettings_tempLabel_main);
	lv_obj_set_pos(ui->OvenSettings_tempLabel, 100, 241);
	lv_obj_set_size(ui->OvenSettings_tempLabel, 40, 0);

	//Write codes OvenSettings_minsLabel
	ui->OvenSettings_minsLabel = lv_label_create(ui->OvenSettings, NULL);
	lv_label_set_text(ui->OvenSettings_minsLabel, "MINS");
	lv_label_set_long_mode(ui->OvenSettings_minsLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenSettings_minsLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenSettings_minsLabel
	static lv_style_t style_OvenSettings_minsLabel_main;
	lv_style_init(&style_OvenSettings_minsLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_minsLabel_main
	lv_style_set_radius(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenSettings_minsLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenSettings_minsLabel, LV_LABEL_PART_MAIN, &style_OvenSettings_minsLabel_main);
	lv_obj_set_pos(ui->OvenSettings_minsLabel, 188, 243);
	lv_obj_set_size(ui->OvenSettings_minsLabel, 40, 0);

	//Write codes OvenSettings_secsLabel
	ui->OvenSettings_secsLabel = lv_label_create(ui->OvenSettings, NULL);
	lv_label_set_text(ui->OvenSettings_secsLabel, "SECS");
	lv_label_set_long_mode(ui->OvenSettings_secsLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenSettings_secsLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenSettings_secsLabel
	static lv_style_t style_OvenSettings_secsLabel_main;
	lv_style_init(&style_OvenSettings_secsLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_secsLabel_main
	lv_style_set_radius(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenSettings_secsLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenSettings_secsLabel, LV_LABEL_PART_MAIN, &style_OvenSettings_secsLabel_main);
	lv_obj_set_pos(ui->OvenSettings_secsLabel, 290, 241);
	lv_obj_set_size(ui->OvenSettings_secsLabel, 40, 0);

	//Write codes OvenSettings_time
	ui->OvenSettings_time = lv_label_create(ui->OvenSettings, NULL);
	lv_label_set_text(ui->OvenSettings_time, "10:30 AM");
	lv_label_set_long_mode(ui->OvenSettings_time, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenSettings_time, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenSettings_time
	static lv_style_t style_OvenSettings_time_main;
	lv_style_init(&style_OvenSettings_time_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_time_main
	lv_style_set_radius(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenSettings_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_time_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenSettings_time_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenSettings_time_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenSettings_time, LV_LABEL_PART_MAIN, &style_OvenSettings_time_main);
	lv_obj_set_pos(ui->OvenSettings_time, 310, 19);
	lv_obj_set_size(ui->OvenSettings_time, 100, 0);

	//Write codes OvenSettings_tempRoller
	ui->OvenSettings_tempRoller = lv_roller_create(ui->OvenSettings, NULL);

	//Write style LV_ROLLER_PART_BG for OvenSettings_tempRoller
	static lv_style_t style_OvenSettings_tempRoller_bg;
	lv_style_init(&style_OvenSettings_tempRoller_bg);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_tempRoller_bg
	lv_style_set_radius(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_border_color(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xdf, 0xe7, 0xed));
	lv_style_set_border_width(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_tempRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->OvenSettings_tempRoller, LV_ROLLER_PART_BG, &style_OvenSettings_tempRoller_bg);

	//Write style LV_ROLLER_PART_SELECTED for OvenSettings_tempRoller
	static lv_style_t style_OvenSettings_tempRoller_selected;
	lv_style_init(&style_OvenSettings_tempRoller_selected);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_tempRoller_selected
	lv_style_set_bg_color(&style_OvenSettings_tempRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_OvenSettings_tempRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_OvenSettings_tempRoller_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_tempRoller_selected, LV_STATE_DEFAULT, 10);
	lv_style_set_text_color(&style_OvenSettings_tempRoller_selected, LV_STATE_DEFAULT, lv_color_make(0xFF, 0xFF, 0xFF));
	lv_obj_add_style(ui->OvenSettings_tempRoller, LV_ROLLER_PART_SELECTED, &style_OvenSettings_tempRoller_selected);
	lv_obj_set_pos(ui->OvenSettings_tempRoller, 89, 115);
	lv_roller_set_options(ui->OvenSettings_tempRoller,"150\n155\n160\n165\n170\n175\n180\n185\n190\n195\n200\n205\n210\n215\n225\n230\n235\n240\n245\n250\n255\n260\n265\n270\n275\n280\n285\n290\n295\n300\n305\n310\n315\n320\n325\n330\n335\n340\n345\n350\n355\n360\n365\n370\n375\n380\n385\n390\n395\n400",LV_ROLLER_MODE_NORMAL);
	lv_obj_set_style_local_text_font(ui->OvenSettings_tempRoller, LV_ROLLER_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_tempRoller, LV_ROLLER_PART_BG, LV_STATE_FOCUSED, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_tempRoller, LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_roller_set_visible_row_count(ui->OvenSettings_tempRoller,1);

	//Write codes OvenSettings_minsRoller
	ui->OvenSettings_minsRoller = lv_roller_create(ui->OvenSettings, NULL);

	//Write style LV_ROLLER_PART_BG for OvenSettings_minsRoller
	static lv_style_t style_OvenSettings_minsRoller_bg;
	lv_style_init(&style_OvenSettings_minsRoller_bg);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_minsRoller_bg
	lv_style_set_radius(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_border_color(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xdf, 0xe7, 0xed));
	lv_style_set_border_width(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->OvenSettings_minsRoller, LV_ROLLER_PART_BG, &style_OvenSettings_minsRoller_bg);

	//Write style LV_ROLLER_PART_SELECTED for OvenSettings_minsRoller
	static lv_style_t style_OvenSettings_minsRoller_selected;
	lv_style_init(&style_OvenSettings_minsRoller_selected);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_minsRoller_selected
	lv_style_set_bg_color(&style_OvenSettings_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_OvenSettings_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_OvenSettings_minsRoller_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_minsRoller_selected, LV_STATE_DEFAULT, 10);
	lv_style_set_text_color(&style_OvenSettings_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0xFF, 0xFF, 0xFF));
	lv_obj_add_style(ui->OvenSettings_minsRoller, LV_ROLLER_PART_SELECTED, &style_OvenSettings_minsRoller_selected);
	lv_obj_set_pos(ui->OvenSettings_minsRoller, 192, 110);
	lv_roller_set_options(ui->OvenSettings_minsRoller,"0\n1\n2\n3\n4\n5\n6\n7\n8",LV_ROLLER_MODE_NORMAL);
	lv_obj_set_style_local_text_font(ui->OvenSettings_minsRoller, LV_ROLLER_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_minsRoller, LV_ROLLER_PART_BG, LV_STATE_FOCUSED, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_minsRoller, LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_roller_set_visible_row_count(ui->OvenSettings_minsRoller,1);

	//Write codes OvenSettings_secsRoller
	ui->OvenSettings_secsRoller = lv_roller_create(ui->OvenSettings, NULL);

	//Write style LV_ROLLER_PART_BG for OvenSettings_secsRoller
	static lv_style_t style_OvenSettings_secsRoller_bg;
	lv_style_init(&style_OvenSettings_secsRoller_bg);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_secsRoller_bg
	lv_style_set_radius(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_border_color(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xdf, 0xe7, 0xed));
	lv_style_set_border_width(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->OvenSettings_secsRoller, LV_ROLLER_PART_BG, &style_OvenSettings_secsRoller_bg);

	//Write style LV_ROLLER_PART_SELECTED for OvenSettings_secsRoller
	static lv_style_t style_OvenSettings_secsRoller_selected;
	lv_style_init(&style_OvenSettings_secsRoller_selected);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_secsRoller_selected
	lv_style_set_bg_color(&style_OvenSettings_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_OvenSettings_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_OvenSettings_secsRoller_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_secsRoller_selected, LV_STATE_DEFAULT, 10);
	lv_style_set_text_color(&style_OvenSettings_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0xFF, 0xFF, 0xFF));
	lv_obj_add_style(ui->OvenSettings_secsRoller, LV_ROLLER_PART_SELECTED, &style_OvenSettings_secsRoller_selected);
	lv_obj_set_pos(ui->OvenSettings_secsRoller, 280, 109);
	lv_roller_set_options(ui->OvenSettings_secsRoller,"00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",LV_ROLLER_MODE_NORMAL);
	lv_obj_set_style_local_text_font(ui->OvenSettings_secsRoller, LV_ROLLER_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_secsRoller, LV_ROLLER_PART_BG, LV_STATE_FOCUSED, &lv_font_montserrat_32);
	lv_obj_set_style_local_text_font(ui->OvenSettings_secsRoller, LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_roller_set_visible_row_count(ui->OvenSettings_secsRoller,1);

	//Write codes OvenSettings_label16
	ui->OvenSettings_label16 = lv_label_create(ui->OvenSettings, NULL);
	lv_label_set_text(ui->OvenSettings_label16, ":");
	lv_label_set_long_mode(ui->OvenSettings_label16, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenSettings_label16, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenSettings_label16
	static lv_style_t style_OvenSettings_label16_main;
	lv_style_init(&style_OvenSettings_label16_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_label16_main
	lv_style_set_radius(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, &lv_font_montserrat_32);
	lv_style_set_text_letter_space(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenSettings_label16_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenSettings_label16, LV_LABEL_PART_MAIN, &style_OvenSettings_label16_main);
	lv_obj_set_pos(ui->OvenSettings_label16, 250, 115);
	lv_obj_set_size(ui->OvenSettings_label16, 20, 0);

	//Write codes OvenSettings_tempUpBtn
	ui->OvenSettings_tempUpBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_tempUpBtn
	static lv_style_t style_OvenSettings_tempUpBtn_main;
	lv_style_init(&style_OvenSettings_tempUpBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_tempUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_tempUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_tempUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_tempUpBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_tempUpBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_tempUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_tempUpBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_tempUpBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_tempUpBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_tempUpBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_tempUpBtn_main);
	lv_obj_set_pos(ui->OvenSettings_tempUpBtn, 100, 60);
	lv_obj_set_size(ui->OvenSettings_tempUpBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_tempUpBtn,LV_BTN_STATE_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempUpBtn,LV_BTN_STATE_PRESSED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempUpBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempUpBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_alpha_40x20);

	//Write codes OvenSettings_minsUpBtn
	ui->OvenSettings_minsUpBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_minsUpBtn
	static lv_style_t style_OvenSettings_minsUpBtn_main;
	lv_style_init(&style_OvenSettings_minsUpBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_minsUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_minsUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_minsUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_minsUpBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_minsUpBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_minsUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_minsUpBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_minsUpBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_minsUpBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_minsUpBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_minsUpBtn_main);
	lv_obj_set_pos(ui->OvenSettings_minsUpBtn, 200, 60);
	lv_obj_set_size(ui->OvenSettings_minsUpBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_minsUpBtn,LV_BTN_STATE_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsUpBtn,LV_BTN_STATE_PRESSED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsUpBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsUpBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_alpha_40x20);

	//Write codes OvenSettings_secsUpBtn
	ui->OvenSettings_secsUpBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_secsUpBtn
	static lv_style_t style_OvenSettings_secsUpBtn_main;
	lv_style_init(&style_OvenSettings_secsUpBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_secsUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_secsUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_secsUpBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_secsUpBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_secsUpBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_secsUpBtn_main
	lv_style_set_text_color(&style_OvenSettings_secsUpBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_secsUpBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_secsUpBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_secsUpBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_secsUpBtn_main);
	lv_obj_set_pos(ui->OvenSettings_secsUpBtn, 285, 60);
	lv_obj_set_size(ui->OvenSettings_secsUpBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_secsUpBtn,LV_BTN_STATE_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsUpBtn,LV_BTN_STATE_PRESSED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsUpBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsUpBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_alpha_40x20);

	//Write codes OvenSettings_tempDnBtn
	ui->OvenSettings_tempDnBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_tempDnBtn
	static lv_style_t style_OvenSettings_tempDnBtn_main;
	lv_style_init(&style_OvenSettings_tempDnBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_tempDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_tempDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_tempDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_tempDnBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_tempDnBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_tempDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_tempDnBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_tempDnBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_tempDnBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_tempDnBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_tempDnBtn_main);
	lv_obj_set_pos(ui->OvenSettings_tempDnBtn, 100, 200);
	lv_obj_set_size(ui->OvenSettings_tempDnBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_tempDnBtn,LV_BTN_STATE_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempDnBtn,LV_BTN_STATE_PRESSED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempDnBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_tempDnBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_down_alpha_40x20);

	//Write codes OvenSettings_minsDnBtn
	ui->OvenSettings_minsDnBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_minsDnBtn
	static lv_style_t style_OvenSettings_minsDnBtn_main;
	lv_style_init(&style_OvenSettings_minsDnBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_minsDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_minsDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_minsDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_minsDnBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_minsDnBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_minsDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_minsDnBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_minsDnBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_minsDnBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_minsDnBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_minsDnBtn_main);
	lv_obj_set_pos(ui->OvenSettings_minsDnBtn, 200, 200);
	lv_obj_set_size(ui->OvenSettings_minsDnBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_minsDnBtn,LV_BTN_STATE_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsDnBtn,LV_BTN_STATE_PRESSED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsDnBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_minsDnBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_down_alpha_40x20);

	//Write codes OvenSettings_secsDnBtn
	ui->OvenSettings_secsDnBtn = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_secsDnBtn
	static lv_style_t style_OvenSettings_secsDnBtn_main;
	lv_style_init(&style_OvenSettings_secsDnBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_secsDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_secsDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_secsDnBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_secsDnBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_secsDnBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_secsDnBtn_main
	lv_style_set_text_color(&style_OvenSettings_secsDnBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_secsDnBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_secsDnBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_secsDnBtn, LV_IMGBTN_PART_MAIN, &style_OvenSettings_secsDnBtn_main);
	lv_obj_set_pos(ui->OvenSettings_secsDnBtn, 285, 200);
	lv_obj_set_size(ui->OvenSettings_secsDnBtn, 40, 20);
	lv_imgbtn_set_src(ui->OvenSettings_secsDnBtn,LV_BTN_STATE_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsDnBtn,LV_BTN_STATE_PRESSED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsDnBtn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->OvenSettings_secsDnBtn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_down_alpha_40x20);

	//Write codes OvenSettings_ckStart
	ui->OvenSettings_ckStart = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_ckStart
	static lv_style_t style_OvenSettings_ckStart_main;
	lv_style_init(&style_OvenSettings_ckStart_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_ckStart_main
	lv_style_set_text_color(&style_OvenSettings_ckStart_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_ckStart_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_ckStart_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_ckStart_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_ckStart_main
	lv_style_set_text_color(&style_OvenSettings_ckStart_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_ckStart_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_ckStart_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_ckStart, LV_IMGBTN_PART_MAIN, &style_OvenSettings_ckStart_main);
	lv_obj_set_pos(ui->OvenSettings_ckStart, 370, 90);
	lv_obj_set_size(ui->OvenSettings_ckStart, 100, 50);
	lv_imgbtn_set_src(ui->OvenSettings_ckStart,LV_BTN_STATE_RELEASED,&_start_active_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckStart,LV_BTN_STATE_PRESSED,&_start_active_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckStart,LV_BTN_STATE_CHECKED_RELEASED,&_start_active_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckStart,LV_BTN_STATE_CHECKED_PRESSED,&_start_active_alpha_100x50);

	//Write codes OvenSettings_ckReset
	ui->OvenSettings_ckReset = lv_imgbtn_create(ui->OvenSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenSettings_ckReset
	static lv_style_t style_OvenSettings_ckReset_main;
	lv_style_init(&style_OvenSettings_ckReset_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenSettings_ckReset_main
	lv_style_set_text_color(&style_OvenSettings_ckReset_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenSettings_ckReset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenSettings_ckReset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenSettings_ckReset_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenSettings_ckReset_main
	lv_style_set_text_color(&style_OvenSettings_ckReset_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenSettings_ckReset_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenSettings_ckReset_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenSettings_ckReset, LV_IMGBTN_PART_MAIN, &style_OvenSettings_ckReset_main);
	lv_obj_set_pos(ui->OvenSettings_ckReset, 370, 160);
	lv_obj_set_size(ui->OvenSettings_ckReset, 100, 50);
	lv_imgbtn_set_src(ui->OvenSettings_ckReset,LV_BTN_STATE_RELEASED,&_reset_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckReset,LV_BTN_STATE_PRESSED,&_reset_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckReset,LV_BTN_STATE_CHECKED_RELEASED,&_reset_alpha_100x50);
	lv_imgbtn_set_src(ui->OvenSettings_ckReset,LV_BTN_STATE_CHECKED_PRESSED,&_reset_alpha_100x50);

	//Init events for screen
	events_init_OvenSettings(ui);
}
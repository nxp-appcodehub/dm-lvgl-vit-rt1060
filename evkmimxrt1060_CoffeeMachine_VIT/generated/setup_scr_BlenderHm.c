/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_BlenderHm(lv_ui *ui){

	//Write codes BlenderHm
	ui->BlenderHm = lv_obj_create(NULL, NULL);

	//Write codes BlenderHm_Bckgnd
	ui->BlenderHm_Bckgnd = lv_img_create(ui->BlenderHm, NULL);

	//Write style LV_IMG_PART_MAIN for BlenderHm_Bckgnd
	static lv_style_t style_BlenderHm_Bckgnd_main;
	lv_style_init(&style_BlenderHm_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_Bckgnd_main
	lv_style_set_image_recolor(&style_BlenderHm_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->BlenderHm_Bckgnd, LV_IMG_PART_MAIN, &style_BlenderHm_Bckgnd_main);
	lv_obj_set_pos(ui->BlenderHm_Bckgnd, 0, 0);
	lv_obj_set_size(ui->BlenderHm_Bckgnd, 480, 272);
	lv_obj_set_click(ui->BlenderHm_Bckgnd, true);
	lv_img_set_src(ui->BlenderHm_Bckgnd,&_Blender01_alpha_480x272);
	lv_img_set_pivot(ui->BlenderHm_Bckgnd, 0,0);
	lv_img_set_angle(ui->BlenderHm_Bckgnd, 0);

	//Write codes BlenderHm_backBtn
	ui->BlenderHm_backBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_backBtn
	static lv_style_t style_BlenderHm_backBtn_main;
	lv_style_init(&style_BlenderHm_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_backBtn_main
	lv_style_set_text_color(&style_BlenderHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_backBtn_main
	lv_style_set_text_color(&style_BlenderHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_backBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_backBtn_main);
	lv_obj_set_pos(ui->BlenderHm_backBtn, 10, 10);
	lv_obj_set_size(ui->BlenderHm_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->BlenderHm_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->BlenderHm_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->BlenderHm_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->BlenderHm_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes BlenderHm_backSlate
	ui->BlenderHm_backSlate = lv_img_create(ui->BlenderHm, NULL);

	//Write style LV_IMG_PART_MAIN for BlenderHm_backSlate
	static lv_style_t style_BlenderHm_backSlate_main;
	lv_style_init(&style_BlenderHm_backSlate_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_backSlate_main
	lv_style_set_image_recolor(&style_BlenderHm_backSlate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_backSlate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_backSlate_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->BlenderHm_backSlate, LV_IMG_PART_MAIN, &style_BlenderHm_backSlate_main);
	lv_obj_set_pos(ui->BlenderHm_backSlate, 45, 15);
	lv_obj_set_size(ui->BlenderHm_backSlate, 400, 241);
	lv_obj_set_click(ui->BlenderHm_backSlate, true);
	lv_img_set_src(ui->BlenderHm_backSlate,&_Combined_Shape_alpha_400x241);
	lv_img_set_pivot(ui->BlenderHm_backSlate, 0,0);
	lv_img_set_angle(ui->BlenderHm_backSlate, 0);

	//Write codes BlenderHm_smoothieBtn
	ui->BlenderHm_smoothieBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_smoothieBtn
	static lv_style_t style_BlenderHm_smoothieBtn_main;
	lv_style_init(&style_BlenderHm_smoothieBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_smoothieBtn_main
	lv_style_set_text_color(&style_BlenderHm_smoothieBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_smoothieBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_smoothieBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_smoothieBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_smoothieBtn_main
	lv_style_set_text_color(&style_BlenderHm_smoothieBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_smoothieBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_smoothieBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_smoothieBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_smoothieBtn_main);
	lv_obj_set_pos(ui->BlenderHm_smoothieBtn, 145, 35);
	lv_obj_set_size(ui->BlenderHm_smoothieBtn, 50, 50);
	lv_imgbtn_set_src(ui->BlenderHm_smoothieBtn,LV_BTN_STATE_RELEASED,&_smoothie_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_smoothieBtn,LV_BTN_STATE_PRESSED,&_smoothie_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_smoothieBtn,LV_BTN_STATE_CHECKED_RELEASED,&_smoothie_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_smoothieBtn,LV_BTN_STATE_CHECKED_PRESSED,&_smoothie_alpha_50x50);
	lv_imgbtn_set_checkable(ui->BlenderHm_smoothieBtn, true);

	//Write codes BlenderHm_iceBtn
	ui->BlenderHm_iceBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_iceBtn
	static lv_style_t style_BlenderHm_iceBtn_main;
	lv_style_init(&style_BlenderHm_iceBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_iceBtn_main
	lv_style_set_text_color(&style_BlenderHm_iceBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_iceBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_iceBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_iceBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_iceBtn_main
	lv_style_set_text_color(&style_BlenderHm_iceBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_iceBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_iceBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_iceBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_iceBtn_main);
	lv_obj_set_pos(ui->BlenderHm_iceBtn, 215, 35);
	lv_obj_set_size(ui->BlenderHm_iceBtn, 50, 50);
	lv_imgbtn_set_src(ui->BlenderHm_iceBtn,LV_BTN_STATE_RELEASED,&_icecream_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_iceBtn,LV_BTN_STATE_PRESSED,&_icecream_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_iceBtn,LV_BTN_STATE_CHECKED_RELEASED,&_icecream_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_iceBtn,LV_BTN_STATE_CHECKED_PRESSED,&_icecream_alpha_50x50);
	lv_imgbtn_set_checkable(ui->BlenderHm_iceBtn, true);

	//Write codes BlenderHm_soupBtn
	ui->BlenderHm_soupBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_soupBtn
	static lv_style_t style_BlenderHm_soupBtn_main;
	lv_style_init(&style_BlenderHm_soupBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_soupBtn_main
	lv_style_set_text_color(&style_BlenderHm_soupBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_soupBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_soupBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_soupBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_soupBtn_main
	lv_style_set_text_color(&style_BlenderHm_soupBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_soupBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_soupBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_soupBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_soupBtn_main);
	lv_obj_set_pos(ui->BlenderHm_soupBtn, 285, 35);
	lv_obj_set_size(ui->BlenderHm_soupBtn, 50, 50);
	lv_imgbtn_set_src(ui->BlenderHm_soupBtn,LV_BTN_STATE_RELEASED,&_soup_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_soupBtn,LV_BTN_STATE_PRESSED,&_soup_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_soupBtn,LV_BTN_STATE_CHECKED_RELEASED,&_soup_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->BlenderHm_soupBtn,LV_BTN_STATE_CHECKED_PRESSED,&_soup_alpha_50x50);
	lv_imgbtn_set_checkable(ui->BlenderHm_soupBtn, true);

	//Write codes BlenderHm_pulseBtn
	ui->BlenderHm_pulseBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_pulseBtn
	static lv_style_t style_BlenderHm_pulseBtn_main;
	lv_style_init(&style_BlenderHm_pulseBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_pulseBtn_main
	lv_style_set_text_color(&style_BlenderHm_pulseBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_pulseBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_pulseBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_pulseBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_pulseBtn_main
	lv_style_set_text_color(&style_BlenderHm_pulseBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_pulseBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_pulseBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_pulseBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_pulseBtn_main);
	lv_obj_set_pos(ui->BlenderHm_pulseBtn, 54, 99);
	lv_obj_set_size(ui->BlenderHm_pulseBtn, 80, 75);
	lv_imgbtn_set_src(ui->BlenderHm_pulseBtn,LV_BTN_STATE_RELEASED,&_pulse_alpha_80x75);
	lv_imgbtn_set_src(ui->BlenderHm_pulseBtn,LV_BTN_STATE_PRESSED,&_pulse_ghosted_alpha_80x75);
	lv_imgbtn_set_src(ui->BlenderHm_pulseBtn,LV_BTN_STATE_CHECKED_RELEASED,&_pulse_ghosted_alpha_80x75);
	lv_imgbtn_set_src(ui->BlenderHm_pulseBtn,LV_BTN_STATE_CHECKED_PRESSED,&_pulse_alpha_80x75);
	lv_imgbtn_set_checkable(ui->BlenderHm_pulseBtn, true);

	//Write codes BlenderHm_blendStartBtn
	ui->BlenderHm_blendStartBtn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_blendStartBtn
	static lv_style_t style_BlenderHm_blendStartBtn_main;
	lv_style_init(&style_BlenderHm_blendStartBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_blendStartBtn_main
	lv_style_set_text_color(&style_BlenderHm_blendStartBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_blendStartBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blendStartBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_blendStartBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_blendStartBtn_main
	lv_style_set_text_color(&style_BlenderHm_blendStartBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_blendStartBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blendStartBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_blendStartBtn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_blendStartBtn_main);
	lv_obj_set_pos(ui->BlenderHm_blendStartBtn, 360, 98);
	lv_obj_set_size(ui->BlenderHm_blendStartBtn, 75, 75);
	lv_imgbtn_set_src(ui->BlenderHm_blendStartBtn,LV_BTN_STATE_RELEASED,&_start_alpha_75x75);
	lv_imgbtn_set_src(ui->BlenderHm_blendStartBtn,LV_BTN_STATE_PRESSED,&_stop_alpha_75x75);
	lv_imgbtn_set_src(ui->BlenderHm_blendStartBtn,LV_BTN_STATE_CHECKED_RELEASED,&_stop_alpha_75x75);
	lv_imgbtn_set_src(ui->BlenderHm_blendStartBtn,LV_BTN_STATE_CHECKED_PRESSED,&_start_alpha_75x75);
	lv_imgbtn_set_checkable(ui->BlenderHm_blendStartBtn, true);

	//Write codes BlenderHm_bgndChart
	ui->BlenderHm_bgndChart = lv_chart_create(ui->BlenderHm, NULL);
	lv_obj_set_pos(ui->BlenderHm_bgndChart, 130, 195);
	lv_obj_set_size(ui->BlenderHm_bgndChart, 235, 45);
	lv_chart_set_type(ui->BlenderHm_bgndChart,LV_CHART_TYPE_COLUMN);
	lv_chart_set_range(ui->BlenderHm_bgndChart,0,12);
	lv_chart_set_div_line_count(ui->BlenderHm_bgndChart, 0, 0);
	lv_chart_set_point_count(ui->BlenderHm_bgndChart, 5);
	lv_chart_series_t * BlenderHm_bgndChart_0 = lv_chart_add_series(ui->BlenderHm_bgndChart, lv_color_make(0xff, 0xff, 0xff));
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,2);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,4);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,6);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,8);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,10);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,12);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,0);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,0);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,0);
	lv_chart_set_next(ui->BlenderHm_bgndChart, BlenderHm_bgndChart_0,0);

	//Write codes BlenderHm_powerLevel
	ui->BlenderHm_powerLevel = lv_chart_create(ui->BlenderHm, NULL);
	lv_obj_set_pos(ui->BlenderHm_powerLevel, 130, 195);
	lv_obj_set_size(ui->BlenderHm_powerLevel, 235, 45);
	lv_chart_set_type(ui->BlenderHm_powerLevel,LV_CHART_TYPE_COLUMN);
	lv_chart_set_range(ui->BlenderHm_powerLevel,0,12);
	lv_chart_set_div_line_count(ui->BlenderHm_powerLevel, 0, 0);
	lv_chart_set_point_count(ui->BlenderHm_powerLevel, 5);
	lv_chart_series_t * BlenderHm_powerLevel_0 = lv_chart_add_series(ui->BlenderHm_powerLevel, lv_color_make(0xff, 0x00, 0xff));
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,2);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,4);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,6);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,8);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,10);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,12);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,0);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,0);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,0);
	lv_chart_set_next(ui->BlenderHm_powerLevel, BlenderHm_powerLevel_0,0);

	//Write codes BlenderHm_blenTimeUp
	ui->BlenderHm_blenTimeUp = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_blenTimeUp
	static lv_style_t style_BlenderHm_blenTimeUp_main;
	lv_style_init(&style_BlenderHm_blenTimeUp_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_blenTimeUp_main
	lv_style_set_text_color(&style_BlenderHm_blenTimeUp_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_blenTimeUp_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blenTimeUp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_blenTimeUp_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_blenTimeUp_main
	lv_style_set_text_color(&style_BlenderHm_blenTimeUp_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_blenTimeUp_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blenTimeUp_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_blenTimeUp, LV_IMGBTN_PART_MAIN, &style_BlenderHm_blenTimeUp_main);
	lv_obj_set_pos(ui->BlenderHm_blenTimeUp, 295, 90);
	lv_obj_set_size(ui->BlenderHm_blenTimeUp, 40, 20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeUp,LV_BTN_STATE_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeUp,LV_BTN_STATE_PRESSED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeUp,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeUp,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_alpha_40x20);

	//Write codes BlenderHm_blenTimeDn
	ui->BlenderHm_blenTimeDn = lv_imgbtn_create(ui->BlenderHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for BlenderHm_blenTimeDn
	static lv_style_t style_BlenderHm_blenTimeDn_main;
	lv_style_init(&style_BlenderHm_blenTimeDn_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_blenTimeDn_main
	lv_style_set_text_color(&style_BlenderHm_blenTimeDn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_BlenderHm_blenTimeDn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blenTimeDn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_BlenderHm_blenTimeDn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_BlenderHm_blenTimeDn_main
	lv_style_set_text_color(&style_BlenderHm_blenTimeDn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_BlenderHm_blenTimeDn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_BlenderHm_blenTimeDn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->BlenderHm_blenTimeDn, LV_IMGBTN_PART_MAIN, &style_BlenderHm_blenTimeDn_main);
	lv_obj_set_pos(ui->BlenderHm_blenTimeDn, 295, 160);
	lv_obj_set_size(ui->BlenderHm_blenTimeDn, 40, 20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeDn,LV_BTN_STATE_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeDn,LV_BTN_STATE_PRESSED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeDn,LV_BTN_STATE_CHECKED_RELEASED,&_chevron_down_alpha_40x20);
	lv_imgbtn_set_src(ui->BlenderHm_blenTimeDn,LV_BTN_STATE_CHECKED_PRESSED,&_chevron_down_alpha_40x20);

	//Write codes BlenderHm_secsRoller
	ui->BlenderHm_secsRoller = lv_roller_create(ui->BlenderHm, NULL);

	//Write style LV_ROLLER_PART_BG for BlenderHm_secsRoller
	static lv_style_t style_BlenderHm_secsRoller_bg;
	lv_style_init(&style_BlenderHm_secsRoller_bg);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_secsRoller_bg
	lv_style_set_radius(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_border_color(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xdf, 0xe7, 0xed));
	lv_style_set_border_width(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_BlenderHm_secsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->BlenderHm_secsRoller, LV_ROLLER_PART_BG, &style_BlenderHm_secsRoller_bg);

	//Write style LV_ROLLER_PART_SELECTED for BlenderHm_secsRoller
	static lv_style_t style_BlenderHm_secsRoller_selected;
	lv_style_init(&style_BlenderHm_secsRoller_selected);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_secsRoller_selected
	lv_style_set_bg_color(&style_BlenderHm_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_BlenderHm_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_BlenderHm_secsRoller_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_secsRoller_selected, LV_STATE_DEFAULT, 10);
	lv_style_set_text_color(&style_BlenderHm_secsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->BlenderHm_secsRoller, LV_ROLLER_PART_SELECTED, &style_BlenderHm_secsRoller_selected);
	lv_obj_set_pos(ui->BlenderHm_secsRoller, 226, 105);
	lv_roller_set_options(ui->BlenderHm_secsRoller,"00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",LV_ROLLER_MODE_NORMAL);
	lv_obj_set_style_local_text_font(ui->BlenderHm_secsRoller, LV_ROLLER_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_40);
	lv_obj_set_style_local_text_font(ui->BlenderHm_secsRoller, LV_ROLLER_PART_BG, LV_STATE_FOCUSED, &lv_font_montserrat_40);
	lv_obj_set_style_local_text_font(ui->BlenderHm_secsRoller, LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, &lv_font_montserrat_40);
	lv_roller_set_visible_row_count(ui->BlenderHm_secsRoller,1);

	//Write codes BlenderHm_minsRoller
	ui->BlenderHm_minsRoller = lv_roller_create(ui->BlenderHm, NULL);

	//Write style LV_ROLLER_PART_BG for BlenderHm_minsRoller
	static lv_style_t style_BlenderHm_minsRoller_bg;
	lv_style_init(&style_BlenderHm_minsRoller_bg);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_minsRoller_bg
	lv_style_set_radius(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_border_color(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xdf, 0xe7, 0xed));
	lv_style_set_border_width(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_BlenderHm_minsRoller_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->BlenderHm_minsRoller, LV_ROLLER_PART_BG, &style_BlenderHm_minsRoller_bg);

	//Write style LV_ROLLER_PART_SELECTED for BlenderHm_minsRoller
	static lv_style_t style_BlenderHm_minsRoller_selected;
	lv_style_init(&style_BlenderHm_minsRoller_selected);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_minsRoller_selected
	lv_style_set_bg_color(&style_BlenderHm_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_BlenderHm_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_BlenderHm_minsRoller_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_minsRoller_selected, LV_STATE_DEFAULT, 10);
	lv_style_set_text_color(&style_BlenderHm_minsRoller_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_add_style(ui->BlenderHm_minsRoller, LV_ROLLER_PART_SELECTED, &style_BlenderHm_minsRoller_selected);
	lv_obj_set_pos(ui->BlenderHm_minsRoller, 160, 102);
	lv_roller_set_options(ui->BlenderHm_minsRoller,"0\n1\n2\n3\n4\n5\n6\n7\n8\n9",LV_ROLLER_MODE_NORMAL);
	lv_obj_set_style_local_text_font(ui->BlenderHm_minsRoller, LV_ROLLER_PART_BG, LV_STATE_DEFAULT, &lv_font_montserrat_40);
	lv_obj_set_style_local_text_font(ui->BlenderHm_minsRoller, LV_ROLLER_PART_BG, LV_STATE_FOCUSED, &lv_font_montserrat_40);
	lv_obj_set_style_local_text_font(ui->BlenderHm_minsRoller, LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, &lv_font_montserrat_40);
	lv_roller_set_visible_row_count(ui->BlenderHm_minsRoller,1);

	//Write codes BlenderHm_colonLbl
	ui->BlenderHm_colonLbl = lv_label_create(ui->BlenderHm, NULL);
	lv_label_set_text(ui->BlenderHm_colonLbl, ":");
	lv_label_set_long_mode(ui->BlenderHm_colonLbl, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->BlenderHm_colonLbl, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for BlenderHm_colonLbl
	static lv_style_t style_BlenderHm_colonLbl_main;
	lv_style_init(&style_BlenderHm_colonLbl_main);

	//Write style state: LV_STATE_DEFAULT for style_BlenderHm_colonLbl_main
	lv_style_set_radius(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, &lv_font_montserrat_40);
	lv_style_set_text_letter_space(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_BlenderHm_colonLbl_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->BlenderHm_colonLbl, LV_LABEL_PART_MAIN, &style_BlenderHm_colonLbl_main);
	lv_obj_set_pos(ui->BlenderHm_colonLbl, 215, 111);
	lv_obj_set_size(ui->BlenderHm_colonLbl, 13, 0);

	//Init events for screen
	events_init_BlenderHm(ui);
}
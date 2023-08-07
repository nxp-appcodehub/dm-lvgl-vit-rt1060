/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_OvenCk(lv_ui *ui){

	//Write codes OvenCk
	ui->OvenCk = lv_obj_create(NULL, NULL);

	//Write codes OvenCk_Bckgnd
	ui->OvenCk_Bckgnd = lv_img_create(ui->OvenCk, NULL);

	//Write style LV_IMG_PART_MAIN for OvenCk_Bckgnd
	static lv_style_t style_OvenCk_Bckgnd_main;
	lv_style_init(&style_OvenCk_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_Bckgnd_main
	lv_style_set_image_recolor(&style_OvenCk_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenCk_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenCk_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->OvenCk_Bckgnd, LV_IMG_PART_MAIN, &style_OvenCk_Bckgnd_main);
	lv_obj_set_pos(ui->OvenCk_Bckgnd, 0, 0);
	lv_obj_set_size(ui->OvenCk_Bckgnd, 480, 272);
	lv_obj_set_click(ui->OvenCk_Bckgnd, true);
	lv_img_set_src(ui->OvenCk_Bckgnd,&_Oven01_alpha_480x272);
	lv_img_set_pivot(ui->OvenCk_Bckgnd, 0,0);
	lv_img_set_angle(ui->OvenCk_Bckgnd, 0);

	//Write codes OvenCk_backBtn
	ui->OvenCk_backBtn = lv_imgbtn_create(ui->OvenCk, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenCk_backBtn
	static lv_style_t style_OvenCk_backBtn_main;
	lv_style_init(&style_OvenCk_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_backBtn_main
	lv_style_set_text_color(&style_OvenCk_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenCk_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenCk_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenCk_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_OvenCk_backBtn_main
	lv_style_set_text_color(&style_OvenCk_backBtn_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenCk_backBtn_main, LV_STATE_PRESSED, lv_color_make(0xdd, 0xd4, 0xd4));
	lv_style_set_image_recolor_opa(&style_OvenCk_backBtn_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_OvenCk_backBtn_main
	lv_style_set_text_color(&style_OvenCk_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenCk_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenCk_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenCk_backBtn, LV_IMGBTN_PART_MAIN, &style_OvenCk_backBtn_main);
	lv_obj_set_pos(ui->OvenCk_backBtn, 10, 10);
	lv_obj_set_size(ui->OvenCk_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenCk_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes OvenCk_lightBtn
	ui->OvenCk_lightBtn = lv_imgbtn_create(ui->OvenCk, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenCk_lightBtn
	static lv_style_t style_OvenCk_lightBtn_main;
	lv_style_init(&style_OvenCk_lightBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_lightBtn_main
	lv_style_set_text_color(&style_OvenCk_lightBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenCk_lightBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenCk_lightBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenCk_lightBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenCk_lightBtn_main
	lv_style_set_text_color(&style_OvenCk_lightBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenCk_lightBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenCk_lightBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenCk_lightBtn, LV_IMGBTN_PART_MAIN, &style_OvenCk_lightBtn_main);
	lv_obj_set_pos(ui->OvenCk_lightBtn, 440, 10);
	lv_obj_set_size(ui->OvenCk_lightBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenCk_lightBtn,LV_BTN_STATE_RELEASED,&_Light_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_lightBtn,LV_BTN_STATE_PRESSED,&_Light_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_lightBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Light_selected_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenCk_lightBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Light_alpha_30x30);
	lv_imgbtn_set_checkable(ui->OvenCk_lightBtn, true);

	//Write codes OvenCk_time
	ui->OvenCk_time = lv_label_create(ui->OvenCk, NULL);
	lv_label_set_text(ui->OvenCk_time, "10:30 AM");
	lv_label_set_long_mode(ui->OvenCk_time, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenCk_time, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenCk_time
	static lv_style_t style_OvenCk_time_main;
	lv_style_init(&style_OvenCk_time_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_time_main
	lv_style_set_radius(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenCk_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenCk_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenCk_time_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenCk_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenCk_time_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenCk_time_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenCk_time, LV_LABEL_PART_MAIN, &style_OvenCk_time_main);
	lv_obj_set_pos(ui->OvenCk_time, 310, 19);
	lv_obj_set_size(ui->OvenCk_time, 100, 0);

	//Write codes OvenCk_tempArc
	ui->OvenCk_tempArc = lv_arc_create(ui->OvenCk, NULL);

	//Write style LV_ARC_PART_BG for OvenCk_tempArc
	static lv_style_t style_OvenCk_tempArc_bg;
	lv_style_init(&style_OvenCk_tempArc_bg);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_tempArc_bg
	lv_style_set_bg_color(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_width(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_OvenCk_tempArc_bg, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->OvenCk_tempArc, LV_ARC_PART_BG, &style_OvenCk_tempArc_bg);

	//Write style LV_ARC_PART_INDIC for OvenCk_tempArc
	static lv_style_t style_OvenCk_tempArc_indic;
	lv_style_init(&style_OvenCk_tempArc_indic);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_tempArc_indic
	lv_style_set_line_color(&style_OvenCk_tempArc_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_line_width(&style_OvenCk_tempArc_indic, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->OvenCk_tempArc, LV_ARC_PART_INDIC, &style_OvenCk_tempArc_indic);
	lv_obj_set_pos(ui->OvenCk_tempArc, 5, 55);
	lv_obj_set_size(ui->OvenCk_tempArc, 198, 178);
	lv_arc_set_bg_angles(ui->OvenCk_tempArc, 115, 421);
	lv_arc_set_angles(ui->OvenCk_tempArc, 115, 171);
	lv_arc_set_rotation(ui->OvenCk_tempArc, 0);
	lv_obj_set_style_local_pad_top(ui->OvenCk_tempArc, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_bottom(ui->OvenCk_tempArc, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_left(ui->OvenCk_tempArc, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_right(ui->OvenCk_tempArc, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);

	//Write codes OvenCk_timeMeter
	ui->OvenCk_timeMeter = lv_linemeter_create(ui->OvenCk, NULL);

	//Write style LV_LINEMETER_PART_MAIN for OvenCk_timeMeter
	static lv_style_t style_OvenCk_timeMeter_main;
	lv_style_init(&style_OvenCk_timeMeter_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_timeMeter_main
	lv_style_set_radius(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_right(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_top(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_bottom(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 5);
	lv_style_set_line_color(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_line_width(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 4);
	lv_style_set_line_opa(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 255);
	lv_style_set_scale_grad_color(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_scale_end_color(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, lv_color_make(0xb3, 0xb3, 0xb3));
	lv_style_set_scale_width(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 10);
	lv_style_set_scale_end_line_width(&style_OvenCk_timeMeter_main, LV_STATE_DEFAULT, 4);
	lv_obj_add_style(ui->OvenCk_timeMeter, LV_LINEMETER_PART_MAIN, &style_OvenCk_timeMeter_main);
	lv_obj_set_pos(ui->OvenCk_timeMeter, 301, 61);
	lv_obj_set_size(ui->OvenCk_timeMeter, 162, 162);
	lv_linemeter_set_scale(ui->OvenCk_timeMeter, 300, 30);
	lv_linemeter_set_range(ui->OvenCk_timeMeter, 0, 360);
	lv_linemeter_set_value(ui->OvenCk_timeMeter, 100);
	lv_linemeter_set_angle_offset(ui->OvenCk_timeMeter, 0);

	//Write codes OvenCk_ckCancel
	ui->OvenCk_ckCancel = lv_btn_create(ui->OvenCk, NULL);

	//Write style LV_BTN_PART_MAIN for OvenCk_ckCancel
	static lv_style_t style_OvenCk_ckCancel_main;
	lv_style_init(&style_OvenCk_ckCancel_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_ckCancel_main
	lv_style_set_radius(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xff, 0x00));
	lv_style_set_bg_grad_color(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_bg_grad_dir(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_border_width(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, 3);
	lv_style_set_border_opa(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x6f, 0x00));
	lv_style_set_outline_opa(&style_OvenCk_ckCancel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenCk_ckCancel, LV_BTN_PART_MAIN, &style_OvenCk_ckCancel_main);
	lv_obj_set_pos(ui->OvenCk_ckCancel, 188, 119);
	lv_obj_set_size(ui->OvenCk_ckCancel, 100, 50);
	ui->OvenCk_ckCancel_label = lv_label_create(ui->OvenCk_ckCancel, NULL);
	lv_label_set_text(ui->OvenCk_ckCancel_label, "Cancel");
	lv_obj_set_style_local_text_color(ui->OvenCk_ckCancel_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->OvenCk_ckCancel_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_16);

	//Write codes OvenCk_ckTemp
	ui->OvenCk_ckTemp = lv_label_create(ui->OvenCk, NULL);
	lv_label_set_text(ui->OvenCk_ckTemp, "150");
	lv_label_set_long_mode(ui->OvenCk_ckTemp, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenCk_ckTemp, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenCk_ckTemp
	static lv_style_t style_OvenCk_ckTemp_main;
	lv_style_init(&style_OvenCk_ckTemp_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_ckTemp_main
	lv_style_set_radius(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, &lv_font_montserrat_30);
	lv_style_set_text_letter_space(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenCk_ckTemp_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenCk_ckTemp, LV_LABEL_PART_MAIN, &style_OvenCk_ckTemp_main);
	lv_obj_set_pos(ui->OvenCk_ckTemp, 77, 136);
	lv_obj_set_size(ui->OvenCk_ckTemp, 50, 0);

	//Write codes OvenCk_ckTime
	ui->OvenCk_ckTime = lv_label_create(ui->OvenCk, NULL);
	lv_label_set_text(ui->OvenCk_ckTime, "00:00");
	lv_label_set_long_mode(ui->OvenCk_ckTime, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenCk_ckTime, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenCk_ckTime
	static lv_style_t style_OvenCk_ckTime_main;
	lv_style_init(&style_OvenCk_ckTime_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_ckTime_main
	lv_style_set_radius(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, &lv_font_montserrat_30);
	lv_style_set_text_letter_space(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenCk_ckTime_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenCk_ckTime, LV_LABEL_PART_MAIN, &style_OvenCk_ckTime_main);
	lv_obj_set_pos(ui->OvenCk_ckTime, 337, 127);
	lv_obj_set_size(ui->OvenCk_ckTime, 90, 0);

	//Write codes OvenCk_tempIcon
	ui->OvenCk_tempIcon = lv_img_create(ui->OvenCk, NULL);

	//Write style LV_IMG_PART_MAIN for OvenCk_tempIcon
	static lv_style_t style_OvenCk_tempIcon_main;
	lv_style_init(&style_OvenCk_tempIcon_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_tempIcon_main
	lv_style_set_image_recolor(&style_OvenCk_tempIcon_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenCk_tempIcon_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenCk_tempIcon_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->OvenCk_tempIcon, LV_IMG_PART_MAIN, &style_OvenCk_tempIcon_main);
	lv_obj_set_pos(ui->OvenCk_tempIcon, 93, 102);
	lv_obj_set_size(ui->OvenCk_tempIcon, 20, 25);
	lv_obj_set_click(ui->OvenCk_tempIcon, true);
	lv_img_set_src(ui->OvenCk_tempIcon,&_temperature_icon_alpha_20x25);
	lv_img_set_pivot(ui->OvenCk_tempIcon, 0,0);
	lv_img_set_angle(ui->OvenCk_tempIcon, 0);

	//Write codes OvenCk_timerIcon
	ui->OvenCk_timerIcon = lv_img_create(ui->OvenCk, NULL);

	//Write style LV_IMG_PART_MAIN for OvenCk_timerIcon
	static lv_style_t style_OvenCk_timerIcon_main;
	lv_style_init(&style_OvenCk_timerIcon_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenCk_timerIcon_main
	lv_style_set_image_recolor(&style_OvenCk_timerIcon_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenCk_timerIcon_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenCk_timerIcon_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->OvenCk_timerIcon, LV_IMG_PART_MAIN, &style_OvenCk_timerIcon_main);
	lv_obj_set_pos(ui->OvenCk_timerIcon, 371, 98);
	lv_obj_set_size(ui->OvenCk_timerIcon, 20, 25);
	lv_obj_set_click(ui->OvenCk_timerIcon, true);
	lv_img_set_src(ui->OvenCk_timerIcon,&_icon_timer_alpha_20x25);
	lv_img_set_pivot(ui->OvenCk_timerIcon, 0,0);
	lv_img_set_angle(ui->OvenCk_timerIcon, 0);

	//Init events for screen
	events_init_OvenCk(ui);
}
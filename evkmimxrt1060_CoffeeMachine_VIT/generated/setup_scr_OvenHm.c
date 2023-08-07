/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_OvenHm(lv_ui *ui){

	//Write codes OvenHm
	ui->OvenHm = lv_obj_create(NULL, NULL);

	//Write codes OvenHm_Bckgnd
	ui->OvenHm_Bckgnd = lv_img_create(ui->OvenHm, NULL);

	//Write style LV_IMG_PART_MAIN for OvenHm_Bckgnd
	static lv_style_t style_OvenHm_Bckgnd_main;
	lv_style_init(&style_OvenHm_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenHm_Bckgnd_main
	lv_style_set_image_recolor(&style_OvenHm_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenHm_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenHm_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->OvenHm_Bckgnd, LV_IMG_PART_MAIN, &style_OvenHm_Bckgnd_main);
	lv_obj_set_pos(ui->OvenHm_Bckgnd, 0, 0);
	lv_obj_set_size(ui->OvenHm_Bckgnd, 480, 272);
	lv_obj_set_click(ui->OvenHm_Bckgnd, true);
	lv_img_set_src(ui->OvenHm_Bckgnd,&_Oven01_alpha_480x272);
	lv_img_set_pivot(ui->OvenHm_Bckgnd, 0,0);
	lv_img_set_angle(ui->OvenHm_Bckgnd, 0);

	//Write codes OvenHm_backBtn
	ui->OvenHm_backBtn = lv_imgbtn_create(ui->OvenHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for OvenHm_backBtn
	static lv_style_t style_OvenHm_backBtn_main;
	lv_style_init(&style_OvenHm_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenHm_backBtn_main
	lv_style_set_text_color(&style_OvenHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_OvenHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_OvenHm_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_OvenHm_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_OvenHm_backBtn_main
	lv_style_set_text_color(&style_OvenHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_OvenHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_OvenHm_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->OvenHm_backBtn, LV_IMGBTN_PART_MAIN, &style_OvenHm_backBtn_main);
	lv_obj_set_pos(ui->OvenHm_backBtn, 10, 10);
	lv_obj_set_size(ui->OvenHm_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->OvenHm_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenHm_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenHm_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->OvenHm_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes OvenHm_time
	ui->OvenHm_time = lv_label_create(ui->OvenHm, NULL);
	lv_label_set_text(ui->OvenHm_time, "10:30 AM");
	lv_label_set_long_mode(ui->OvenHm_time, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenHm_time, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenHm_time
	static lv_style_t style_OvenHm_time_main;
	lv_style_init(&style_OvenHm_time_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenHm_time_main
	lv_style_set_radius(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenHm_time_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_OvenHm_time_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_OvenHm_time_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenHm_time_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenHm_time_main, LV_STATE_DEFAULT, &lv_font_montserrat_26);
	lv_style_set_text_letter_space(&style_OvenHm_time_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenHm_time_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenHm_time, LV_LABEL_PART_MAIN, &style_OvenHm_time_main);
	lv_obj_set_pos(ui->OvenHm_time, 133, 102);
	lv_obj_set_size(ui->OvenHm_time, 200, 0);

	//Write codes OvenHm_date
	ui->OvenHm_date = lv_label_create(ui->OvenHm, NULL);
	lv_label_set_text(ui->OvenHm_date, "June 4, 2020");
	lv_label_set_long_mode(ui->OvenHm_date, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->OvenHm_date, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for OvenHm_date
	static lv_style_t style_OvenHm_date_main;
	lv_style_init(&style_OvenHm_date_main);

	//Write style state: LV_STATE_DEFAULT for style_OvenHm_date_main
	lv_style_set_radius(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_OvenHm_date_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_OvenHm_date_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_OvenHm_date_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_OvenHm_date_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_OvenHm_date_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_OvenHm_date_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_OvenHm_date_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->OvenHm_date, LV_LABEL_PART_MAIN, &style_OvenHm_date_main);
	lv_obj_set_pos(ui->OvenHm_date, 183, 143);
	lv_obj_set_size(ui->OvenHm_date, 100, 0);

	//Init events for screen
	events_init_OvenHm(ui);
}
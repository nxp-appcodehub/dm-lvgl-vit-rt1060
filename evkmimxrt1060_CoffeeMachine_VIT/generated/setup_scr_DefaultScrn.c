/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_DefaultScrn(lv_ui *ui){

	//Write codes DefaultScrn
	ui->DefaultScrn = lv_obj_create(NULL, NULL);

	//Write codes DefaultScrn_Bckgnd
	ui->DefaultScrn_Bckgnd = lv_img_create(ui->DefaultScrn, NULL);

	//Write style LV_IMG_PART_MAIN for DefaultScrn_Bckgnd
	static lv_style_t style_DefaultScrn_Bckgnd_main;
	lv_style_init(&style_DefaultScrn_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_DefaultScrn_Bckgnd_main
	lv_style_set_image_recolor(&style_DefaultScrn_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_DefaultScrn_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->DefaultScrn_Bckgnd, LV_IMG_PART_MAIN, &style_DefaultScrn_Bckgnd_main);
	lv_obj_set_pos(ui->DefaultScrn_Bckgnd, 0, 0);
	lv_obj_set_size(ui->DefaultScrn_Bckgnd, 480, 272);
	lv_obj_set_click(ui->DefaultScrn_Bckgnd, true);
	lv_img_set_src(ui->DefaultScrn_Bckgnd,&_MainImage_alpha_480x272);
	lv_img_set_pivot(ui->DefaultScrn_Bckgnd, 0,0);
	lv_img_set_angle(ui->DefaultScrn_Bckgnd, 0);

	//Write codes DefaultScrn_OvenBtn
	ui->DefaultScrn_OvenBtn = lv_imgbtn_create(ui->DefaultScrn, NULL);

	//Write style LV_IMGBTN_PART_MAIN for DefaultScrn_OvenBtn
	static lv_style_t style_DefaultScrn_OvenBtn_main;
	lv_style_init(&style_DefaultScrn_OvenBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_DefaultScrn_OvenBtn_main
	lv_style_set_text_color(&style_DefaultScrn_OvenBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_DefaultScrn_OvenBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_OvenBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_DefaultScrn_OvenBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_DefaultScrn_OvenBtn_main
	lv_style_set_text_color(&style_DefaultScrn_OvenBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_DefaultScrn_OvenBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_OvenBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->DefaultScrn_OvenBtn, LV_IMGBTN_PART_MAIN, &style_DefaultScrn_OvenBtn_main);
	lv_obj_set_pos(ui->DefaultScrn_OvenBtn, 166, 34);
	lv_obj_set_size(ui->DefaultScrn_OvenBtn, 150, 45);
	lv_imgbtn_set_src(ui->DefaultScrn_OvenBtn,LV_BTN_STATE_RELEASED,&_Oven_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_OvenBtn,LV_BTN_STATE_PRESSED,&_Oven_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_OvenBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Oven_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_OvenBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Oven_alpha_150x45);

	//Write codes DefaultScrn_CafeBtn
	ui->DefaultScrn_CafeBtn = lv_imgbtn_create(ui->DefaultScrn, NULL);

	//Write style LV_IMGBTN_PART_MAIN for DefaultScrn_CafeBtn
	static lv_style_t style_DefaultScrn_CafeBtn_main;
	lv_style_init(&style_DefaultScrn_CafeBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_DefaultScrn_CafeBtn_main
	lv_style_set_text_color(&style_DefaultScrn_CafeBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_DefaultScrn_CafeBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_CafeBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_DefaultScrn_CafeBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_DefaultScrn_CafeBtn_main
	lv_style_set_text_color(&style_DefaultScrn_CafeBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_DefaultScrn_CafeBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_CafeBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->DefaultScrn_CafeBtn, LV_IMGBTN_PART_MAIN, &style_DefaultScrn_CafeBtn_main);
	lv_obj_set_pos(ui->DefaultScrn_CafeBtn, 166, 102);
	lv_obj_set_size(ui->DefaultScrn_CafeBtn, 150, 45);
	lv_imgbtn_set_src(ui->DefaultScrn_CafeBtn,LV_BTN_STATE_RELEASED,&_coffee_machine_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_CafeBtn,LV_BTN_STATE_PRESSED,&_coffee_machine_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_CafeBtn,LV_BTN_STATE_CHECKED_RELEASED,&_coffee_machine_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_CafeBtn,LV_BTN_STATE_CHECKED_PRESSED,&_coffee_machine_alpha_150x45);

	//Write codes DefaultScrn_BlenderBtn
	ui->DefaultScrn_BlenderBtn = lv_imgbtn_create(ui->DefaultScrn, NULL);

	//Write style LV_IMGBTN_PART_MAIN for DefaultScrn_BlenderBtn
	static lv_style_t style_DefaultScrn_BlenderBtn_main;
	lv_style_init(&style_DefaultScrn_BlenderBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_DefaultScrn_BlenderBtn_main
	lv_style_set_text_color(&style_DefaultScrn_BlenderBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_DefaultScrn_BlenderBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_BlenderBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_DefaultScrn_BlenderBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_DefaultScrn_BlenderBtn_main
	lv_style_set_text_color(&style_DefaultScrn_BlenderBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_DefaultScrn_BlenderBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_DefaultScrn_BlenderBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->DefaultScrn_BlenderBtn, LV_IMGBTN_PART_MAIN, &style_DefaultScrn_BlenderBtn_main);
	lv_obj_set_pos(ui->DefaultScrn_BlenderBtn, 166, 170);
	lv_obj_set_size(ui->DefaultScrn_BlenderBtn, 150, 45);
	lv_imgbtn_set_src(ui->DefaultScrn_BlenderBtn,LV_BTN_STATE_RELEASED,&_Blender_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_BlenderBtn,LV_BTN_STATE_PRESSED,&_Blender_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_BlenderBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Blender_alpha_150x45);
	lv_imgbtn_set_src(ui->DefaultScrn_BlenderBtn,LV_BTN_STATE_CHECKED_PRESSED,&_Blender_alpha_150x45);

	//Write codes label_DefaultScrn_cmd
	ui->label_DefaultScrn_cmd = lv_label_create(ui->DefaultScrn, NULL);
	lv_label_set_text(ui->label_DefaultScrn_cmd, "Please Speak a Command");
	lv_label_set_long_mode(ui->label_DefaultScrn_cmd, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->label_DefaultScrn_cmd, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for label_DefaultScrn_cmd
	static lv_style_t style_label_DefaultScrn_cmd_main;
	lv_style_init(&style_label_DefaultScrn_cmd_main);

	//Write style state: LV_STATE_DEFAULT for style_label_DefaultScrn_cmd_main
	lv_style_set_radius(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, lv_color_make(0x8c, 0x0d, 0x0d));
	lv_style_set_text_font(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, &lv_font_montserrat_14);
	lv_style_set_text_letter_space(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_label_DefaultScrn_cmd_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->label_DefaultScrn_cmd, LV_LABEL_PART_MAIN, &style_label_DefaultScrn_cmd_main);
	lv_obj_set_pos(ui->label_DefaultScrn_cmd, 45, 15);
	lv_obj_set_size(ui->label_DefaultScrn_cmd, 240, 0);
	lv_obj_set_hidden(ui->label_DefaultScrn_cmd, 1);

	//Init events for screen
	events_init_DefaultScrn(ui);
}
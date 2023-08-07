/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_CafeSettings(lv_ui *ui){

	//Write codes CafeSettings
	ui->CafeSettings = lv_obj_create(NULL, NULL);

	//Write codes CafeSettings_Bckgnd
	ui->CafeSettings_Bckgnd = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_Bckgnd
	static lv_style_t style_CafeSettings_Bckgnd_main;
	lv_style_init(&style_CafeSettings_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_Bckgnd_main
	lv_style_set_image_recolor(&style_CafeSettings_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_Bckgnd, LV_IMG_PART_MAIN, &style_CafeSettings_Bckgnd_main);
	lv_obj_set_pos(ui->CafeSettings_Bckgnd, 0, 0);
	lv_obj_set_size(ui->CafeSettings_Bckgnd, 480, 272);
	lv_obj_set_click(ui->CafeSettings_Bckgnd, true);
	lv_img_set_src(ui->CafeSettings_Bckgnd,&_Rectangle_alpha_480x272);
	lv_img_set_pivot(ui->CafeSettings_Bckgnd, 0,0);
	lv_img_set_angle(ui->CafeSettings_Bckgnd, 0);

	//Write codes CafeSettings_americanoLarge
	ui->CafeSettings_americanoLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_americanoLarge
	static lv_style_t style_CafeSettings_americanoLarge_main;
	lv_style_init(&style_CafeSettings_americanoLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_americanoLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_americanoLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_americanoLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_americanoLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_americanoLarge, LV_IMG_PART_MAIN, &style_CafeSettings_americanoLarge_main);
	lv_obj_set_pos(ui->CafeSettings_americanoLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_americanoLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_americanoLarge, true);
	lv_img_set_src(ui->CafeSettings_americanoLarge,&_americano_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_americanoLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_americanoLarge, 0);

	//Write codes CafeSettings_smallSizeBtn
	ui->CafeSettings_smallSizeBtn = lv_imgbtn_create(ui->CafeSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeSettings_smallSizeBtn
	static lv_style_t style_CafeSettings_smallSizeBtn_main;
	lv_style_init(&style_CafeSettings_smallSizeBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_smallSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_smallSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeSettings_smallSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_smallSizeBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_smallSizeBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeSettings_smallSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_smallSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeSettings_smallSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeSettings_smallSizeBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeSettings_smallSizeBtn, LV_IMGBTN_PART_MAIN, &style_CafeSettings_smallSizeBtn_main);
	lv_obj_set_pos(ui->CafeSettings_smallSizeBtn, 15, 118);
	lv_obj_set_size(ui->CafeSettings_smallSizeBtn, 35, 35);
	lv_imgbtn_set_src(ui->CafeSettings_smallSizeBtn,LV_BTN_STATE_RELEASED,&_small_alpha_35x35);
	lv_imgbtn_set_src(ui->CafeSettings_smallSizeBtn,LV_BTN_STATE_PRESSED,&_Small_selected_alpha_35x35);
	lv_imgbtn_set_src(ui->CafeSettings_smallSizeBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Small_selected_alpha_35x35);
	lv_imgbtn_set_src(ui->CafeSettings_smallSizeBtn,LV_BTN_STATE_CHECKED_PRESSED,&_small_alpha_35x35);
	lv_imgbtn_set_checkable(ui->CafeSettings_smallSizeBtn, true);

	//Write codes CafeSettings_mediumSizeBtn
	ui->CafeSettings_mediumSizeBtn = lv_imgbtn_create(ui->CafeSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeSettings_mediumSizeBtn
	static lv_style_t style_CafeSettings_mediumSizeBtn_main;
	lv_style_init(&style_CafeSettings_mediumSizeBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_mediumSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeSettings_mediumSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeSettings_mediumSizeBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeSettings_mediumSizeBtn, LV_IMGBTN_PART_MAIN, &style_CafeSettings_mediumSizeBtn_main);
	lv_obj_set_pos(ui->CafeSettings_mediumSizeBtn, 67, 116);
	lv_obj_set_size(ui->CafeSettings_mediumSizeBtn, 35, 40);
	lv_imgbtn_set_src(ui->CafeSettings_mediumSizeBtn,LV_BTN_STATE_RELEASED,&_medium_alpha_35x40);
	lv_imgbtn_set_src(ui->CafeSettings_mediumSizeBtn,LV_BTN_STATE_PRESSED,&_Medium_selected_alpha_35x40);
	lv_imgbtn_set_src(ui->CafeSettings_mediumSizeBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Medium_selected_alpha_35x40);
	lv_imgbtn_set_src(ui->CafeSettings_mediumSizeBtn,LV_BTN_STATE_CHECKED_PRESSED,&_medium_alpha_35x40);
	lv_imgbtn_set_checkable(ui->CafeSettings_mediumSizeBtn, true);

	//Write codes CafeSettings_largeSizeBtn
	ui->CafeSettings_largeSizeBtn = lv_imgbtn_create(ui->CafeSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeSettings_largeSizeBtn
	static lv_style_t style_CafeSettings_largeSizeBtn_main;
	lv_style_init(&style_CafeSettings_largeSizeBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_largeSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_largeSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeSettings_largeSizeBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_largeSizeBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_largeSizeBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeSettings_largeSizeBtn_main
	lv_style_set_text_color(&style_CafeSettings_largeSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeSettings_largeSizeBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeSettings_largeSizeBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeSettings_largeSizeBtn, LV_IMGBTN_PART_MAIN, &style_CafeSettings_largeSizeBtn_main);
	lv_obj_set_pos(ui->CafeSettings_largeSizeBtn, 119, 111);
	lv_obj_set_size(ui->CafeSettings_largeSizeBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeSettings_largeSizeBtn,LV_BTN_STATE_RELEASED,&_large_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeSettings_largeSizeBtn,LV_BTN_STATE_PRESSED,&_Large_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeSettings_largeSizeBtn,LV_BTN_STATE_CHECKED_RELEASED,&_Large_selected_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeSettings_largeSizeBtn,LV_BTN_STATE_CHECKED_PRESSED,&_large_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeSettings_largeSizeBtn, true);

	//Write codes CafeSettings_brewStart
	ui->CafeSettings_brewStart = lv_btn_create(ui->CafeSettings, NULL);

	//Write style LV_BTN_PART_MAIN for CafeSettings_brewStart
	static lv_style_t style_CafeSettings_brewStart_main;
	lv_style_init(&style_CafeSettings_brewStart_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_brewStart_main
	lv_style_set_radius(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, 32);
	lv_style_set_bg_color(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_CafeSettings_brewStart_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_brewStart, LV_BTN_PART_MAIN, &style_CafeSettings_brewStart_main);
	lv_obj_set_pos(ui->CafeSettings_brewStart, 190, 188);
	lv_obj_set_size(ui->CafeSettings_brewStart, 100, 50);
	ui->CafeSettings_brewStart_label = lv_label_create(ui->CafeSettings_brewStart, NULL);
	lv_label_set_text(ui->CafeSettings_brewStart_label, "Start");
	lv_obj_set_style_local_text_color(ui->CafeSettings_brewStart_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x20, 0x1c, 0x28));
	lv_obj_set_style_local_text_font(ui->CafeSettings_brewStart_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_20);

	//Write codes CafeSettings_strengthSlider
	ui->CafeSettings_strengthSlider = lv_slider_create(ui->CafeSettings, NULL);

	//Write style LV_SLIDER_PART_INDIC for CafeSettings_strengthSlider
	static lv_style_t style_CafeSettings_strengthSlider_indic;
	lv_style_init(&style_CafeSettings_strengthSlider_indic);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_strengthSlider_indic
	lv_style_set_radius(&style_CafeSettings_strengthSlider_indic, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_CafeSettings_strengthSlider_indic, LV_STATE_DEFAULT, lv_color_make(0x86, 0x64, 0x42));
	lv_style_set_bg_grad_color(&style_CafeSettings_strengthSlider_indic, LV_STATE_DEFAULT, lv_color_make(0x86, 0x64, 0x42));
	lv_style_set_bg_grad_dir(&style_CafeSettings_strengthSlider_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_strengthSlider_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_strengthSlider, LV_SLIDER_PART_INDIC, &style_CafeSettings_strengthSlider_indic);

	//Write style LV_SLIDER_PART_BG for CafeSettings_strengthSlider
	static lv_style_t style_CafeSettings_strengthSlider_bg;
	lv_style_init(&style_CafeSettings_strengthSlider_bg);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_strengthSlider_bg
	lv_style_set_radius(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeSettings_strengthSlider_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeSettings_strengthSlider, LV_SLIDER_PART_BG, &style_CafeSettings_strengthSlider_bg);

	//Write style LV_SLIDER_PART_KNOB for CafeSettings_strengthSlider
	static lv_style_t style_CafeSettings_strengthSlider_knob;
	lv_style_init(&style_CafeSettings_strengthSlider_knob);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_strengthSlider_knob
	lv_style_set_radius(&style_CafeSettings_strengthSlider_knob, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_CafeSettings_strengthSlider_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeSettings_strengthSlider_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeSettings_strengthSlider_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_strengthSlider_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_strengthSlider, LV_SLIDER_PART_KNOB, &style_CafeSettings_strengthSlider_knob);
	lv_obj_set_pos(ui->CafeSettings_strengthSlider, 305, 132);
	lv_obj_set_size(ui->CafeSettings_strengthSlider, 150, 11);
	lv_slider_set_range(ui->CafeSettings_strengthSlider,0, 100);
	lv_slider_set_value(ui->CafeSettings_strengthSlider,50,false);

	//Write codes CafeSettings_sliderLabel
	ui->CafeSettings_sliderLabel = lv_label_create(ui->CafeSettings, NULL);
	lv_label_set_text(ui->CafeSettings_sliderLabel, "Strength");
	lv_label_set_long_mode(ui->CafeSettings_sliderLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeSettings_sliderLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeSettings_sliderLabel
	static lv_style_t style_CafeSettings_sliderLabel_main;
	lv_style_init(&style_CafeSettings_sliderLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_sliderLabel_main
	lv_style_set_radius(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_16);
	lv_style_set_text_letter_space(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeSettings_sliderLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeSettings_sliderLabel, LV_LABEL_PART_MAIN, &style_CafeSettings_sliderLabel_main);
	lv_obj_set_pos(ui->CafeSettings_sliderLabel, 330, 159);
	lv_obj_set_size(ui->CafeSettings_sliderLabel, 100, 0);

	//Write codes CafeSettings_cupImgLabel
	ui->CafeSettings_cupImgLabel = lv_label_create(ui->CafeSettings, NULL);
	lv_label_set_text(ui->CafeSettings_cupImgLabel, "Cup image");
	lv_label_set_long_mode(ui->CafeSettings_cupImgLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeSettings_cupImgLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeSettings_cupImgLabel
	static lv_style_t style_CafeSettings_cupImgLabel_main;
	lv_style_init(&style_CafeSettings_cupImgLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_cupImgLabel_main
	lv_style_set_radius(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, lv_color_make(0xfc, 0xfc, 0xfc));
	lv_style_set_text_font(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_22);
	lv_style_set_text_letter_space(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeSettings_cupImgLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeSettings_cupImgLabel, LV_LABEL_PART_MAIN, &style_CafeSettings_cupImgLabel_main);
	lv_obj_set_pos(ui->CafeSettings_cupImgLabel, 170, 29);
	lv_obj_set_size(ui->CafeSettings_cupImgLabel, 140, 0);

	//Write codes CafeSettings_backBtn
	ui->CafeSettings_backBtn = lv_imgbtn_create(ui->CafeSettings, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeSettings_backBtn
	static lv_style_t style_CafeSettings_backBtn_main;
	lv_style_init(&style_CafeSettings_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_backBtn_main
	lv_style_set_text_color(&style_CafeSettings_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeSettings_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeSettings_backBtn_main
	lv_style_set_text_color(&style_CafeSettings_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeSettings_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeSettings_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeSettings_backBtn, LV_IMGBTN_PART_MAIN, &style_CafeSettings_backBtn_main);
	lv_obj_set_pos(ui->CafeSettings_backBtn, 10, 10);
	lv_obj_set_size(ui->CafeSettings_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->CafeSettings_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeSettings_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeSettings_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeSettings_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes CafeSettings_espressoLarge
	ui->CafeSettings_espressoLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_espressoLarge
	static lv_style_t style_CafeSettings_espressoLarge_main;
	lv_style_init(&style_CafeSettings_espressoLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_espressoLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_espressoLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_espressoLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_espressoLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_espressoLarge, LV_IMG_PART_MAIN, &style_CafeSettings_espressoLarge_main);
	lv_obj_set_pos(ui->CafeSettings_espressoLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_espressoLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_espressoLarge, true);
	lv_img_set_src(ui->CafeSettings_espressoLarge,&_espresso_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_espressoLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_espressoLarge, 0);

	//Write codes CafeSettings_ristrettoLarge
	ui->CafeSettings_ristrettoLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_ristrettoLarge
	static lv_style_t style_CafeSettings_ristrettoLarge_main;
	lv_style_init(&style_CafeSettings_ristrettoLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_ristrettoLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_ristrettoLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_ristrettoLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_ristrettoLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_ristrettoLarge, LV_IMG_PART_MAIN, &style_CafeSettings_ristrettoLarge_main);
	lv_obj_set_pos(ui->CafeSettings_ristrettoLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_ristrettoLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_ristrettoLarge, true);
	lv_img_set_src(ui->CafeSettings_ristrettoLarge,&_ristretto_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_ristrettoLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_ristrettoLarge, 0);

	//Write codes CafeSettings_cappucinoLarge
	ui->CafeSettings_cappucinoLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_cappucinoLarge
	static lv_style_t style_CafeSettings_cappucinoLarge_main;
	lv_style_init(&style_CafeSettings_cappucinoLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_cappucinoLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_cappucinoLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_cappucinoLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_cappucinoLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_cappucinoLarge, LV_IMG_PART_MAIN, &style_CafeSettings_cappucinoLarge_main);
	lv_obj_set_pos(ui->CafeSettings_cappucinoLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_cappucinoLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_cappucinoLarge, true);
	lv_img_set_src(ui->CafeSettings_cappucinoLarge,&_cappuccinno_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_cappucinoLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_cappucinoLarge, 0);

	//Write codes CafeSettings_latteLarge
	ui->CafeSettings_latteLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_latteLarge
	static lv_style_t style_CafeSettings_latteLarge_main;
	lv_style_init(&style_CafeSettings_latteLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_latteLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_latteLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_latteLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_latteLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_latteLarge, LV_IMG_PART_MAIN, &style_CafeSettings_latteLarge_main);
	lv_obj_set_pos(ui->CafeSettings_latteLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_latteLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_latteLarge, true);
	lv_img_set_src(ui->CafeSettings_latteLarge,&_latte_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_latteLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_latteLarge, 0);

	//Write codes CafeSettings_mochaLarge
	ui->CafeSettings_mochaLarge = lv_img_create(ui->CafeSettings, NULL);

	//Write style LV_IMG_PART_MAIN for CafeSettings_mochaLarge
	static lv_style_t style_CafeSettings_mochaLarge_main;
	lv_style_init(&style_CafeSettings_mochaLarge_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeSettings_mochaLarge_main
	lv_style_set_image_recolor(&style_CafeSettings_mochaLarge_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeSettings_mochaLarge_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeSettings_mochaLarge_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeSettings_mochaLarge, LV_IMG_PART_MAIN, &style_CafeSettings_mochaLarge_main);
	lv_obj_set_pos(ui->CafeSettings_mochaLarge, 190, 68);
	lv_obj_set_size(ui->CafeSettings_mochaLarge, 100, 100);
	lv_obj_set_click(ui->CafeSettings_mochaLarge, true);
	lv_img_set_src(ui->CafeSettings_mochaLarge,&_mocha_alpha_100x100);
	lv_img_set_pivot(ui->CafeSettings_mochaLarge, 0,0);
	lv_img_set_angle(ui->CafeSettings_mochaLarge, 0);

	//Write codes label_CafeSettings_cmd
	ui->label_CafeSettings_cmd = lv_label_create(ui->CafeSettings, NULL);
	lv_label_set_text(ui->label_CafeSettings_cmd, "Please Speak a Command");
	lv_label_set_long_mode(ui->label_CafeSettings_cmd, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->label_CafeSettings_cmd, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for label_CafeSettings_cmd
	static lv_style_t style_label_CafeSettings_cmd_main;
	lv_style_init(&style_label_CafeSettings_cmd_main);

	//Write style state: LV_STATE_DEFAULT for style_label_CafeSettings_cmd_main
	lv_style_set_radius(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, &lv_font_montserrat_14);
	lv_style_set_text_letter_space(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_label_CafeSettings_cmd_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->label_CafeSettings_cmd, LV_LABEL_PART_MAIN, &style_label_CafeSettings_cmd_main);
	lv_obj_set_pos(ui->label_CafeSettings_cmd, 50, 10);
	lv_obj_set_size(ui->label_CafeSettings_cmd, 240, 0);
	lv_obj_set_hidden(ui->label_CafeSettings_cmd, 1);

	//Init events for screen
	events_init_CafeSettings(ui);
}

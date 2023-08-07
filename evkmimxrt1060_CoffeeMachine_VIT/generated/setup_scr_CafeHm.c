/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_CafeHm(lv_ui *ui){

	//Write codes CafeHm
	ui->CafeHm = lv_obj_create(NULL, NULL);

	//Write codes CafeHm_CafeBgnd
	ui->CafeHm_CafeBgnd = lv_img_create(ui->CafeHm, NULL);

	//Write style LV_IMG_PART_MAIN for CafeHm_CafeBgnd
	static lv_style_t style_CafeHm_CafeBgnd_main;
	lv_style_init(&style_CafeHm_CafeBgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_CafeBgnd_main
	lv_style_set_image_recolor(&style_CafeHm_CafeBgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_CafeBgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_CafeBgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeHm_CafeBgnd, LV_IMG_PART_MAIN, &style_CafeHm_CafeBgnd_main);
	lv_obj_set_pos(ui->CafeHm_CafeBgnd, 0, 0);
	lv_obj_set_size(ui->CafeHm_CafeBgnd, 480, 272);
	lv_obj_set_click(ui->CafeHm_CafeBgnd, true);
	lv_img_set_src(ui->CafeHm_CafeBgnd,&_Rectangle_alpha_480x272);
	lv_img_set_pivot(ui->CafeHm_CafeBgnd, 0,0);
	lv_img_set_angle(ui->CafeHm_CafeBgnd, 0);

	//Write codes CafeHm_backBtn
	ui->CafeHm_backBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_backBtn
	static lv_style_t style_CafeHm_backBtn_main;
	lv_style_init(&style_CafeHm_backBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_backBtn_main
	lv_style_set_text_color(&style_CafeHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_backBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_backBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_backBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_backBtn_main
	lv_style_set_text_color(&style_CafeHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_backBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_backBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_backBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_backBtn_main);
	lv_obj_set_pos(ui->CafeHm_backBtn, 10, 10);
	lv_obj_set_size(ui->CafeHm_backBtn, 30, 30);
	lv_imgbtn_set_src(ui->CafeHm_backBtn,LV_BTN_STATE_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_backBtn,LV_BTN_STATE_PRESSED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_backBtn,LV_BTN_STATE_CHECKED_RELEASED,&_back_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_backBtn,LV_BTN_STATE_CHECKED_PRESSED,&_back_alpha_30x30);

	//Write codes CafeHm_espressoBtn
	ui->CafeHm_espressoBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_espressoBtn
	static lv_style_t style_CafeHm_espressoBtn_main;
	lv_style_init(&style_CafeHm_espressoBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_espressoBtn_main
	lv_style_set_text_color(&style_CafeHm_espressoBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_espressoBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_espressoBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_espressoBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_espressoBtn_main
	lv_style_set_text_color(&style_CafeHm_espressoBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_espressoBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_espressoBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_espressoBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_espressoBtn_main);
	lv_obj_set_pos(ui->CafeHm_espressoBtn, 75, 65);
	lv_obj_set_size(ui->CafeHm_espressoBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_espressoBtn,LV_BTN_STATE_RELEASED,&_espresso_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_espressoBtn,LV_BTN_STATE_PRESSED,&_espresso_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_espressoBtn,LV_BTN_STATE_CHECKED_RELEASED,&_espresso_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_espressoBtn,LV_BTN_STATE_CHECKED_PRESSED,&_espresso_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_espressoBtn, true);

	//Write codes CafeHm_ristrettoBtn
	ui->CafeHm_ristrettoBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_ristrettoBtn
	static lv_style_t style_CafeHm_ristrettoBtn_main;
	lv_style_init(&style_CafeHm_ristrettoBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_ristrettoBtn_main
	lv_style_set_text_color(&style_CafeHm_ristrettoBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_ristrettoBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_ristrettoBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_ristrettoBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_ristrettoBtn_main
	lv_style_set_text_color(&style_CafeHm_ristrettoBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_ristrettoBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_ristrettoBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_ristrettoBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_ristrettoBtn_main);
	lv_obj_set_pos(ui->CafeHm_ristrettoBtn, 215, 65);
	lv_obj_set_size(ui->CafeHm_ristrettoBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_ristrettoBtn,LV_BTN_STATE_RELEASED,&_ristretto_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_ristrettoBtn,LV_BTN_STATE_PRESSED,&_ristretto_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_ristrettoBtn,LV_BTN_STATE_CHECKED_RELEASED,&_ristretto_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_ristrettoBtn,LV_BTN_STATE_CHECKED_PRESSED,&_ristretto_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_ristrettoBtn, true);

	//Write codes CafeHm_americanoBtn
	ui->CafeHm_americanoBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_americanoBtn
	static lv_style_t style_CafeHm_americanoBtn_main;
	lv_style_init(&style_CafeHm_americanoBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_americanoBtn_main
	lv_style_set_text_color(&style_CafeHm_americanoBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_americanoBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_americanoBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_americanoBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_americanoBtn_main
	lv_style_set_text_color(&style_CafeHm_americanoBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_americanoBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_americanoBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_americanoBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_americanoBtn_main);
	lv_obj_set_pos(ui->CafeHm_americanoBtn, 355, 65);
	lv_obj_set_size(ui->CafeHm_americanoBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_americanoBtn,LV_BTN_STATE_RELEASED,&_americano_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_americanoBtn,LV_BTN_STATE_PRESSED,&_americano_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_americanoBtn,LV_BTN_STATE_CHECKED_RELEASED,&_americano_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_americanoBtn,LV_BTN_STATE_CHECKED_PRESSED,&_americano_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_americanoBtn, true);

	//Write codes CafeHm_cappucinoBtn
	ui->CafeHm_cappucinoBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_cappucinoBtn
	static lv_style_t style_CafeHm_cappucinoBtn_main;
	lv_style_init(&style_CafeHm_cappucinoBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_cappucinoBtn_main
	lv_style_set_text_color(&style_CafeHm_cappucinoBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_cappucinoBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_cappucinoBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_cappucinoBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_cappucinoBtn_main
	lv_style_set_text_color(&style_CafeHm_cappucinoBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_cappucinoBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_cappucinoBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_cappucinoBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_cappucinoBtn_main);
	lv_obj_set_pos(ui->CafeHm_cappucinoBtn, 75, 165);
	lv_obj_set_size(ui->CafeHm_cappucinoBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_cappucinoBtn,LV_BTN_STATE_RELEASED,&_cappuccinno_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_cappucinoBtn,LV_BTN_STATE_PRESSED,&_cappuccinno_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_cappucinoBtn,LV_BTN_STATE_CHECKED_RELEASED,&_cappuccinno_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_cappucinoBtn,LV_BTN_STATE_CHECKED_PRESSED,&_cappuccinno_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_cappucinoBtn, true);

	//Write codes CafeHm_latteBtn
	ui->CafeHm_latteBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_latteBtn
	static lv_style_t style_CafeHm_latteBtn_main;
	lv_style_init(&style_CafeHm_latteBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_latteBtn_main
	lv_style_set_text_color(&style_CafeHm_latteBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_latteBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_latteBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_latteBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_latteBtn_main
	lv_style_set_text_color(&style_CafeHm_latteBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_latteBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_latteBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_latteBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_latteBtn_main);
	lv_obj_set_pos(ui->CafeHm_latteBtn, 215, 165);
	lv_obj_set_size(ui->CafeHm_latteBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_latteBtn,LV_BTN_STATE_RELEASED,&_latte_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_latteBtn,LV_BTN_STATE_PRESSED,&_latte_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_latteBtn,LV_BTN_STATE_CHECKED_RELEASED,&_latte_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_latteBtn,LV_BTN_STATE_CHECKED_PRESSED,&_latte_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_latteBtn, true);

	//Write codes CafeHm_mochaBtn
	ui->CafeHm_mochaBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_mochaBtn
	static lv_style_t style_CafeHm_mochaBtn_main;
	lv_style_init(&style_CafeHm_mochaBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_mochaBtn_main
	lv_style_set_text_color(&style_CafeHm_mochaBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_mochaBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_mochaBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_mochaBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_mochaBtn_main
	lv_style_set_text_color(&style_CafeHm_mochaBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_mochaBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_mochaBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_mochaBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_mochaBtn_main);
	lv_obj_set_pos(ui->CafeHm_mochaBtn, 355, 165);
	lv_obj_set_size(ui->CafeHm_mochaBtn, 50, 50);
	lv_imgbtn_set_src(ui->CafeHm_mochaBtn,LV_BTN_STATE_RELEASED,&_mocha_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_mochaBtn,LV_BTN_STATE_PRESSED,&_mocha_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_mochaBtn,LV_BTN_STATE_CHECKED_RELEASED,&_mocha_alpha_50x50);
	lv_imgbtn_set_src(ui->CafeHm_mochaBtn,LV_BTN_STATE_CHECKED_PRESSED,&_mocha_alpha_50x50);
	lv_imgbtn_set_checkable(ui->CafeHm_mochaBtn, true);

	//Write codes CafeHm_infoBtn
	ui->CafeHm_infoBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_infoBtn
	static lv_style_t style_CafeHm_infoBtn_main;
	lv_style_init(&style_CafeHm_infoBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_infoBtn_main
	lv_style_set_text_color(&style_CafeHm_infoBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_infoBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_infoBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_infoBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_infoBtn_main
	lv_style_set_text_color(&style_CafeHm_infoBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_infoBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_infoBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_infoBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_infoBtn_main);
	lv_obj_set_pos(ui->CafeHm_infoBtn, 400, 10);
	lv_obj_set_size(ui->CafeHm_infoBtn, 30, 30);
	lv_imgbtn_set_src(ui->CafeHm_infoBtn,LV_BTN_STATE_RELEASED,&_btn_info_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_infoBtn,LV_BTN_STATE_PRESSED,&_btn_info_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_infoBtn,LV_BTN_STATE_CHECKED_RELEASED,&_btn_info_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_infoBtn,LV_BTN_STATE_CHECKED_PRESSED,&_btn_info_alpha_30x30);
	lv_imgbtn_set_checkable(ui->CafeHm_infoBtn, true);

	//Write codes CafeHm_cleanBtn
	ui->CafeHm_cleanBtn = lv_imgbtn_create(ui->CafeHm, NULL);

	//Write style LV_IMGBTN_PART_MAIN for CafeHm_cleanBtn
	static lv_style_t style_CafeHm_cleanBtn_main;
	lv_style_init(&style_CafeHm_cleanBtn_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_cleanBtn_main
	lv_style_set_text_color(&style_CafeHm_cleanBtn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_CafeHm_cleanBtn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeHm_cleanBtn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeHm_cleanBtn_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_CHECKED for style_CafeHm_cleanBtn_main
	lv_style_set_text_color(&style_CafeHm_cleanBtn_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_CafeHm_cleanBtn_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_CafeHm_cleanBtn_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->CafeHm_cleanBtn, LV_IMGBTN_PART_MAIN, &style_CafeHm_cleanBtn_main);
	lv_obj_set_pos(ui->CafeHm_cleanBtn, 440, 10);
	lv_obj_set_size(ui->CafeHm_cleanBtn, 30, 30);
	lv_imgbtn_set_src(ui->CafeHm_cleanBtn,LV_BTN_STATE_RELEASED,&_btn_clean_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_cleanBtn,LV_BTN_STATE_PRESSED,&_btn_clean_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_cleanBtn,LV_BTN_STATE_CHECKED_RELEASED,&_btn_clean_alpha_30x30);
	lv_imgbtn_set_src(ui->CafeHm_cleanBtn,LV_BTN_STATE_CHECKED_PRESSED,&_btn_clean_alpha_30x30);
	lv_imgbtn_set_checkable(ui->CafeHm_cleanBtn, true);

	//Write codes CafeHm_ristrettoLabel
	ui->CafeHm_ristrettoLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_ristrettoLabel, "Ristretto");
	lv_label_set_long_mode(ui->CafeHm_ristrettoLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_ristrettoLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_ristrettoLabel
	static lv_style_t style_CafeHm_ristrettoLabel_main;
	lv_style_init(&style_CafeHm_ristrettoLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_ristrettoLabel_main
	lv_style_set_radius(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_ristrettoLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_ristrettoLabel, LV_LABEL_PART_MAIN, &style_CafeHm_ristrettoLabel_main);
	lv_obj_set_pos(ui->CafeHm_ristrettoLabel, 192, 121);
	lv_obj_set_size(ui->CafeHm_ristrettoLabel, 100, 0);

	//Write codes CafeHm_expressoLabel
	ui->CafeHm_expressoLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_expressoLabel, "Espresso");
	lv_label_set_long_mode(ui->CafeHm_expressoLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_expressoLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_expressoLabel
	static lv_style_t style_CafeHm_expressoLabel_main;
	lv_style_init(&style_CafeHm_expressoLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_expressoLabel_main
	lv_style_set_radius(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_expressoLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_expressoLabel, LV_LABEL_PART_MAIN, &style_CafeHm_expressoLabel_main);
	lv_obj_set_pos(ui->CafeHm_expressoLabel, 45, 120);
	lv_obj_set_size(ui->CafeHm_expressoLabel, 100, 0);

	//Write codes CafeHm_americanoLabel
	ui->CafeHm_americanoLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_americanoLabel, "Americano");
	lv_label_set_long_mode(ui->CafeHm_americanoLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_americanoLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_americanoLabel
	static lv_style_t style_CafeHm_americanoLabel_main;
	lv_style_init(&style_CafeHm_americanoLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_americanoLabel_main
	lv_style_set_radius(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_americanoLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_americanoLabel, LV_LABEL_PART_MAIN, &style_CafeHm_americanoLabel_main);
	lv_obj_set_pos(ui->CafeHm_americanoLabel, 328, 125);
	lv_obj_set_size(ui->CafeHm_americanoLabel, 100, 0);

	//Write codes CafeHm_cappucinoLabel
	ui->CafeHm_cappucinoLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_cappucinoLabel, "Cappucino");
	lv_label_set_long_mode(ui->CafeHm_cappucinoLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_cappucinoLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_cappucinoLabel
	static lv_style_t style_CafeHm_cappucinoLabel_main;
	lv_style_init(&style_CafeHm_cappucinoLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_cappucinoLabel_main
	lv_style_set_radius(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_cappucinoLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_cappucinoLabel, LV_LABEL_PART_MAIN, &style_CafeHm_cappucinoLabel_main);
	lv_obj_set_pos(ui->CafeHm_cappucinoLabel, 51, 222);
	lv_obj_set_size(ui->CafeHm_cappucinoLabel, 100, 0);

	//Write codes CafeHm_latteLabel
	ui->CafeHm_latteLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_latteLabel, "Cafe Latte");
	lv_label_set_long_mode(ui->CafeHm_latteLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_latteLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_latteLabel
	static lv_style_t style_CafeHm_latteLabel_main;
	lv_style_init(&style_CafeHm_latteLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_latteLabel_main
	lv_style_set_radius(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_latteLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_latteLabel, LV_LABEL_PART_MAIN, &style_CafeHm_latteLabel_main);
	lv_obj_set_pos(ui->CafeHm_latteLabel, 198, 219);
	lv_obj_set_size(ui->CafeHm_latteLabel, 100, 0);

	//Write codes CafeHm_mochaLabel
	ui->CafeHm_mochaLabel = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->CafeHm_mochaLabel, "Cafe Mocha");
	lv_label_set_long_mode(ui->CafeHm_mochaLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeHm_mochaLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeHm_mochaLabel
	static lv_style_t style_CafeHm_mochaLabel_main;
	lv_style_init(&style_CafeHm_mochaLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeHm_mochaLabel_main
	lv_style_set_radius(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_style_set_text_letter_space(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeHm_mochaLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeHm_mochaLabel, LV_LABEL_PART_MAIN, &style_CafeHm_mochaLabel_main);
	lv_obj_set_pos(ui->CafeHm_mochaLabel, 330, 222);
	lv_obj_set_size(ui->CafeHm_mochaLabel, 100, 0);

	//Write codes label_CafeHm_cmd
	ui->label_CafeHm_cmd = lv_label_create(ui->CafeHm, NULL);
	lv_label_set_text(ui->label_CafeHm_cmd, "Please Speak a Command");
	lv_label_set_long_mode(ui->label_CafeHm_cmd, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->label_CafeHm_cmd, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for label_CafeHm_cmd
	static lv_style_t style_label_CafeHm_cmd_main;
	lv_style_init(&style_label_CafeHm_cmd_main);

	//Write style state: LV_STATE_DEFAULT for style_label_CafeHm_cmd_main
	lv_style_set_radius(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, &lv_font_montserrat_14);
	lv_style_set_text_letter_space(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_label_CafeHm_cmd_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->label_CafeHm_cmd, LV_LABEL_PART_MAIN, &style_label_CafeHm_cmd_main);
	lv_obj_set_pos(ui->label_CafeHm_cmd, 60, 15);
	lv_obj_set_size(ui->label_CafeHm_cmd, 240, 0);
	lv_obj_set_hidden(ui->label_CafeHm_cmd, 1);

	//Init events for screen
	events_init_CafeHm(ui);
}
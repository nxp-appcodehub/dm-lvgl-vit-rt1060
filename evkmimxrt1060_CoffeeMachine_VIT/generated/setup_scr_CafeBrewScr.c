/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

static const lv_img_dsc_t* CafeBrewScr_coffeePourAnim_imgs[61] = {
	&CafeBrewScr_coffeePourAnimcf001,
	&CafeBrewScr_coffeePourAnimcf001,
	&CafeBrewScr_coffeePourAnimcf003,
	&CafeBrewScr_coffeePourAnimcf003,
	&CafeBrewScr_coffeePourAnimcf005,
	&CafeBrewScr_coffeePourAnimcf005,
	&CafeBrewScr_coffeePourAnimcf007,
	&CafeBrewScr_coffeePourAnimcf007,
	&CafeBrewScr_coffeePourAnimcf009,
	&CafeBrewScr_coffeePourAnimcf009,
	&CafeBrewScr_coffeePourAnimcf011,
	&CafeBrewScr_coffeePourAnimcf011,
	&CafeBrewScr_coffeePourAnimcf013,
	&CafeBrewScr_coffeePourAnimcf013,
	&CafeBrewScr_coffeePourAnimcf015,
	&CafeBrewScr_coffeePourAnimcf015,
	&CafeBrewScr_coffeePourAnimcf017,
	&CafeBrewScr_coffeePourAnimcf017,
	&CafeBrewScr_coffeePourAnimcf019,
	&CafeBrewScr_coffeePourAnimcf019,
	&CafeBrewScr_coffeePourAnimcf021,
	&CafeBrewScr_coffeePourAnimcf021,
	&CafeBrewScr_coffeePourAnimcf023,
	&CafeBrewScr_coffeePourAnimcf023,
	&CafeBrewScr_coffeePourAnimcf025,
	&CafeBrewScr_coffeePourAnimcf025,
	&CafeBrewScr_coffeePourAnimcf027,
	&CafeBrewScr_coffeePourAnimcf027,
	&CafeBrewScr_coffeePourAnimcf029,
	&CafeBrewScr_coffeePourAnimcf029,
	&CafeBrewScr_coffeePourAnimcf031,
	&CafeBrewScr_coffeePourAnimcf031,
	&CafeBrewScr_coffeePourAnimcf033,
	&CafeBrewScr_coffeePourAnimcf033,
	&CafeBrewScr_coffeePourAnimcf035,
	&CafeBrewScr_coffeePourAnimcf035,
	&CafeBrewScr_coffeePourAnimcf037,
	&CafeBrewScr_coffeePourAnimcf037,
	&CafeBrewScr_coffeePourAnimcf039,
	&CafeBrewScr_coffeePourAnimcf039,
	&CafeBrewScr_coffeePourAnimcf041,
	&CafeBrewScr_coffeePourAnimcf041,
	&CafeBrewScr_coffeePourAnimcf043,
	&CafeBrewScr_coffeePourAnimcf043,
	&CafeBrewScr_coffeePourAnimcf045,
	&CafeBrewScr_coffeePourAnimcf045,
	&CafeBrewScr_coffeePourAnimcf047,
	&CafeBrewScr_coffeePourAnimcf047,
	&CafeBrewScr_coffeePourAnimcf049,
	&CafeBrewScr_coffeePourAnimcf049,
	&CafeBrewScr_coffeePourAnimcf051,
	&CafeBrewScr_coffeePourAnimcf051,
	&CafeBrewScr_coffeePourAnimcf053,
	&CafeBrewScr_coffeePourAnimcf053,
	&CafeBrewScr_coffeePourAnimcf055,
	&CafeBrewScr_coffeePourAnimcf055,
	&CafeBrewScr_coffeePourAnimcf057,
	&CafeBrewScr_coffeePourAnimcf057,
	&CafeBrewScr_coffeePourAnimcf059,
	&CafeBrewScr_coffeePourAnimcf059,
	&CafeBrewScr_coffeePourAnimcf061
};

void setup_scr_CafeBrewScr(lv_ui *ui){

	//Write codes CafeBrewScr
	ui->CafeBrewScr = lv_obj_create(NULL, NULL);

	//Write codes CafeBrewScr_Bckgnd
	ui->CafeBrewScr_Bckgnd = lv_img_create(ui->CafeBrewScr, NULL);

	//Write style LV_IMG_PART_MAIN for CafeBrewScr_Bckgnd
	static lv_style_t style_CafeBrewScr_Bckgnd_main;
	lv_style_init(&style_CafeBrewScr_Bckgnd_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeBrewScr_Bckgnd_main
	lv_style_set_image_recolor(&style_CafeBrewScr_Bckgnd_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_CafeBrewScr_Bckgnd_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_CafeBrewScr_Bckgnd_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->CafeBrewScr_Bckgnd, LV_IMG_PART_MAIN, &style_CafeBrewScr_Bckgnd_main);
	lv_obj_set_pos(ui->CafeBrewScr_Bckgnd, 0, 0);
	lv_obj_set_size(ui->CafeBrewScr_Bckgnd, 480, 272);
	lv_obj_set_click(ui->CafeBrewScr_Bckgnd, true);
	lv_img_set_src(ui->CafeBrewScr_Bckgnd,&_Rectangle_alpha_480x272);
	lv_img_set_pivot(ui->CafeBrewScr_Bckgnd, 0,0);
	lv_img_set_angle(ui->CafeBrewScr_Bckgnd, 0);

	//Write codes CafeBrewScr_coffeePourAnim
	ui->CafeBrewScr_coffeePourAnim = lv_animimg_create(ui->CafeBrewScr, NULL);
	lv_obj_set_pos(ui->CafeBrewScr_coffeePourAnim, 173, 55);
	lv_obj_set_size(ui->CafeBrewScr_coffeePourAnim, 135, 170);
	lv_set_anim_img_sources(ui->CafeBrewScr_coffeePourAnim, (lv_img_dsc_t**) CafeBrewScr_coffeePourAnim_imgs);
	lv_set_anim_img_duration(ui->CafeBrewScr_coffeePourAnim, 3721);
	lv_set_anim_img_numbers(ui->CafeBrewScr_coffeePourAnim, 61);
	lv_anim_img_ext_t* CafeBrewScr_coffeePourAnim_ext = lv_obj_get_ext_attr(ui->CafeBrewScr_coffeePourAnim);
	lv_anim_set_ready_cb(&CafeBrewScr_coffeePourAnim_ext->anim, pourAnimationDone_cb);
	lv_set_anim_img_startup_repeat_count(ui->CafeBrewScr_coffeePourAnim, 0);
	lv_anim_img_startup(ui->CafeBrewScr_coffeePourAnim);

	//Write codes CafeBrewScr_welcomeLabel
	ui->CafeBrewScr_welcomeLabel = lv_label_create(ui->CafeBrewScr, NULL);
	lv_label_set_text(ui->CafeBrewScr_welcomeLabel, "Good Morning!");
	lv_label_set_long_mode(ui->CafeBrewScr_welcomeLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeBrewScr_welcomeLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeBrewScr_welcomeLabel
	static lv_style_t style_CafeBrewScr_welcomeLabel_main;
	lv_style_init(&style_CafeBrewScr_welcomeLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeBrewScr_welcomeLabel_main
	lv_style_set_radius(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_24);
	lv_style_set_text_letter_space(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeBrewScr_welcomeLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeBrewScr_welcomeLabel, LV_LABEL_PART_MAIN, &style_CafeBrewScr_welcomeLabel_main);
	lv_obj_set_pos(ui->CafeBrewScr_welcomeLabel, 145, 21);
	lv_obj_set_size(ui->CafeBrewScr_welcomeLabel, 190, 0);

	//Write codes CafeBrewScr_statusLabel
	ui->CafeBrewScr_statusLabel = lv_label_create(ui->CafeBrewScr, NULL);
	lv_label_set_text(ui->CafeBrewScr_statusLabel, "Filling ...");
	lv_label_set_long_mode(ui->CafeBrewScr_statusLabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->CafeBrewScr_statusLabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for CafeBrewScr_statusLabel
	static lv_style_t style_CafeBrewScr_statusLabel_main;
	lv_style_init(&style_CafeBrewScr_statusLabel_main);

	//Write style state: LV_STATE_DEFAULT for style_CafeBrewScr_statusLabel_main
	lv_style_set_radius(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, &lv_font_montserrat_24);
	lv_style_set_text_letter_space(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_CafeBrewScr_statusLabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->CafeBrewScr_statusLabel, LV_LABEL_PART_MAIN, &style_CafeBrewScr_statusLabel_main);
	lv_obj_set_pos(ui->CafeBrewScr_statusLabel, 129.5, 233);
	lv_obj_set_size(ui->CafeBrewScr_statusLabel, 221, 0);
}

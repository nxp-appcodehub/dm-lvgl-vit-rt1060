// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_

#include "gui_guider.h"
#include <stdio.h>
#include <stdlib.h>

void custom_init(lv_ui *ui);

void ovenModeSelection_cb(lv_obj_t * btn, lv_event_t event);
void ovStartBtn_cb(lv_obj_t * btn, lv_event_t event);
void ckCancelbtn_cb(lv_obj_t * btn, lv_event_t event);

void cafeSettingsSizeSelection_cb(lv_obj_t * btn, lv_event_t event);
bool checkCupSize(void);
void cafeBrewBtn_cb(lv_obj_t * btn, lv_event_t event);
void pourAnimationDone_cb(lv_anim_t * a);

void blenderSetup_cb(void);
void blenderModeSelection_cb(lv_obj_t * btn, lv_event_t event);
static void setBlenderPowerLevel(void);
void incrementPowerLevel_cb(lv_obj_t * chartObj, lv_event_t event);
void adjustBlendTime_cb(lv_obj_t * btn, lv_event_t event);
void blendActive_cb(void);
void blenderStartBtn_cb(lv_obj_t * btn, lv_event_t event);

void clearBlndSetup(void);

#endif /* EVENT_CB_H_ */

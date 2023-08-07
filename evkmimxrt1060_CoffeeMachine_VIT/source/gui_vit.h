/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _GUI_VIT_H_
#define _GUI_VIT_H_

#include "lvgl.h"
#include "PL_platformTypes_CortexM7.h"
#include "VIT.h"
#include "gui_guider.h"

typedef enum
{
    HOME_SCR                   = 0,
	CAFE_HOME_SCR              = 1,
	CAFE_SETTINGS_SCR          = 2,
	CAFE_BREW_SCR              = 3,
} SmartKitchen_Screen;

void gui_WakeupWord(void);
void gui_VoiceCmd(VIT_VoiceCommand_st *VoiceCommand);

extern lv_ui guider_ui;

#endif

/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __UI_EVENTS_H_
#define __UI_EVENTS_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

/**
 * Initialize main page event handlers
 * Call this function after setting up the main screen
 *
 * @param ui Pointer to the UI structure
 */
void ui_events_init(lv_ui *ui);

/**
 * Initialize sub-page home button event handler
 * Call this function when a sub-page is created
 *
 * @param ui Pointer to the UI structure
 * @param home_btn Pointer to the home button object
 */
void ui_subpage_home_event_init(lv_ui *ui, lv_obj_t *home_btn);

#ifdef __cplusplus
}
#endif
#endif /* __UI_EVENTS_H_ */

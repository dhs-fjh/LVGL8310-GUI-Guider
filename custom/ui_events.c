/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "gui_guider.h"
#include "ui_events.h"

/*********************
 *  STATIC PROTOTYPES
 *********************/
static void ui_main_btn_settings_event_handler(lv_event_t * e);
static void ui_main_btn_storage_event_handler(lv_event_t * e);
static void ui_main_btn_led_event_handler(lv_event_t * e);
static void ui_main_btn_comm_event_handler(lv_event_t * e);
static void ui_main_btn_IO_event_handler(lv_event_t * e);
static void ui_main_btn_pwr_event_handler(lv_event_t * e);

static void ui_subpage_btn_home_event_handler(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Initialize main page event handlers
 * Call this function after setting up the main screen
 */
void ui_events_init(lv_ui *ui)
{
    // Main page button event handlers - only initialize main page buttons
    if (ui->ui_main_btn_settings) {
        lv_obj_add_event_cb(ui->ui_main_btn_settings, ui_main_btn_settings_event_handler, LV_EVENT_CLICKED, ui);
    }
    if (ui->ui_main_btn_storage) {
        lv_obj_add_event_cb(ui->ui_main_btn_storage, ui_main_btn_storage_event_handler, LV_EVENT_CLICKED, ui);
    }
    if (ui->ui_main_btn_led) {
        lv_obj_add_event_cb(ui->ui_main_btn_led, ui_main_btn_led_event_handler, LV_EVENT_CLICKED, ui);
    }
    if (ui->ui_main_btn_comm) {
        lv_obj_add_event_cb(ui->ui_main_btn_comm, ui_main_btn_comm_event_handler, LV_EVENT_CLICKED, ui);
    }
    if (ui->ui_main_btn_IO) {
        lv_obj_add_event_cb(ui->ui_main_btn_IO, ui_main_btn_IO_event_handler, LV_EVENT_CLICKED, ui);
    }
    if (ui->ui_main_btn_pwr) {
        lv_obj_add_event_cb(ui->ui_main_btn_pwr, ui_main_btn_pwr_event_handler, LV_EVENT_CLICKED, ui);
    }
}

/**
 * Initialize sub-page home button event handler
 * Call this function when a sub-page is created
 */
void ui_subpage_home_event_init(lv_ui *ui, lv_obj_t *home_btn)
{
    if (home_btn) {
        lv_obj_add_event_cb(home_btn, ui_subpage_btn_home_event_handler, LV_EVENT_CLICKED, ui);
    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

// Wrapper function to setup settings page with events
static void setup_scr_ui_settings_with_events(lv_ui *ui)
{
    setup_scr_ui_settings(ui);
    // Add home button event after page is created
    ui_subpage_home_event_init(ui, ui->ui_settings_btn_home);
}

// Settings button event handler - Navigate to settings page
static void ui_main_btn_settings_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        ui_load_scr_animation(ui, &ui->ui_settings, ui->ui_settings_del, &ui->ui_main_del,
                            setup_scr_ui_settings_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
    }
}

// Wrapper function to setup storage page with events
static void setup_scr_ui_storage_with_events(lv_ui *ui)
{
    setup_scr_ui_storage(ui);
    ui_subpage_home_event_init(ui, ui->ui_storage_btn_home);
}

// Storage button event handler - Navigate to storage page
static void ui_main_btn_storage_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        ui_load_scr_animation(ui, &ui->ui_storage, ui->ui_storage_del, &ui->ui_main_del,
                            setup_scr_ui_storage_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
    }
}

// Wrapper function to setup LED page with events
static void setup_scr_ui_led_with_events(lv_ui *ui)
{
    setup_scr_ui_led(ui);
    ui_subpage_home_event_init(ui, ui->ui_led_btn_home);
}

// LED button event handler - Navigate to LED page
static void ui_main_btn_led_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        ui_load_scr_animation(ui, &ui->ui_led, ui->ui_led_del, &ui->ui_main_del,
                            setup_scr_ui_led_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
    }
}

// Wrapper function to setup comm page with events
static void setup_scr_ui_comm_with_events(lv_ui *ui)
{
    setup_scr_ui_comm(ui);
    ui_subpage_home_event_init(ui, ui->ui_comm_btn_home);
}

// Communication button event handler - Navigate to comm page
static void ui_main_btn_comm_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        ui_load_scr_animation(ui, &ui->ui_comm, ui->ui_comm_del, &ui->ui_main_del,
                            setup_scr_ui_comm_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
    }
}

// Wrapper function to setup IO page with events
static void setup_scr_ui_IO_with_events(lv_ui *ui)
{
    setup_scr_ui_IO(ui);
    ui_subpage_home_event_init(ui, ui->ui_IO_btn_home);
}

// IO button event handler - Navigate to IO page
static void ui_main_btn_IO_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        ui_load_scr_animation(ui, &ui->ui_IO, ui->ui_IO_del, &ui->ui_main_del,
                            setup_scr_ui_IO_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
    }
}

// Power button event handler - Could be used for shutdown/power management
static void ui_main_btn_pwr_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        // TODO: Implement power management functionality
        printf("Power button clicked - implement power management here\n");
    }
}

// Wrapper function to setup main page with events
static void setup_scr_ui_main_with_events(lv_ui *ui)
{
    setup_scr_ui_main(ui);
    ui_events_init(ui);
}

// Home button event handler - Navigate back to main page from any sub-page
static void ui_subpage_btn_home_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        // Determine which page we're on and set the appropriate delete flag
        lv_obj_t *current_scr = lv_scr_act();
        bool *del_flag = NULL;

        if (current_scr == ui->ui_settings) {
            del_flag = &ui->ui_settings_del;
        } else if (current_scr == ui->ui_comm) {
            del_flag = &ui->ui_comm_del;
        } else if (current_scr == ui->ui_IO) {
            del_flag = &ui->ui_IO_del;
        } else if (current_scr == ui->ui_led) {
            del_flag = &ui->ui_led_del;
        } else if (current_scr == ui->ui_storage) {
            del_flag = &ui->ui_storage_del;
        }

        if (del_flag != NULL) {
            ui_load_scr_animation(ui, &ui->ui_main, ui->ui_main_del, del_flag,
                                setup_scr_ui_main_with_events, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, true, true);
        }
    }
}

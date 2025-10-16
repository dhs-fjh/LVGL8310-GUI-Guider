/*
* Copyright 2023 NXP
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
#include "custom.h"
#include "ui_fs.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Custom initialization - called once at startup
 */
void custom_init(lv_ui *ui)
{
    /* Add your codes here */
    LV_LOG_USER("custom_init: ready");
}

/**
 * Initialize file system browser on storage page
 * Call this from events_init_ui_storage() in generated code
 */
void custom_storage_init(lv_ui *ui)
{
    LV_LOG_USER("custom_storage_init");
    ui_fs_init(ui);
}

/**
 * Cleanup file system browser when leaving storage page
 * Call this from storage home button handler in generated code
 */
void custom_storage_cleanup(void)
{
    LV_LOG_USER("custom_storage_cleanup");
    ui_fs_cleanup();
}

/**
 * Navigate to previous page in file browser
 * Call this from prev button handler in generated code
 */
void custom_storage_prev_page(lv_ui *ui)
{
    ui_fs_prev_page(ui);
}

/**
 * Navigate to next page in file browser
 * Call this from next button handler in generated code
 */
void custom_storage_next_page(lv_ui *ui)
{
    ui_fs_next_page(ui);
}


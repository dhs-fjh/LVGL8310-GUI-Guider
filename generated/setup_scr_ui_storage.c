/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_ui_storage(lv_ui *ui)
{
    //Write codes ui_storage
    ui->ui_storage = lv_obj_create(NULL);
    lv_obj_set_size(ui->ui_storage, 320, 240);
    lv_obj_set_scrollbar_mode(ui->ui_storage, LV_SCROLLBAR_MODE_OFF);

    //Write style for ui_storage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_storage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_storage_btn_home
    ui->ui_storage_btn_home = lv_btn_create(ui->ui_storage);
    ui->ui_storage_btn_home_label = lv_label_create(ui->ui_storage_btn_home);
    lv_label_set_text(ui->ui_storage_btn_home_label, "" LV_SYMBOL_HOME " ");
    lv_label_set_long_mode(ui->ui_storage_btn_home_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_storage_btn_home_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_storage_btn_home, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_storage_btn_home_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_storage_btn_home, 5, 5);
    lv_obj_set_size(ui->ui_storage_btn_home, 40, 30);

    //Write style for ui_storage_btn_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_storage_btn_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_storage_btn_home, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_storage_btn_home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_storage_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_storage_btn_home, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_storage_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_storage_btn_home, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_storage_btn_home, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_storage_btn_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_storage_btn_home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_storage_label_title
    ui->ui_storage_label_title = lv_label_create(ui->ui_storage);
    lv_label_set_text(ui->ui_storage_label_title, "Storage");
    lv_label_set_long_mode(ui->ui_storage_label_title, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_storage_label_title, 70, 15);
    lv_obj_set_size(ui->ui_storage_label_title, 180, 30);

    //Write style for ui_storage_label_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_storage_label_title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_storage_label_title, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_storage_label_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_storage_label_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_storage_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_storage_btn_next
    ui->ui_storage_btn_next = lv_btn_create(ui->ui_storage);
    ui->ui_storage_btn_next_label = lv_label_create(ui->ui_storage_btn_next);
    lv_label_set_text(ui->ui_storage_btn_next_label, "" LV_SYMBOL_RIGHT " ");
    lv_label_set_long_mode(ui->ui_storage_btn_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_storage_btn_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_storage_btn_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_storage_btn_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_storage_btn_next, 275, 5);
    lv_obj_set_size(ui->ui_storage_btn_next, 40, 30);

    //Write style for ui_storage_btn_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_storage_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_storage_btn_next, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_storage_btn_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_storage_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_storage_btn_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_storage_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_storage_btn_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_storage_btn_next, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_storage_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_storage_btn_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_storage_btn_prev
    ui->ui_storage_btn_prev = lv_btn_create(ui->ui_storage);
    ui->ui_storage_btn_prev_label = lv_label_create(ui->ui_storage_btn_prev);
    lv_label_set_text(ui->ui_storage_btn_prev_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->ui_storage_btn_prev_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_storage_btn_prev_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_storage_btn_prev, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_storage_btn_prev_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_storage_btn_prev, 230, 5);
    lv_obj_set_size(ui->ui_storage_btn_prev, 40, 30);

    //Write style for ui_storage_btn_prev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_storage_btn_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_storage_btn_prev, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_storage_btn_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_storage_btn_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_storage_btn_prev, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_storage_btn_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_storage_btn_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_storage_btn_prev, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_storage_btn_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_storage_btn_prev, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_storage_label_page
    ui->ui_storage_label_page = lv_label_create(ui->ui_storage);
    lv_label_set_text(ui->ui_storage_label_page, "1/1");
    lv_label_set_long_mode(ui->ui_storage_label_page, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_storage_label_page, 60, 15);
    lv_obj_set_size(ui->ui_storage_label_page, 60, 30);

    //Write style for ui_storage_label_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_storage_label_page, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_storage_label_page, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_storage_label_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_storage_label_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_storage_label_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of ui_storage.


    //Update current screen layout.
    lv_obj_update_layout(ui->ui_storage);

}

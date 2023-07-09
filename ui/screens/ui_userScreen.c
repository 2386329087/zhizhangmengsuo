// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SmartDoorLock

#include "../ui.h"

void ui_userScreen_screen_init(void)
{
    ui_userScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_userScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_enterpassword = lv_btn_create(ui_userScreen);
    lv_obj_set_width(ui_enterpassword, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_enterpassword, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_enterpassword, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_enterpassword, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_enterpassword, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_enterpassword);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "输入密码");
    lv_obj_set_style_text_font(ui_Label3, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_camera = lv_btn_create(ui_userScreen);
    lv_obj_set_width(ui_camera, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_camera, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_camera, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_camera, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_camera, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label5 = lv_label_create(ui_camera);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "摄像头");
    lv_obj_set_style_text_font(ui_Label5, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_userScreen);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "按入指纹以继续");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xA4A4A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &ui_font_chinese24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp = lv_label_create(ui_userScreen);
    lv_obj_set_width(ui_temp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_temp, "温度:26°C");
    lv_obj_set_style_text_color(ui_temp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_humi = lv_label_create(ui_userScreen);
    lv_obj_set_width(ui_humi, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_humi, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_humi, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_humi, "湿度:100%");
    lv_obj_set_style_text_font(ui_humi, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_enterpassword, ui_event_enterpassword, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_camera, ui_event_camera, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_userScreen, ui_event_userScreen, LV_EVENT_ALL, NULL);

}

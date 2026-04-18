#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_LOAD = 1,
    SCREEN_ID_MAIN = 2,
    SCREEN_ID_TASK_RUN = 3,
    SCREEN_ID_TASK_PROCESS = 4,
    SCREEN_ID_INFO = 5,
    SCREEN_ID_DEF_PAGE1 = 6,
    SCREEN_ID_DEF_PAGE2 = 7,
    SCREEN_ID_DEF_PAGE3 = 8,
    SCREEN_ID_DEF_PAGE4 = 9,
    _SCREEN_ID_LAST = 9
};

typedef struct _objects_t {
    lv_obj_t *load;
    lv_obj_t *main;
    lv_obj_t *task_run;
    lv_obj_t *task_process;
    lv_obj_t *info;
    lv_obj_t *def_page1;
    lv_obj_t *def_page2;
    lv_obj_t *def_page3;
    lv_obj_t *def_page4;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *load_model;
    lv_obj_t *load_ma_caddress;
    lv_obj_t *load_version;
    lv_obj_t *c_main_menu;
    lv_obj_t *main_task;
    lv_obj_t *main_profile;
    lv_obj_t *main_net;
    lv_obj_t *main_service;
    lv_obj_t *main_stats;
    lv_obj_t *main_support;
    lv_obj_t *c_page_4;
    lv_obj_t *c_bar_5;
    lv_obj_t *task_run_back;
    lv_obj_t *task_run_title;
    lv_obj_t *obj9;
    lv_obj_t *c_button_4;
    lv_obj_t *task_run_list_task;
    lv_obj_t *task_run_list_profile;
    lv_obj_t *task_run_label;
    lv_obj_t *task_run_cycles;
    lv_obj_t *task_run_plus;
    lv_obj_t *task_run_minus;
    lv_obj_t *task_run_start;
    lv_obj_t *c_page_1;
    lv_obj_t *c_bar_1;
    lv_obj_t *title_1;
    lv_obj_t *obj10;
    lv_obj_t *c_button_1;
    lv_obj_t *obj11;
    lv_obj_t *obj12;
    lv_obj_t *obj13;
    lv_obj_t *obj14;
    lv_obj_t *obj15;
    lv_obj_t *obj16;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *obj19;
    lv_obj_t *c_page_6;
    lv_obj_t *c_bar_7;
    lv_obj_t *info_title;
    lv_obj_t *obj20;
    lv_obj_t *c_button_6;
    lv_obj_t *info_field1;
    lv_obj_t *info_field2;
    lv_obj_t *info_field3;
    lv_obj_t *info_cancel;
    lv_obj_t *info_ok;
    lv_obj_t *c_page;
    lv_obj_t *c_bar;
    lv_obj_t *obj21;
    lv_obj_t *title;
    lv_obj_t *obj22;
    lv_obj_t *sig_1;
    lv_obj_t *b_sig1_2;
    lv_obj_t *b_sig1;
    lv_obj_t *b_sig1_1;
    lv_obj_t *next_2;
    lv_obj_t *c_button;
    lv_obj_t *b1;
    lv_obj_t *b2;
    lv_obj_t *b3;
    lv_obj_t *b4;
    lv_obj_t *b5;
    lv_obj_t *b6;
    lv_obj_t *c_page_5;
    lv_obj_t *c_bar_6;
    lv_obj_t *back_5;
    lv_obj_t *title_5;
    lv_obj_t *obj23;
    lv_obj_t *next_13;
    lv_obj_t *next_14;
    lv_obj_t *next_15;
    lv_obj_t *c_button_5;
    lv_obj_t *obj24;
    lv_obj_t *obj25;
    lv_obj_t *obj26;
    lv_obj_t *obj27;
    lv_obj_t *obj28;
    lv_obj_t *obj29;
    lv_obj_t *obj30;
    lv_obj_t *obj31;
    lv_obj_t *obj32;
    lv_obj_t *obj33;
    lv_obj_t *obj34;
    lv_obj_t *obj35;
    lv_obj_t *c_page_2;
    lv_obj_t *c_bar_3;
    lv_obj_t *back_3;
    lv_obj_t *title_3;
    lv_obj_t *obj36;
    lv_obj_t *next_7;
    lv_obj_t *next_8;
    lv_obj_t *next_9;
    lv_obj_t *c_button_2;
    lv_obj_t *obj37;
    lv_obj_t *obj38;
    lv_obj_t *obj39;
    lv_obj_t *obj40;
    lv_obj_t *obj41;
    lv_obj_t *obj42;
    lv_obj_t *obj43;
    lv_obj_t *obj44;
    lv_obj_t *obj45;
    lv_obj_t *obj46;
    lv_obj_t *obj47;
    lv_obj_t *obj48;
    lv_obj_t *obj49;
    lv_obj_t *obj50;
    lv_obj_t *obj51;
    lv_obj_t *obj52;
    lv_obj_t *c_page_3;
    lv_obj_t *c_bar_4;
    lv_obj_t *back_4;
    lv_obj_t *title_4;
    lv_obj_t *obj53;
    lv_obj_t *next_10;
    lv_obj_t *next_11;
    lv_obj_t *next_12;
    lv_obj_t *c_button_3;
    lv_obj_t *obj54;
    lv_obj_t *obj55;
    lv_obj_t *obj56;
    lv_obj_t *obj57;
    lv_obj_t *obj58;
    lv_obj_t *obj59;
    lv_obj_t *obj60;
    lv_obj_t *obj61;
    lv_obj_t *obj62;
    lv_obj_t *obj63;
    lv_obj_t *obj64;
    lv_obj_t *obj65;
    lv_obj_t *obj66;
} objects_t;

extern objects_t objects;

void create_screen_load();
void tick_screen_load();

void create_screen_main();
void tick_screen_main();

void create_screen_task_run();
void tick_screen_task_run();

void create_screen_task_process();
void tick_screen_task_process();

void create_screen_info();
void tick_screen_info();

void create_screen_def_page1();
void tick_screen_def_page1();

void create_screen_def_page2();
void tick_screen_def_page2();

void create_screen_def_page3();
void tick_screen_def_page3();

void create_screen_def_page4();
void tick_screen_def_page4();

void create_user_widget_123(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_123(int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/
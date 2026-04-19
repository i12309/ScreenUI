// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "element_ids.generated.h"
#include "page_ids.generated.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum Screen32ElementType {
    TYPE_UNKNOWN = 0,
    TYPE_ARC = 1,
    TYPE_BUTTON = 2,
    TYPE_BUTTON_MATRIX = 3,
    TYPE_CONTAINER = 4,
    TYPE_IMAGE = 5,
    TYPE_TEXT = 6,
    TYPE_LIST = 7,
    TYPE_MENU = 8,
    TYPE_MESSAGE_BOX = 9,
    TYPE_QR_CODE = 10,
    TYPE_PANEL = 11,
    TYPE_SPAN = 12,
    TYPE_TABLE = 13,
    TYPE_TAB_VIEW = 14,
    TYPE_TAB = 15,
    TYPE_TEXTAREA = 16,
    TYPE_TILE_VIEW = 17,
    TYPE_WINDOW = 18,
    TYPE_CALENDAR = 19,
    TYPE_CHECKBOX = 20,
    TYPE_DROPDOWN = 21,
    TYPE_IMAGE_BUTTON = 22,
    TYPE_KEYBOARD = 23,
    TYPE_ROLLER = 24,
    TYPE_SPINBOX = 25,
    TYPE_SLIDER = 26,
    TYPE_SWITCH = 27,
    TYPE_ANIMATION_IMAGE = 28,
    TYPE_BAR = 29,
    TYPE_CHART = 30,
    TYPE_CANVAS = 31,
    TYPE_LED = 32,
    TYPE_LINE = 33,
    TYPE_LOTTIE = 34,
    TYPE_SCALE = 35,
    TYPE_SPINNER = 36,
} Screen32ElementType;

typedef struct Screen32ElementDescriptor {
    uint32_t element_id;
    const char* element_name;
    const char* object_name;
    uint32_t page_id;
    const char* page_name;
    Screen32ElementType element_type;
    bool supports_text;
    bool supports_value;
    bool supports_visible;
    bool supports_color;
    bool emits_button_event;
    bool emits_input_event;
} Screen32ElementDescriptor;

static const Screen32ElementDescriptor g_screen32_element_descriptors[SCREEN32_ELEMENT_DESCRIPTOR_COUNT] = {
    {593491382u, "pnl_LOAD_MODEL", "load_model", 1u, "LOAD", TYPE_PANEL, true, false, true, true, false, false},
    {747485262u, "txt_LOAD_MA_CADDRESS", "load_ma_caddress", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {914719783u, "txt_LOAD_VERSION", "load_version", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {1033385314u, "cnt_MAIN_MENU", "c_main_menu", 2u, "MAIN", TYPE_CONTAINER, true, false, true, true, false, false},
    {893821717u, "btn_MAIN_TASK", "main_task", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {1056103359u, "btn_MAIN_PROFILE", "main_profile", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {572303784u, "btn_MAIN_NET", "main_net", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {614692528u, "btn_MAIN_SERVICE", "main_service", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {572658358u, "btn_MAIN_STATS", "main_stats", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {729598653u, "btn_MAIN_SUPPORT", "main_support", 2u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false},
    {982710104u, "cnt_PAGE_4", "c_page_4", 3u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false},
    {980116818u, "cnt_BAR_5", "c_bar_5", 3u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false},
    {781794537u, "btn_TASK_RUN_BACK", "task_run_back", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {1024078885u, "pnl_TASK_RUN_TITLE", "task_run_title", 3u, "TASK_RUN", TYPE_PANEL, true, false, true, true, false, false},
    {575182334u, "cnt_BUTTON_4", "c_button_4", 3u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false},
    {735236735u, "btn_TASK_RUN_LIST_TASK", "task_run_list_task", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {653851418u, "btn_TASK_RUN_LIST_PROFILE", "task_run_list_profile", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {659010631u, "btn_TASK_RUN_LABEL", "task_run_label", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {958874997u, "btn_TASK_RUN_CYCLES", "task_run_cycles", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {905586485u, "btn_TASK_RUN_PLUS", "task_run_plus", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {836470064u, "btn_TASK_RUN_MINUS", "task_run_minus", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {797587880u, "btn_TASK_RUN_START", "task_run_start", 3u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false},
    {689186219u, "cnt_PAGE_1", "c_page_1", 4u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false},
    {958843489u, "cnt_BAR_1", "c_bar_1", 4u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false},
    {1032884038u, "pnl_TITLE_1", "title_1", 4u, "TASK_PROCESS", TYPE_PANEL, true, false, true, true, false, false},
    {1003462613u, "cnt_BUTTON_1", "c_button_1", 4u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false},
    {593768207u, "cnt_PAGE_6", "c_page_6", 5u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false},
    {549692719u, "cnt_BAR_7", "c_bar_7", 5u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false},
    {696053373u, "pnl_INFO_TITLE", "info_title", 5u, "INFO", TYPE_PANEL, true, false, true, true, false, false},
    {717848663u, "cnt_BUTTON_6", "c_button_6", 5u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false},
    {985738782u, "btn_INFO_FIELD1", "info_field1", 5u, "INFO", TYPE_BUTTON, true, false, true, true, true, false},
    {880767611u, "btn_INFO_FIELD2", "info_field2", 5u, "INFO", TYPE_BUTTON, true, false, true, true, true, false},
    {719722259u, "btn_INFO_FIELD3", "info_field3", 5u, "INFO", TYPE_BUTTON, true, false, true, true, true, false},
    {738669206u, "btn_INFO_CANCEL", "info_cancel", 5u, "INFO", TYPE_BUTTON, true, false, true, true, true, false},
    {961256464u, "btn_INFO_OK", "info_ok", 5u, "INFO", TYPE_BUTTON, true, false, true, true, true, false},
    {692903464u, "cnt_PAGE_7", "c_page_7", 6u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false},
    {830426633u, "cnt_BAR_8", "c_bar_8", 6u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false},
    {774028606u, "pnl_INPUT_TITLE_1", "input_title_1", 6u, "INPUT", TYPE_PANEL, true, false, true, true, false, false},
    {868067187u, "cnt_BUTTON_7", "c_button_7", 6u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false},
    {1040403263u, "btn_INPUT_FIELD1", "input_field1", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {792310614u, "btn_INPUT_FIELD2", "input_field2", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {728260920u, "btn_INPUT_FIELD4", "input_field4", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {733032387u, "btn_INPUT_FIELD3", "input_field3", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {697176737u, "btn_INPUT_CANCEL", "input_cancel", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {970343905u, "btn_INPUT_OK", "input_ok", 6u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false},
    {811475656u, "cnt_PAGE_8", "c_page_8", 7u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false},
    {904255359u, "cnt_BAR_9", "c_bar_9", 7u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false},
    {618199323u, "pnl_INIT_TITLE", "init_title", 7u, "INIT", TYPE_PANEL, true, false, true, true, false, false},
    {854676180u, "btn_INIT_HTTP", "init_http", 7u, "INIT", TYPE_BUTTON, true, false, true, true, true, false},
    {985764943u, "btn_INIT_OK", "init_ok", 7u, "INIT", TYPE_BUTTON, true, false, true, true, true, false},
    {868351749u, "cnt_BUTTON_8", "c_button_8", 7u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false},
    {809266216u, "cnt_PAGE", "c_page", 8u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {984274153u, "cnt_BAR", "c_bar", 8u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {828797990u, "pnl_TITLE", "title", 8u, "DEF_PAGE1", TYPE_PANEL, true, false, true, true, false, false},
    {1049216991u, "pnl_SIG_1", "sig_1", 8u, "DEF_PAGE1", TYPE_PANEL, true, false, true, true, false, false},
    {738287735u, "btn_SIG1_2", "b_sig1_2", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1027720798u, "btn_SIG1", "b_sig1", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {883773008u, "btn_SIG1_1", "b_sig1_1", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1035025291u, "btn_NEXT_2", "next_2", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1013391020u, "cnt_BUTTON", "c_button", 8u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {774593373u, "btn_B1", "b1", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1067973892u, "btn_B2", "b2", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1055168153u, "btn_B3", "b3", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {763424694u, "btn_B4", "b4", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {778514036u, "btn_B5", "b5", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1049958006u, "btn_B6", "b6", 8u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {948484049u, "cnt_PAGE_5", "c_page_5", 9u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {944737715u, "cnt_BAR_6", "c_bar_6", 9u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {1008508692u, "btn_BACK_5", "back_5", 9u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {1068966703u, "pnl_TITLE_5", "title_5", 9u, "DEF_PAGE2", TYPE_PANEL, true, false, true, true, false, false},
    {1015375349u, "btn_NEXT_13", "next_13", 9u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {834401655u, "btn_NEXT_14", "next_14", 9u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {1034510309u, "btn_NEXT_15", "next_15", 9u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {916975904u, "cnt_BUTTON_5", "c_button_5", 9u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {684417468u, "cnt_PAGE_2", "c_page_2", 10u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {546217965u, "cnt_BAR_3", "c_bar_3", 10u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {839392768u, "btn_BACK_3", "back_3", 10u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {684863696u, "pnl_TITLE_3", "title_3", 10u, "DEF_PAGE3", TYPE_PANEL, true, false, true, true, false, false},
    {624416224u, "btn_NEXT_7", "next_7", 10u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {921401456u, "btn_NEXT_8", "next_8", 10u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {544800465u, "btn_NEXT_9", "next_9", 10u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {537248280u, "cnt_BUTTON_2", "c_button_2", 10u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {916570524u, "cnt_PAGE_3", "c_page_3", 11u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
    {800731870u, "cnt_BAR_4", "c_bar_4", 11u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
    {931023985u, "btn_BACK_4", "back_4", 11u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {585286522u, "pnl_TITLE_4", "title_4", 11u, "DEF_PAGE4", TYPE_PANEL, true, false, true, true, false, false},
    {920710893u, "btn_NEXT_10", "next_10", 11u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {1033400519u, "btn_NEXT_11", "next_11", 11u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {600400769u, "btn_NEXT_12", "next_12", 11u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {937141394u, "cnt_BUTTON_3", "c_button_3", 11u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
};

static inline size_t screen32_element_descriptor_count(void) {
    return (size_t)SCREEN32_ELEMENT_DESCRIPTOR_COUNT;
}

static inline const Screen32ElementDescriptor* screen32_find_element_descriptor(uint32_t element_id) {
    for (size_t i = 0; i < screen32_element_descriptor_count(); ++i) {
        if (g_screen32_element_descriptors[i].element_id == element_id) {
            return &g_screen32_element_descriptors[i];
        }
    }
    return 0;
}

#ifdef __cplusplus
}
#endif

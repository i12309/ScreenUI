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
    // Битовая маска synced-атрибутов. Бит i установлен, если атрибут
    // с значением enum ElementAttribute = i синхронизируется.
    // Определяется tools/ui_meta_gen/synced_attrs.yaml.
    uint16_t synced_mask;
} Screen32ElementDescriptor;

static const Screen32ElementDescriptor g_screen32_element_descriptors[SCREEN32_ELEMENT_DESCRIPTOR_COUNT] = {
    {948557784u, "pnl_LOAD_MODEL_1", "load_model_1", 1u, "LOAD0", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {593491382u, "pnl_LOAD_MODEL", "load_model", 2u, "LOAD", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {747485262u, "txt_LOAD_MA_CADDRESS", "load_ma_caddress", 2u, "LOAD", TYPE_TEXT, true, false, true, true, false, false, 0x03C2u},
    {914719783u, "txt_LOAD_VERSION", "load_version", 2u, "LOAD", TYPE_TEXT, true, false, true, true, false, false, 0x03C2u},
    {1033385314u, "cnt_MAIN_MENU", "c_main_menu", 3u, "MAIN", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {893821717u, "btn_MAIN_TASK", "main_task", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1056103359u, "btn_MAIN_PROFILE", "main_profile", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {572303784u, "btn_MAIN_NET", "main_net", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {614692528u, "btn_MAIN_SERVICE", "main_service", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {572658358u, "btn_MAIN_STATS", "main_stats", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {729598653u, "btn_MAIN_SUPPORT", "main_support", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {982710104u, "cnt_PAGE_4", "c_page_4", 4u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {980116818u, "cnt_BAR_5", "c_bar_5", 4u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {781794537u, "btn_TASK_RUN_BACK", "task_run_back", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1024078885u, "pnl_TASK_RUN_TITLE", "task_run_title", 4u, "TASK_RUN", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {575182334u, "cnt_BUTTON_4", "c_button_4", 4u, "TASK_RUN", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {735236735u, "btn_TASK_RUN_LIST_TASK", "task_run_list_task", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {653851418u, "btn_TASK_RUN_LIST_PROFILE", "task_run_list_profile", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {659010631u, "btn_TASK_RUN_LABEL", "task_run_label", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {958874997u, "btn_TASK_RUN_CYCLES", "task_run_cycles", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {905586485u, "btn_TASK_RUN_PLUS", "task_run_plus", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {836470064u, "btn_TASK_RUN_MINUS", "task_run_minus", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {797587880u, "btn_TASK_RUN_START", "task_run_start", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {689186219u, "cnt_PAGE_1", "c_page_1", 5u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {958843489u, "cnt_BAR_1", "c_bar_1", 5u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {1032884038u, "pnl_TITLE_1", "title_1", 5u, "TASK_PROCESS", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {1003462613u, "cnt_BUTTON_1", "c_button_1", 5u, "TASK_PROCESS", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {593768207u, "cnt_PAGE_6", "c_page_6", 6u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {549692719u, "cnt_BAR_7", "c_bar_7", 6u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {883611505u, "btn_INFO_BACK", "info_back", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {696053373u, "pnl_INFO_TITLE", "info_title", 6u, "INFO", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {736888230u, "btn_INFO_NEXT", "info_next", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {717848663u, "cnt_BUTTON_6", "c_button_6", 6u, "INFO", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {985738782u, "btn_INFO_FIELD1", "info_field1", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {880767611u, "btn_INFO_FIELD2", "info_field2", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {719722259u, "btn_INFO_FIELD3", "info_field3", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {738669206u, "btn_INFO_CANCEL", "info_cancel", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {961256464u, "btn_INFO_OK", "info_ok", 6u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {692903464u, "cnt_PAGE_7", "c_page_7", 7u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {830426633u, "cnt_BAR_8", "c_bar_8", 7u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {774028606u, "pnl_INPUT_TITLE_1", "input_title_1", 7u, "INPUT", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {868067187u, "cnt_BUTTON_7", "c_button_7", 7u, "INPUT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {1040403263u, "btn_INPUT_FIELD1", "input_field1", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {792310614u, "btn_INPUT_FIELD2", "input_field2", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {728260920u, "btn_INPUT_FIELD4", "input_field4", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {733032387u, "btn_INPUT_FIELD3", "input_field3", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {697176737u, "btn_INPUT_CANCEL", "input_cancel", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {970343905u, "btn_INPUT_OK", "input_ok", 7u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {811475656u, "cnt_PAGE_8", "c_page_8", 8u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {904255359u, "cnt_BAR_9", "c_bar_9", 8u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {618199323u, "pnl_INIT_TITLE", "init_title", 8u, "INIT", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {854676180u, "btn_INIT_HTTP", "init_http", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {985764943u, "btn_INIT_OK", "init_ok", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {868351749u, "cnt_BUTTON_8", "c_button_8", 8u, "INIT", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {1037398668u, "drp_INIT_MACHINE", "init_machine", 8u, "INIT", TYPE_DROPDOWN, true, true, true, true, false, true, 0x0700u},
    {858911524u, "btn_INIT_GROUP", "init_group", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {757239833u, "btn_INIT_NAME", "init_name", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1015158681u, "btn_INIT_ACCESS_POINT", "init_access_point", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1070125018u, "chk_INIT_R_ACCESS_POINT", "init_r_access_point", 8u, "INIT", TYPE_CHECKBOX, true, true, true, true, false, true, 0x0700u},
    {1068134903u, "btn_INIT_TEST", "init_test", 8u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {611967224u, "chk_INIT_R_TEST", "init_r_test", 8u, "INIT", TYPE_CHECKBOX, true, true, true, true, false, true, 0x0700u},
    {586431142u, "btn_WAIT_TEXT1", "wait_text1", 9u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {771098777u, "btn_WAIT_TEXT2", "wait_text2", 9u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {707471411u, "btn_WAIT_TEXT3", "wait_text3", 9u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {809266216u, "cnt_PAGE", "c_page", 10u, "SERVICE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {984274153u, "cnt_BAR", "c_bar", 10u, "SERVICE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {705822426u, "btn_SERVICE_BACK", "service_back", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {783057328u, "pnl_SERVICE_TITLE", "service_title", 10u, "SERVICE", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {1035025291u, "btn_NEXT_2", "next_2", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1013391020u, "cnt_BUTTON", "c_button", 10u, "SERVICE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {876544731u, "btn_SERVICE_TABLE", "service_table", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {649580207u, "btn_SERVICE_PAPER", "service_paper", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1005812956u, "btn_SERVICE_GUILLOTINE", "service_guillotine", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {955000198u, "btn_SERVICE_SLICE", "service_slice", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {660622916u, "btn_SERVICE_CALIBRATION", "service_calibration", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {560154889u, "btn_SERVICE_PROBA", "service_proba", 10u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {654593177u, "cnt_PAGE_10", "c_page_10", 11u, "SERVICE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {564830685u, "cnt_BAR_11", "c_bar_11", 11u, "SERVICE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {638419350u, "btn_SERVICE2_BACK", "service2_back", 11u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {579003233u, "pnl_SERVICE2_TITLE", "service2_title", 11u, "SERVICE2", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {633576603u, "cnt_BUTTON_10", "c_button_10", 11u, "SERVICE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {748959496u, "btn_SERVICE_TABLE_1", "service_table_1", 11u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {620561065u, "btn_SERVICE_PAPER_1", "service_paper_1", 11u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {937444719u, "btn_SERVICE_GUILLOTINE_1", "service_guillotine_1", 11u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {598393631u, "cnt_PAGE_9", "c_page_9", 12u, "DEF_PAGE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {749654442u, "cnt_BAR_10", "c_bar_10", 12u, "DEF_PAGE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {705408621u, "pnl_TITLE_6", "title_6", 12u, "DEF_PAGE", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {1032392636u, "pnl_SIG_3", "sig_3", 12u, "DEF_PAGE", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {588353075u, "btn_SIG1_6", "b_sig1_6", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {956711336u, "btn_SIG1_7", "b_sig1_7", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {563615222u, "btn_SIG1_8", "b_sig1_8", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {963860651u, "btn_NEXT_3", "next_3", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {876012449u, "cnt_BUTTON_9", "c_button_9", 12u, "DEF_PAGE", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {740047140u, "btn_B1_1", "b1_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1013691630u, "btn_B2_1", "b2_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1053036969u, "btn_B3_1", "b3_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {675347161u, "btn_B4_1", "b4_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {754207632u, "btn_B5_1", "b5_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {872159707u, "btn_B6_1", "b6_1", 12u, "DEF_PAGE", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {948484049u, "cnt_PAGE_5", "c_page_5", 13u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {944737715u, "cnt_BAR_6", "c_bar_6", 13u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {1008508692u, "btn_BACK_5", "back_5", 13u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1068966703u, "pnl_TITLE_5", "title_5", 13u, "DEF_PAGE2", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {1015375349u, "btn_NEXT_13", "next_13", 13u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {834401655u, "btn_NEXT_14", "next_14", 13u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1034510309u, "btn_NEXT_15", "next_15", 13u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {916975904u, "cnt_BUTTON_5", "c_button_5", 13u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {684417468u, "cnt_PAGE_2", "c_page_2", 14u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {546217965u, "cnt_BAR_3", "c_bar_3", 14u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {839392768u, "btn_BACK_3", "back_3", 14u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {684863696u, "pnl_TITLE_3", "title_3", 14u, "DEF_PAGE3", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {624416224u, "btn_NEXT_7", "next_7", 14u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {921401456u, "btn_NEXT_8", "next_8", 14u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {544800465u, "btn_NEXT_9", "next_9", 14u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {537248280u, "cnt_BUTTON_2", "c_button_2", 14u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {916570524u, "cnt_PAGE_3", "c_page_3", 15u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {800731870u, "cnt_BAR_4", "c_bar_4", 15u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {931023985u, "btn_BACK_4", "back_4", 15u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {585286522u, "pnl_TITLE_4", "title_4", 15u, "DEF_PAGE4", TYPE_PANEL, true, false, true, true, false, false, 0x190Eu},
    {920710893u, "btn_NEXT_10", "next_10", 15u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {1033400519u, "btn_NEXT_11", "next_11", 15u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {600400769u, "btn_NEXT_12", "next_12", 15u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false, 0x034Eu},
    {937141394u, "cnt_BUTTON_3", "c_button_3", 15u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false, 0x190Eu},
    {782111236u, "txa_KBD_TEXT", "kbd_text", 16u, "KEYBOARD", TYPE_TEXTAREA, true, false, true, true, false, true, 0x0302u},
    {635953031u, "kbd_KBD_KEY", "kbd_key", 16u, "KEYBOARD", TYPE_KEYBOARD, false, false, true, true, false, true, 0x0100u},
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

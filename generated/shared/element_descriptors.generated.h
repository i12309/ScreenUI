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

typedef enum Screen32KeyboardKind {
    KEYBOARD_NONE = 0,
    KEYBOARD_TEXT = 1,
    KEYBOARD_NUMBER = 2,
} Screen32KeyboardKind;

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
    bool opens_keyboard;
    Screen32KeyboardKind keyboard_kind;
    uint16_t keyboard_max_length;
    // Битовая маска synced-атрибутов. Бит i установлен, если атрибут
    // с значением enum ElementAttribute = i синхронизируется.
    // Определяется tools/ui_meta_gen/synced_attrs.yaml.
    uint16_t synced_mask;
} Screen32ElementDescriptor;

static const Screen32ElementDescriptor g_screen32_element_descriptors[SCREEN32_ELEMENT_DESCRIPTOR_COUNT] = {
    {948557784u, "pnl_LOAD_MODEL_1", "load_model_1", 1u, "LOAD0", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {593491382u, "pnl_LOAD_MODEL", "load_model", 2u, "LOAD", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {747485262u, "txt_LOAD_MA_CADDRESS", "load_ma_caddress", 2u, "LOAD", TYPE_TEXT, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x03C2u},
    {914719783u, "txt_LOAD_VERSION", "load_version", 2u, "LOAD", TYPE_TEXT, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x03C2u},
    {893821717u, "btn_MAIN_TASK", "main_task", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1056103359u, "btn_MAIN_PROFILE", "main_profile", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {572303784u, "btn_MAIN_NET", "main_net", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {614692528u, "btn_MAIN_SERVICE", "main_service", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {572658358u, "btn_MAIN_STATS", "main_stats", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {729598653u, "btn_MAIN_SUPPORT", "main_support", 3u, "MAIN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {781794537u, "btn_TASK_RUN_BACK", "task_run_back", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1024078885u, "pnl_TASK_RUN_TITLE", "task_run_title", 4u, "TASK_RUN", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {735236735u, "btn_TASK_RUN_LIST_TASK", "task_run_list_task", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {653851418u, "btn_TASK_RUN_LIST_PROFILE", "task_run_list_profile", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {659010631u, "btn_TASK_RUN_LABEL", "task_run_label", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {958874997u, "btn_TASK_RUN_CYCLES", "task_run_cycles", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 8u, 0x034Eu},
    {905586485u, "btn_TASK_RUN_PLUS", "task_run_plus", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {836470064u, "btn_TASK_RUN_MINUS", "task_run_minus", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {797587880u, "btn_TASK_RUN_START", "task_run_start", 4u, "TASK_RUN", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1032884038u, "pnl_TITLE_1", "title_1", 5u, "TASK_PROCESS", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {831224623u, "btn_TASK_BACK", "task_back", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {997321370u, "pnl_TASK_TITLE", "task_title", 6u, "TASK", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {886759107u, "btn_TASK_DEL", "task_del", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1068775146u, "btn_TASK_SAVE", "task_save", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {648012821u, "btn_TASK_NAME", "task_name", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {974082187u, "btn_TASK_LIST_PROFILE", "task_list_profile", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {820783404u, "btn_TASK_PRODUCT_MM", "task_product_mm", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {895058826u, "btn_TASK_OVER_MM", "task_over_mm", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {799239240u, "btn_TASK_FIRST_CUT_MM", "task_first_cut_mm", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {789530071u, "btn_TASK_LAST_CUT_MM", "task_last_cut_mm", 6u, "TASK", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {907361824u, "btn_PROFILE_BACK", "profile_back", 7u, "PROFILE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {574905067u, "pnl_PROFILE_TITLE", "profile_title", 7u, "PROFILE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {949982196u, "btn_PROFILE_DEL", "profile_del", 7u, "PROFILE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {895657393u, "btn_PROFILE_SAVE", "profile_save", 7u, "PROFILE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {896315074u, "btn_PROFILE_NAME", "profile_name", 7u, "PROFILE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {885413811u, "btn_PROFILE_NAME_1", "profile_name_1", 7u, "PROFILE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {558000753u, "btn_LIST_BACK", "list_back", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {642528287u, "pnl_LIST_TITLE", "list_title", 8u, "LIST", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {967845473u, "btn_LIST_DEL", "list_del", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1072486628u, "btn_LIST_ADD", "list_add", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {672683260u, "btn_LIST_NEXT", "list_next", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {897373125u, "btn_LIST_CHECK_1", "list_check_1", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {542721080u, "btn_LIST_ITEM_1", "list_item_1", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {976808764u, "btn_LIST_EDIT_1", "list_edit_1", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {748356360u, "btn_LIST_CHECK_2", "list_check_2", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1014243456u, "btn_LIST_ITEM_2", "list_item_2", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {748393501u, "btn_LIST_EDIT_2", "list_edit_2", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {543584105u, "btn_LIST_CHECK_3", "list_check_3", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {731072899u, "btn_LIST_ITEM_3", "list_item_3", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {710548845u, "btn_LIST_EDIT_3", "list_edit_3", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1043817961u, "btn_LIST_CHECK_4", "list_check_4", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {625116578u, "btn_LIST_ITEM_4", "list_item_4", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1026994717u, "btn_LIST_EDIT_4", "list_edit_4", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {861866436u, "btn_LIST_CHECK_5", "list_check_5", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {944599746u, "btn_LIST_ITEM_5", "list_item_5", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {782715618u, "btn_LIST_EDIT_5", "list_edit_5", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {571388992u, "btn_LIST_CHECK_6", "list_check_6", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1046977323u, "btn_LIST_ITEM_6", "list_item_6", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {913687764u, "btn_LIST_EDIT_6", "list_edit_6", 8u, "LIST", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {883611505u, "btn_INFO_BACK", "info_back", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {696053373u, "pnl_INFO_TITLE", "info_title", 9u, "INFO", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {736888230u, "btn_INFO_NEXT", "info_next", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {985738782u, "btn_INFO_FIELD1", "info_field1", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {880767611u, "btn_INFO_FIELD2", "info_field2", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {719722259u, "btn_INFO_FIELD3", "info_field3", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {738669206u, "btn_INFO_CANCEL", "info_cancel", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {961256464u, "btn_INFO_OK", "info_ok", 9u, "INFO", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {774028606u, "pnl_INPUT_TITLE_1", "input_title_1", 10u, "INPUT", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {1040403263u, "btn_INPUT_FIELD1", "input_field1", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {792310614u, "btn_INPUT_FIELD2", "input_field2", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {728260920u, "btn_INPUT_FIELD4", "input_field4", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {733032387u, "btn_INPUT_FIELD3", "input_field3", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {697176737u, "btn_INPUT_CANCEL", "input_cancel", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {970343905u, "btn_INPUT_OK", "input_ok", 10u, "INPUT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {618199323u, "pnl_INIT_TITLE", "init_title", 11u, "INIT", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {854676180u, "btn_INIT_HTTP", "init_http", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {985764943u, "btn_INIT_OK", "init_ok", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1037398668u, "drp_INIT_MACHINE", "init_machine", 11u, "INIT", TYPE_DROPDOWN, true, true, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0700u},
    {858911524u, "btn_INIT_GROUP", "init_group", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {757239833u, "btn_INIT_NAME", "init_name", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 8u, 0x034Eu},
    {1015158681u, "btn_INIT_ACCESS_POINT", "init_access_point", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1070125018u, "chk_INIT_R_ACCESS_POINT", "init_r_access_point", 11u, "INIT", TYPE_CHECKBOX, true, true, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0700u},
    {1068134903u, "btn_INIT_TEST", "init_test", 11u, "INIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {611967224u, "chk_INIT_R_TEST", "init_r_test", 11u, "INIT", TYPE_CHECKBOX, true, true, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0700u},
    {586431142u, "btn_WAIT_TEXT1", "wait_text1", 12u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {771098777u, "btn_WAIT_TEXT2", "wait_text2", 12u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {707471411u, "btn_WAIT_TEXT3", "wait_text3", 12u, "WAIT", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {705822426u, "btn_SERVICE_BACK", "service_back", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {783057328u, "pnl_SERVICE_TITLE", "service_title", 13u, "SERVICE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {1035025291u, "btn_NEXT_2", "next_2", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {876544731u, "btn_SERVICE_TABLE", "service_table", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {649580207u, "btn_SERVICE_PAPER", "service_paper", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1005812956u, "btn_SERVICE_GUILLOTINE", "service_guillotine", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {955000198u, "btn_SERVICE_SLICE", "service_slice", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {660622916u, "btn_SERVICE_CALIBRATION", "service_calibration", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {560154889u, "btn_SERVICE_PROBA", "service_proba", 13u, "SERVICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {575460751u, "btn_TABLE_BACK", "table_back", 14u, "TABLE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {656223463u, "pnl_TABLE_TITLE", "table_title", 14u, "TABLE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {995245381u, "btn_PAPER_BACK", "paper_back", 15u, "PAPER", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {622431910u, "pnl_PAPER_TITLE", "paper_title", 15u, "PAPER", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {855780570u, "btn_PAPER_ODO", "paper_odo", 15u, "PAPER", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {610125622u, "btn_SIG1_14", "b_sig1_14", 15u, "PAPER", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {698827185u, "btn_SIG1_15", "b_sig1_15", 15u, "PAPER", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {824872412u, "btn_SIG1_16", "b_sig1_16", 15u, "PAPER", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1052471115u, "btn_GUILLOTINE_BACK", "guillotine_back", 16u, "GUILLOTINE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {762921329u, "pnl_GUILLOTINE_TITLE", "guillotine_title", 16u, "GUILLOTINE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {851588408u, "btn_SIG1_12", "b_sig1_12", 16u, "GUILLOTINE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {564030713u, "btn_SIG1_13", "b_sig1_13", 16u, "GUILLOTINE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {638419350u, "btn_SERVICE2_BACK", "service2_back", 17u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {579003233u, "pnl_SERVICE2_TITLE", "service2_title", 17u, "SERVICE2", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {748959496u, "btn_SERVICE_TABLE_1", "service_table_1", 17u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {620561065u, "btn_SERVICE_PAPER_1", "service_paper_1", 17u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {937444719u, "btn_SERVICE_GUILLOTINE_1", "service_guillotine_1", 17u, "SERVICE2", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {568578977u, "btn_GUILLOTINE_BACK_1", "guillotine_back_1", 18u, "THROW", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {590072430u, "pnl_GUILLOTINE_TITLE_1", "guillotine_title_1", 18u, "THROW", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {812893767u, "btn_SIG1_18", "b_sig1_18", 18u, "THROW", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {911733855u, "btn_BIGEL_BACK", "bigel_back", 19u, "BIGEL", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {642375509u, "pnl_BIGEL_TITLE", "bigel_title", 19u, "BIGEL", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {591595424u, "btn_SIG1_17", "b_sig1_17", 19u, "BIGEL", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {696272857u, "btn_SIG1_19", "b_sig1_19", 19u, "BIGEL", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {716245721u, "btn_WIFI_BACK", "wifi_back", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {668155420u, "pnl_WIFI_TITLE", "wifi_title", 20u, "WIFI", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {791646524u, "btn_WIFI_DEL", "wifi_del", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {538225704u, "btn_WIFI_ADD", "wifi_add", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {994090590u, "btn_WIFI_SAVE", "wifi_save", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {648723211u, "btn_WIFI_SSID_LABEL", "wifi_ssid_label", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {584953653u, "drp_WIFI_SSID", "wifi_ssid", 20u, "WIFI", TYPE_DROPDOWN, true, true, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0700u},
    {722332636u, "btn_WIFI_RSSI_LABEL", "wifi_rssi_label", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1071059904u, "btn_WIFI_RSSI", "wifi_rssi", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {724720336u, "btn_WIFI_IP_LABEL", "wifi_ip_label", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {660767280u, "btn_WIFI_IP", "wifi_ip", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 8u, 0x034Eu},
    {832901510u, "btn_WIFI_AUTO_CONNECT", "wifi_auto_connect", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {626811663u, "chk_INIT_R_ACCESS_POINT_1", "init_r_access_point_1", 20u, "WIFI", TYPE_CHECKBOX, true, true, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0700u},
    {908040040u, "btn_WIFI_CONNECT", "wifi_connect", 20u, "WIFI", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {782111236u, "txa_KBD_TEXT", "kbd_text", 21u, "KEYBOARD", TYPE_TEXTAREA, true, false, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0302u},
    {635953031u, "kbd_KBD_KEY", "kbd_key", 21u, "KEYBOARD", TYPE_KEYBOARD, false, false, true, true, false, true, false, KEYBOARD_NONE, 0u, 0x0100u},
    {969794432u, "btn_STATS_BACK", "stats_back", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {709300346u, "pnl_STATS_TITLE", "stats_title", 22u, "STATS", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {627405552u, "btn_STATS_NEXT", "stats_next", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {754044789u, "btn_STATS_FIELD1", "stats_field1", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {740420605u, "btn_STATS_FIELD2", "stats_field2", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {750162213u, "btn_STATS_PARAM1", "stats_param1", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {638031913u, "btn_STATS_VALUE1", "stats_value1", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {594239852u, "btn_STATS_PARAM2", "stats_param2", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1031649566u, "btn_STATS_VALUE2", "stats_value2", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {665702266u, "btn_STATS_PARAM3", "stats_param3", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {657893324u, "btn_STATS_VALUE3", "stats_value3", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {763520543u, "btn_STATS_PARAM4", "stats_param4", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {646340503u, "btn_STATS_VALUE4", "stats_value4", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1060360541u, "btn_STATS_PARAM5", "stats_param5", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {537493084u, "btn_STATS_VALUE5", "stats_value5", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {784971034u, "btn_STATS_PARAM6", "stats_param6", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {746905700u, "btn_STATS_VALUE6", "stats_value6", 22u, "STATS", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {1031284776u, "btn_UPDATE_BACK", "update_back", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {558815091u, "pnl_UPDATE_TITLE", "update_title", 23u, "UPDATE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {728840126u, "btn_UPDATE_DEV_VER", "update_dev_ver", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {830491332u, "btn_UPDATE_DEV", "update_dev", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {1054975038u, "btn_UPDATE_SCR_VER", "update_scr_ver", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {1034606472u, "btn_UPDATE_SCR", "update_scr", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {999178306u, "btn_UPDATE_AUTO", "update_auto", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {1018598988u, "btn_UPDATE_VERSION", "update_version", 23u, "UPDATE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {573016188u, "btn_CALIBRATION_BACK", "calibration_back", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {757501326u, "pnl_CALIBRATION_TITLE", "calibration_title", 24u, "CALIBRATION", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {811931117u, "btn_CALIBRATION_SAVE", "calibration_save", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {653272888u, "btn_CALIBRATION_LIST_PROFILE", "calibration_list_profile", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {900891544u, "btn_TASK_NAME_1", "task_name_1", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {693302528u, "btn_TASK_NAME_2", "task_name_2", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {591273070u, "btn_TASK_NAME_3", "task_name_3", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {807348381u, "btn_TASK_PRODUCT_MM_1", "task_product_mm_1", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {894111397u, "btn_TASK_OVER_MM_1", "task_over_mm_1", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {953674986u, "btn_TASK_FIRST_CUT_MM_2", "task_first_cut_mm_2", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {815669725u, "btn_TASK_FIRST_CUT_MM_1", "task_first_cut_mm_1", 24u, "CALIBRATION", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {858309080u, "btn_SLICE_BACK", "slice_back", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {710915766u, "pnl_SLICE_TITLE", "slice_title", 25u, "SLICE", TYPE_PANEL, true, false, true, true, false, false, false, KEYBOARD_NONE, 0u, 0x1B0Eu},
    {1044706257u, "btn_SLICE_LIST_PROFILE", "slice_list_profile", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
    {622055333u, "btn_SLICE_COUNT_PAPER", "slice_count_paper", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {537872808u, "btn_SLICE_PLUS", "slice_plus", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {728935634u, "btn_SLICE_MINUS", "slice_minus", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_TEXT, 32u, 0x034Eu},
    {868066552u, "btn_TASK_FIRST_CUT_MM_3", "task_first_cut_mm_3", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, true, KEYBOARD_NUMBER, 8u, 0x034Eu},
    {662505078u, "btn_SLICE_GO", "slice_go", 25u, "SLICE", TYPE_BUTTON, true, false, true, true, true, false, false, KEYBOARD_NONE, 0u, 0x034Eu},
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

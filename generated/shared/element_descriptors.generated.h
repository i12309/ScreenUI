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
    {702393654u, "cnt_OBJ0", "obj0", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {831058084u, "cnt_OBJ1", "obj1", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {672468609u, "txt_OBJ2", "obj2", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {961230478u, "cnt_OBJ3", "obj3", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {569930443u, "cnt_OBJ4", "obj4", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {708221742u, "txt_OBJ5", "obj5", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {1015067754u, "cnt_OBJ6", "obj6", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {1048767685u, "cnt_OBJ7", "obj7", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {973007217u, "txt_OBJ8", "obj8", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {826558505u, "cnt_OBJ9", "obj9", 1u, "LOAD", TYPE_CONTAINER, true, false, true, true, false, false},
    {760694328u, "txt_MAC_ADDRESS", "mac_address", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {848373661u, "txt_VERSION", "version", 1u, "LOAD", TYPE_TEXT, true, false, true, true, false, false},
    {1033385314u, "cnt_MAIN_MENU", "c_main_menu", 2u, "MAIN_MENU", TYPE_CONTAINER, true, false, true, true, false, false},
    {1002020473u, "btn_MAIN_TASK", "b_main_task", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {803691612u, "btn_MAIN_PROFILE", "b_main_profile", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {707959544u, "btn_MAIN_NET", "b_main_net", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {1024626306u, "btn_MAIN_SERVICE", "b_main_service", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {1061781130u, "btn_MAIN_STATS", "b_main_stats", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {600635099u, "btn_MAIN_SUPPORT", "b_main_support", 2u, "MAIN_MENU", TYPE_BUTTON, true, false, true, true, true, false},
    {809266216u, "cnt_PAGE", "c_page", 3u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {984274153u, "cnt_BAR", "c_bar", 3u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {669373145u, "btn_BACK", "back", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {828797990u, "pnl_TITLE", "title", 3u, "DEF_PAGE1", TYPE_PANEL, true, false, true, true, false, false},
    {1052683807u, "txt_OBJ10", "obj10", 3u, "DEF_PAGE1", TYPE_TEXT, true, false, true, true, false, false},
    {1049216991u, "pnl_SIG_1", "sig_1", 3u, "DEF_PAGE1", TYPE_PANEL, true, false, true, true, false, false},
    {738287735u, "btn_SIG1_2", "b_sig1_2", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1027720798u, "btn_SIG1", "b_sig1", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {883773008u, "btn_SIG1_1", "b_sig1_1", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1035025291u, "btn_NEXT_2", "next_2", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1013391020u, "cnt_BUTTON", "c_button", 3u, "DEF_PAGE1", TYPE_CONTAINER, true, false, true, true, false, false},
    {774593373u, "btn_B1", "b1", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1067973892u, "btn_B2", "b2", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1055168153u, "btn_B3", "b3", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {763424694u, "btn_B4", "b4", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {778514036u, "btn_B5", "b5", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {1049958006u, "btn_B6", "b6", 3u, "DEF_PAGE1", TYPE_BUTTON, true, false, true, true, true, false},
    {689186219u, "cnt_PAGE_1", "c_page_1", 4u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {958843489u, "cnt_BAR_1", "c_bar_1", 4u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {1037205539u, "btn_BACK_1", "back_1", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {1032884038u, "pnl_TITLE_1", "title_1", 4u, "DEF_PAGE2", TYPE_PANEL, true, false, true, true, false, false},
    {552382372u, "txt_OBJ11", "obj11", 4u, "DEF_PAGE2", TYPE_TEXT, true, false, true, true, false, false},
    {963860651u, "btn_NEXT_3", "next_3", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {888856230u, "btn_NEXT_4", "next_4", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {1071541276u, "btn_NEXT_5", "next_5", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {1003462613u, "cnt_BUTTON_1", "c_button_1", 4u, "DEF_PAGE2", TYPE_CONTAINER, true, false, true, true, false, false},
    {928380825u, "btn_OBJ12", "obj12", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {855614194u, "btn_OBJ13", "obj13", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {889370051u, "btn_OBJ14", "obj14", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {805038689u, "btn_OBJ15", "obj15", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {633908857u, "btn_OBJ16", "obj16", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {751779747u, "btn_OBJ17", "obj17", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {809122073u, "btn_OBJ18", "obj18", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {997194724u, "btn_OBJ19", "obj19", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {827418395u, "btn_OBJ20", "obj20", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {757999713u, "btn_OBJ21", "obj21", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {720039174u, "btn_OBJ22", "obj22", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {925328050u, "btn_OBJ23", "obj23", 4u, "DEF_PAGE2", TYPE_BUTTON, true, false, true, true, true, false},
    {684417468u, "cnt_PAGE_2", "c_page_2", 5u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {546217965u, "cnt_BAR_3", "c_bar_3", 5u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {839392768u, "btn_BACK_3", "back_3", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {684863696u, "pnl_TITLE_3", "title_3", 5u, "DEF_PAGE3", TYPE_PANEL, true, false, true, true, false, false},
    {688134333u, "txt_OBJ24", "obj24", 5u, "DEF_PAGE3", TYPE_TEXT, true, false, true, true, false, false},
    {624416224u, "btn_NEXT_7", "next_7", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {921401456u, "btn_NEXT_8", "next_8", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {544800465u, "btn_NEXT_9", "next_9", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {537248280u, "cnt_BUTTON_2", "c_button_2", 5u, "DEF_PAGE3", TYPE_CONTAINER, true, false, true, true, false, false},
    {974709305u, "btn_OBJ25", "obj25", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {571348835u, "btn_OBJ26", "obj26", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {663846222u, "btn_OBJ27", "obj27", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {711912014u, "btn_OBJ28", "obj28", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {1023533249u, "btn_OBJ29", "obj29", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {884455281u, "btn_OBJ30", "obj30", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {695345223u, "btn_OBJ31", "obj31", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {912866085u, "btn_OBJ32", "obj32", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {1013369354u, "btn_OBJ33", "obj33", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {1039332213u, "btn_OBJ34", "obj34", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {926206120u, "btn_OBJ35", "obj35", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {643798759u, "btn_OBJ36", "obj36", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {1066962440u, "btn_OBJ37", "obj37", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {833779242u, "btn_OBJ38", "obj38", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {852970469u, "btn_OBJ39", "obj39", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {1065795151u, "btn_OBJ40", "obj40", 5u, "DEF_PAGE3", TYPE_BUTTON, true, false, true, true, true, false},
    {916570524u, "cnt_PAGE_3", "c_page_3", 6u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
    {800731870u, "cnt_BAR_4", "c_bar_4", 6u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
    {931023985u, "btn_BACK_4", "back_4", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {585286522u, "pnl_TITLE_4", "title_4", 6u, "DEF_PAGE4", TYPE_PANEL, true, false, true, true, false, false},
    {948043762u, "txt_OBJ41", "obj41", 6u, "DEF_PAGE4", TYPE_TEXT, true, false, true, true, false, false},
    {920710893u, "btn_NEXT_10", "next_10", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {1033400519u, "btn_NEXT_11", "next_11", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {600400769u, "btn_NEXT_12", "next_12", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {937141394u, "cnt_BUTTON_3", "c_button_3", 6u, "DEF_PAGE4", TYPE_CONTAINER, true, false, true, true, false, false},
    {858556140u, "btn_OBJ42", "obj42", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {826682513u, "btn_OBJ43", "obj43", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {956681407u, "btn_OBJ44", "obj44", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {980757621u, "btn_OBJ45", "obj45", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {832380889u, "btn_OBJ46", "obj46", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {892387305u, "btn_OBJ47", "obj47", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {925217866u, "btn_OBJ48", "obj48", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {947227178u, "btn_OBJ49", "obj49", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {842828958u, "btn_OBJ50", "obj50", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {1015280446u, "btn_OBJ51", "obj51", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {846541941u, "btn_OBJ52", "obj52", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {985756782u, "btn_OBJ53", "obj53", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
    {965814789u, "btn_OBJ54", "obj54", 6u, "DEF_PAGE4", TYPE_BUTTON, true, false, true, true, true, false},
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

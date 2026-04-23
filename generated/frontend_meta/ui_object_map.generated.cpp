// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#include "ui_object_map.generated.h"

#include "ui/screens.h"

namespace demo {
namespace {

bool bind_page(screenlib::adapter::UiObjectMap& objectMap, uint32_t pageId, lv_obj_t* pageObj) {
    return pageObj != nullptr && objectMap.bindPage(pageId, pageObj);
}

bool bind_element(screenlib::adapter::UiObjectMap& objectMap,
                  uint32_t elementId,
                  uint32_t pageId,
                  lv_obj_t* obj,
                  Screen32BoundElement* outElements,
                  size_t outCapacity,
                  size_t& outCount) {
    if (obj == nullptr) {
        return false;
    }
    if (!objectMap.bindElement(elementId, obj)) {
        return false;
    }

    if (outElements != nullptr && outCount < outCapacity) {
        outElements[outCount].elementId = elementId;
        outElements[outCount].pageId = pageId;
        outElements[outCount].obj = obj;
        outElements[outCount].descriptor = screen32_find_element_descriptor(elementId);
        outCount++;
    }

    return true;
}

}  // namespace

bool screen32_bind_generated_ui_map(screenlib::adapter::UiObjectMap& objectMap,
                                  Screen32BoundElement* outElements,
                                  size_t outCapacity,
                                  size_t* outCount) {
    objectMap.clear();
    size_t boundCount = 0;
    bool allOk = true;

    // Карта страниц
    allOk = bind_page(objectMap, 1u, objects.load0) && allOk;
    allOk = bind_page(objectMap, 2u, objects.load) && allOk;
    allOk = bind_page(objectMap, 3u, objects.main) && allOk;
    allOk = bind_page(objectMap, 4u, objects.task_run) && allOk;
    allOk = bind_page(objectMap, 5u, objects.task_process) && allOk;
    allOk = bind_page(objectMap, 6u, objects.info) && allOk;
    allOk = bind_page(objectMap, 7u, objects.input) && allOk;
    allOk = bind_page(objectMap, 8u, objects.init) && allOk;
    allOk = bind_page(objectMap, 9u, objects.wait) && allOk;
    allOk = bind_page(objectMap, 10u, objects.service) && allOk;
    allOk = bind_page(objectMap, 11u, objects.service2) && allOk;
    allOk = bind_page(objectMap, 12u, objects.keyboard) && allOk;
    allOk = bind_page(objectMap, 13u, objects.def_page) && allOk;
    allOk = bind_page(objectMap, 14u, objects.def_page2) && allOk;
    allOk = bind_page(objectMap, 15u, objects.def_page3) && allOk;
    allOk = bind_page(objectMap, 16u, objects.def_page4) && allOk;

    // Карта элементов

    allOk = bind_element(objectMap, 948557784u, 1u, objects.load_model_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 593491382u, 2u, objects.load_model, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 747485262u, 2u, objects.load_ma_caddress, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 914719783u, 2u, objects.load_version, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1033385314u, 3u, objects.c_main_menu, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 893821717u, 3u, objects.main_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1056103359u, 3u, objects.main_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572303784u, 3u, objects.main_net, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 614692528u, 3u, objects.main_service, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572658358u, 3u, objects.main_stats, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 729598653u, 3u, objects.main_support, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 982710104u, 4u, objects.c_page_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 980116818u, 4u, objects.c_bar_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 781794537u, 4u, objects.task_run_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1024078885u, 4u, objects.task_run_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 575182334u, 4u, objects.c_button_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 735236735u, 4u, objects.task_run_list_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 653851418u, 4u, objects.task_run_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 659010631u, 4u, objects.task_run_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 958874997u, 4u, objects.task_run_cycles, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 905586485u, 4u, objects.task_run_plus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 836470064u, 4u, objects.task_run_minus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 797587880u, 4u, objects.task_run_start, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 689186219u, 5u, objects.c_page_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 958843489u, 5u, objects.c_bar_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1032884038u, 5u, objects.title_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1003462613u, 5u, objects.c_button_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 593768207u, 6u, objects.c_page_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 549692719u, 6u, objects.c_bar_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 883611505u, 6u, objects.info_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 696053373u, 6u, objects.info_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 736888230u, 6u, objects.info_next, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 717848663u, 6u, objects.c_button_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985738782u, 6u, objects.info_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 880767611u, 6u, objects.info_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 719722259u, 6u, objects.info_field3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 738669206u, 6u, objects.info_cancel, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 961256464u, 6u, objects.info_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 692903464u, 7u, objects.c_page_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 830426633u, 7u, objects.c_bar_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 774028606u, 7u, objects.input_title_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 868067187u, 7u, objects.c_button_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1040403263u, 7u, objects.input_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 792310614u, 7u, objects.input_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 728260920u, 7u, objects.input_field4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 733032387u, 7u, objects.input_field3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 697176737u, 7u, objects.input_cancel, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 970343905u, 7u, objects.input_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 811475656u, 8u, objects.c_page_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 904255359u, 8u, objects.c_bar_9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 618199323u, 8u, objects.init_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 854676180u, 8u, objects.init_http, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985764943u, 8u, objects.init_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 868351749u, 8u, objects.c_button_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1037398668u, 8u, objects.init_machine, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 858911524u, 8u, objects.init_group, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 757239833u, 8u, objects.init_name, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015158681u, 8u, objects.init_access_point, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1070125018u, 8u, objects.init_r_access_point, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1068134903u, 8u, objects.init_test, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 611967224u, 8u, objects.init_r_test, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 586431142u, 9u, objects.wait_text1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 771098777u, 9u, objects.wait_text2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 707471411u, 9u, objects.wait_text3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 809266216u, 10u, objects.c_page, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 984274153u, 10u, objects.c_bar, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 705822426u, 10u, objects.service_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 783057328u, 10u, objects.service_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1035025291u, 10u, objects.next_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1013391020u, 10u, objects.c_button, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 876544731u, 10u, objects.service_table, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 649580207u, 10u, objects.service_paper, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1005812956u, 10u, objects.service_guillotine, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 955000198u, 10u, objects.service_slice, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 660622916u, 10u, objects.service_calibration, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 560154889u, 10u, objects.service_proba, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 654593177u, 11u, objects.c_page_10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 564830685u, 11u, objects.c_bar_11, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 638419350u, 11u, objects.service2_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 579003233u, 11u, objects.service2_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 633576603u, 11u, objects.c_button_10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 748959496u, 11u, objects.service_table_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 620561065u, 11u, objects.service_paper_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 937444719u, 11u, objects.service_guillotine_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 782111236u, 12u, objects.kbd_text, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 635953031u, 12u, objects.kbd_key, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 598393631u, 13u, objects.c_page_9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 749654442u, 13u, objects.c_bar_10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 705408621u, 13u, objects.title_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1032392636u, 13u, objects.sig_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 588353075u, 13u, objects.b_sig1_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 956711336u, 13u, objects.b_sig1_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 563615222u, 13u, objects.b_sig1_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 963860651u, 13u, objects.next_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 876012449u, 13u, objects.c_button_9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 740047140u, 13u, objects.b1_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1013691630u, 13u, objects.b2_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1053036969u, 13u, objects.b3_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 675347161u, 13u, objects.b4_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 754207632u, 13u, objects.b5_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 872159707u, 13u, objects.b6_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 948484049u, 14u, objects.c_page_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 944737715u, 14u, objects.c_bar_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1008508692u, 14u, objects.back_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1068966703u, 14u, objects.title_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015375349u, 14u, objects.next_13, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 834401655u, 14u, objects.next_14, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1034510309u, 14u, objects.next_15, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 916975904u, 14u, objects.c_button_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 684417468u, 15u, objects.c_page_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 546217965u, 15u, objects.c_bar_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 839392768u, 15u, objects.back_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 684863696u, 15u, objects.title_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 624416224u, 15u, objects.next_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 921401456u, 15u, objects.next_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 544800465u, 15u, objects.next_9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 537248280u, 15u, objects.c_button_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 916570524u, 16u, objects.c_page_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 800731870u, 16u, objects.c_bar_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 931023985u, 16u, objects.back_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 585286522u, 16u, objects.title_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 920710893u, 16u, objects.next_10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1033400519u, 16u, objects.next_11, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 600400769u, 16u, objects.next_12, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 937141394u, 16u, objects.c_button_3, outElements, outCapacity, boundCount) && allOk;

    if (outCount != nullptr) {
        *outCount = boundCount;
    }

    return allOk;
}

const Screen32BoundElement* screen32_find_bound_element(const Screen32BoundElement* elements,
                                                     size_t count,
                                                     uint32_t elementId) {
    if (elements == nullptr) {
        return nullptr;
    }
    for (size_t i = 0; i < count; ++i) {
        if (elements[i].elementId == elementId) {
            return &elements[i];
        }
    }
    return nullptr;
}

}  // namespace demo

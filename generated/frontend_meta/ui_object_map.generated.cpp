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
    allOk = bind_page(objectMap, 6u, objects.task) && allOk;
    allOk = bind_page(objectMap, 7u, objects.profile) && allOk;
    allOk = bind_page(objectMap, 8u, objects.list) && allOk;
    allOk = bind_page(objectMap, 9u, objects.info) && allOk;
    allOk = bind_page(objectMap, 10u, objects.input) && allOk;
    allOk = bind_page(objectMap, 11u, objects.init) && allOk;
    allOk = bind_page(objectMap, 12u, objects.wait) && allOk;
    allOk = bind_page(objectMap, 13u, objects.service) && allOk;
    allOk = bind_page(objectMap, 14u, objects.table) && allOk;
    allOk = bind_page(objectMap, 15u, objects.paper) && allOk;
    allOk = bind_page(objectMap, 16u, objects.guillotine) && allOk;
    allOk = bind_page(objectMap, 17u, objects.service2) && allOk;
    allOk = bind_page(objectMap, 18u, objects.throws) && allOk;
    allOk = bind_page(objectMap, 19u, objects.bigel) && allOk;
    allOk = bind_page(objectMap, 20u, objects.wifi) && allOk;
    allOk = bind_page(objectMap, 21u, objects.keyboard) && allOk;
    allOk = bind_page(objectMap, 22u, objects.stats) && allOk;
    allOk = bind_page(objectMap, 23u, objects.update) && allOk;
    allOk = bind_page(objectMap, 24u, objects.calibration) && allOk;
    allOk = bind_page(objectMap, 25u, objects.slice) && allOk;
    allOk = bind_page(objectMap, 26u, objects.page) && allOk;

    // Карта элементов

    allOk = bind_element(objectMap, 948557784u, 1u, objects.load_model_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 593491382u, 2u, objects.load_model, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 747485262u, 2u, objects.load_ma_caddress, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 914719783u, 2u, objects.load_version, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 893821717u, 3u, objects.main_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1056103359u, 3u, objects.main_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572303784u, 3u, objects.main_net, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 614692528u, 3u, objects.main_service, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572658358u, 3u, objects.main_stats, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 729598653u, 3u, objects.main_support, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 781794537u, 4u, objects.task_run_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1024078885u, 4u, objects.task_run_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 735236735u, 4u, objects.task_run_list_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 653851418u, 4u, objects.task_run_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 659010631u, 4u, objects.task_run_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 958874997u, 4u, objects.task_run_cycles, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 905586485u, 4u, objects.task_run_plus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 836470064u, 4u, objects.task_run_minus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 797587880u, 4u, objects.task_run_start, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1032884038u, 5u, objects.title_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 831224623u, 6u, objects.task_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 997321370u, 6u, objects.task_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 886759107u, 6u, objects.task_del, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1068775146u, 6u, objects.task_save, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 648012821u, 6u, objects.task_name, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 974082187u, 6u, objects.task_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 820783404u, 6u, objects.task_product_mm, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 895058826u, 6u, objects.task_over_mm, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 799239240u, 6u, objects.task_first_cut_mm, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 789530071u, 6u, objects.task_last_cut_mm, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 907361824u, 7u, objects.profile_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 574905067u, 7u, objects.profile_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 949982196u, 7u, objects.profile_del, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 895657393u, 7u, objects.profile_save, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 896315074u, 7u, objects.profile_name, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 885413811u, 7u, objects.profile_name_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 558000753u, 8u, objects.list_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 642528287u, 8u, objects.list_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 967845473u, 8u, objects.list_del, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1072486628u, 8u, objects.list_add, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 672683260u, 8u, objects.list_next, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 897373125u, 8u, objects.list_check_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 542721080u, 8u, objects.list_item_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 976808764u, 8u, objects.list_edit_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 748356360u, 8u, objects.list_check_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1014243456u, 8u, objects.list_item_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 748393501u, 8u, objects.list_edit_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 543584105u, 8u, objects.list_check_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 731072899u, 8u, objects.list_item_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 710548845u, 8u, objects.list_edit_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1043817961u, 8u, objects.list_check_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 625116578u, 8u, objects.list_item_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1026994717u, 8u, objects.list_edit_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 861866436u, 8u, objects.list_check_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 944599746u, 8u, objects.list_item_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 782715618u, 8u, objects.list_edit_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 571388992u, 8u, objects.list_check_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1046977323u, 8u, objects.list_item_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 913687764u, 8u, objects.list_edit_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 883611505u, 9u, objects.info_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 696053373u, 9u, objects.info_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 736888230u, 9u, objects.info_next, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985738782u, 9u, objects.info_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 880767611u, 9u, objects.info_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 719722259u, 9u, objects.info_field3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 738669206u, 9u, objects.info_cancel, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 961256464u, 9u, objects.info_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 774028606u, 10u, objects.input_title_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1040403263u, 10u, objects.input_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 792310614u, 10u, objects.input_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 728260920u, 10u, objects.input_field4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 733032387u, 10u, objects.input_field3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 697176737u, 10u, objects.input_cancel, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 970343905u, 10u, objects.input_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 618199323u, 11u, objects.init_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 854676180u, 11u, objects.init_http, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985764943u, 11u, objects.init_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1037398668u, 11u, objects.init_machine, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 858911524u, 11u, objects.init_group, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 757239833u, 11u, objects.init_name, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015158681u, 11u, objects.init_access_point, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1070125018u, 11u, objects.init_r_access_point, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1068134903u, 11u, objects.init_test, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 611967224u, 11u, objects.init_r_test, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 586431142u, 12u, objects.wait_text1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 771098777u, 12u, objects.wait_text2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 707471411u, 12u, objects.wait_text3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 705822426u, 13u, objects.service_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 783057328u, 13u, objects.service_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1035025291u, 13u, objects.next_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 876544731u, 13u, objects.service_table, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 649580207u, 13u, objects.service_paper, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1005812956u, 13u, objects.service_guillotine, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 955000198u, 13u, objects.service_slice, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 660622916u, 13u, objects.service_calibration, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 560154889u, 13u, objects.service_proba, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 575460751u, 14u, objects.table_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 656223463u, 14u, objects.table_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 995245381u, 15u, objects.paper_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 622431910u, 15u, objects.paper_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 855780570u, 15u, objects.paper_odo, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 610125622u, 15u, objects.b_sig1_14, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 698827185u, 15u, objects.b_sig1_15, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 824872412u, 15u, objects.b_sig1_16, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1052471115u, 16u, objects.guillotine_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 762921329u, 16u, objects.guillotine_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 851588408u, 16u, objects.b_sig1_12, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 564030713u, 16u, objects.b_sig1_13, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 638419350u, 17u, objects.service2_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 579003233u, 17u, objects.service2_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 748959496u, 17u, objects.service_table_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 620561065u, 17u, objects.service_paper_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 937444719u, 17u, objects.service_guillotine_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 573436505u, 18u, objects.throws_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 731366683u, 18u, objects.throws_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 756702345u, 18u, objects.throws_sig, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 911733855u, 19u, objects.bigel_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 642375509u, 19u, objects.bigel_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 591595424u, 19u, objects.b_sig1_17, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 696272857u, 19u, objects.b_sig1_19, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 716245721u, 20u, objects.wifi_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 668155420u, 20u, objects.wifi_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 791646524u, 20u, objects.wifi_del, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 538225704u, 20u, objects.wifi_add, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 994090590u, 20u, objects.wifi_save, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 648723211u, 20u, objects.wifi_ssid_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 584953653u, 20u, objects.wifi_ssid, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 722332636u, 20u, objects.wifi_rssi_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1071059904u, 20u, objects.wifi_rssi, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 724720336u, 20u, objects.wifi_ip_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 660767280u, 20u, objects.wifi_ip, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 832901510u, 20u, objects.wifi_auto_connect, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 626811663u, 20u, objects.init_r_access_point_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 908040040u, 20u, objects.wifi_connect, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 782111236u, 21u, objects.kbd_text, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 635953031u, 21u, objects.kbd_key, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 969794432u, 22u, objects.stats_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 709300346u, 22u, objects.stats_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 627405552u, 22u, objects.stats_next, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 754044789u, 22u, objects.stats_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 740420605u, 22u, objects.stats_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 750162213u, 22u, objects.stats_param1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 638031913u, 22u, objects.stats_value1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 594239852u, 22u, objects.stats_param2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1031649566u, 22u, objects.stats_value2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 665702266u, 22u, objects.stats_param3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 657893324u, 22u, objects.stats_value3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 763520543u, 22u, objects.stats_param4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 646340503u, 22u, objects.stats_value4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1060360541u, 22u, objects.stats_param5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 537493084u, 22u, objects.stats_value5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 784971034u, 22u, objects.stats_param6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 746905700u, 22u, objects.stats_value6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1031284776u, 23u, objects.update_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 558815091u, 23u, objects.update_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 728840126u, 23u, objects.update_dev_ver, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 830491332u, 23u, objects.update_dev, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1054975038u, 23u, objects.update_scr_ver, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1034606472u, 23u, objects.update_scr, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 999178306u, 23u, objects.update_auto, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1018598988u, 23u, objects.update_version, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 573016188u, 24u, objects.calibration_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 757501326u, 24u, objects.calibration_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 811931117u, 24u, objects.calibration_save, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 653272888u, 24u, objects.calibration_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 900891544u, 24u, objects.task_name_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 693302528u, 24u, objects.task_name_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 591273070u, 24u, objects.task_name_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 807348381u, 24u, objects.task_product_mm_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 894111397u, 24u, objects.task_over_mm_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 953674986u, 24u, objects.task_first_cut_mm_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 815669725u, 24u, objects.task_first_cut_mm_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 858309080u, 25u, objects.slice_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 710915766u, 25u, objects.slice_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1044706257u, 25u, objects.slice_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 622055333u, 25u, objects.slice_count_paper, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 537872808u, 25u, objects.slice_plus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 728935634u, 25u, objects.slice_minus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 868066552u, 25u, objects.task_first_cut_mm_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 662505078u, 25u, objects.slice_go, outElements, outCapacity, boundCount) && allOk;

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

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
    allOk = bind_page(objectMap, 1u, objects.load) && allOk;
    allOk = bind_page(objectMap, 2u, objects.main) && allOk;
    allOk = bind_page(objectMap, 3u, objects.task_run) && allOk;
    allOk = bind_page(objectMap, 4u, objects.task_process) && allOk;
    allOk = bind_page(objectMap, 5u, objects.info) && allOk;
    allOk = bind_page(objectMap, 6u, objects.def_page1) && allOk;
    allOk = bind_page(objectMap, 7u, objects.def_page2) && allOk;
    allOk = bind_page(objectMap, 8u, objects.def_page3) && allOk;
    allOk = bind_page(objectMap, 9u, objects.def_page4) && allOk;

    // Карта элементов

    allOk = bind_element(objectMap, 702393654u, 1u, objects.obj0, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 831058084u, 1u, objects.obj1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 672468609u, 1u, objects.obj2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 961230478u, 1u, objects.obj3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 569930443u, 1u, objects.obj4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 708221742u, 1u, objects.obj5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015067754u, 1u, objects.obj6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1048767685u, 1u, objects.obj7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 973007217u, 1u, objects.obj8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 593491382u, 1u, objects.load_model, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 747485262u, 1u, objects.load_ma_caddress, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 914719783u, 1u, objects.load_version, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1033385314u, 2u, objects.c_main_menu, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 893821717u, 2u, objects.main_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1056103359u, 2u, objects.main_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572303784u, 2u, objects.main_net, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 614692528u, 2u, objects.main_service, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 572658358u, 2u, objects.main_stats, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 729598653u, 2u, objects.main_support, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 982710104u, 3u, objects.c_page_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 980116818u, 3u, objects.c_bar_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 781794537u, 3u, objects.task_run_back, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1024078885u, 3u, objects.task_run_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 826558505u, 3u, objects.obj9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 575182334u, 3u, objects.c_button_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 735236735u, 3u, objects.task_run_list_task, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 653851418u, 3u, objects.task_run_list_profile, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 659010631u, 3u, objects.task_run_label, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 958874997u, 3u, objects.task_run_cycles, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 905586485u, 3u, objects.task_run_plus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 836470064u, 3u, objects.task_run_minus, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 797587880u, 3u, objects.task_run_start, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 689186219u, 4u, objects.c_page_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 958843489u, 4u, objects.c_bar_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1032884038u, 4u, objects.title_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1052683807u, 4u, objects.obj10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1003462613u, 4u, objects.c_button_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 552382372u, 4u, objects.obj11, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 928380825u, 4u, objects.obj12, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 855614194u, 4u, objects.obj13, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 889370051u, 4u, objects.obj14, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 805038689u, 4u, objects.obj15, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 633908857u, 4u, objects.obj16, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 751779747u, 4u, objects.obj17, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 809122073u, 4u, objects.obj18, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 997194724u, 4u, objects.obj19, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 593768207u, 5u, objects.c_page_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 549692719u, 5u, objects.c_bar_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 696053373u, 5u, objects.info_title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 827418395u, 5u, objects.obj20, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 717848663u, 5u, objects.c_button_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985738782u, 5u, objects.info_field1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 880767611u, 5u, objects.info_field2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 719722259u, 5u, objects.info_field3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 738669206u, 5u, objects.info_cancel, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 961256464u, 5u, objects.info_ok, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 809266216u, 6u, objects.c_page, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 984274153u, 6u, objects.c_bar, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 757999713u, 6u, objects.obj21, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 828797990u, 6u, objects.title, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 720039174u, 6u, objects.obj22, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1049216991u, 6u, objects.sig_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 738287735u, 6u, objects.b_sig1_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1027720798u, 6u, objects.b_sig1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 883773008u, 6u, objects.b_sig1_1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1035025291u, 6u, objects.next_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1013391020u, 6u, objects.c_button, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 774593373u, 6u, objects.b1, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1067973892u, 6u, objects.b2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1055168153u, 6u, objects.b3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 763424694u, 6u, objects.b4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 778514036u, 6u, objects.b5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1049958006u, 6u, objects.b6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 948484049u, 7u, objects.c_page_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 944737715u, 7u, objects.c_bar_6, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1008508692u, 7u, objects.back_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1068966703u, 7u, objects.title_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 925328050u, 7u, objects.obj23, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015375349u, 7u, objects.next_13, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 834401655u, 7u, objects.next_14, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1034510309u, 7u, objects.next_15, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 916975904u, 7u, objects.c_button_5, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 688134333u, 7u, objects.obj24, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 974709305u, 7u, objects.obj25, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 571348835u, 7u, objects.obj26, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 663846222u, 7u, objects.obj27, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 711912014u, 7u, objects.obj28, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1023533249u, 7u, objects.obj29, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 884455281u, 7u, objects.obj30, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 695345223u, 7u, objects.obj31, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 912866085u, 7u, objects.obj32, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1013369354u, 7u, objects.obj33, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1039332213u, 7u, objects.obj34, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 926206120u, 7u, objects.obj35, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 684417468u, 8u, objects.c_page_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 546217965u, 8u, objects.c_bar_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 839392768u, 8u, objects.back_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 684863696u, 8u, objects.title_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 643798759u, 8u, objects.obj36, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 624416224u, 8u, objects.next_7, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 921401456u, 8u, objects.next_8, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 544800465u, 8u, objects.next_9, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 537248280u, 8u, objects.c_button_2, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1066962440u, 8u, objects.obj37, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 833779242u, 8u, objects.obj38, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 852970469u, 8u, objects.obj39, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1065795151u, 8u, objects.obj40, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 948043762u, 8u, objects.obj41, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 858556140u, 8u, objects.obj42, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 826682513u, 8u, objects.obj43, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 956681407u, 8u, objects.obj44, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 980757621u, 8u, objects.obj45, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 832380889u, 8u, objects.obj46, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 892387305u, 8u, objects.obj47, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 925217866u, 8u, objects.obj48, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 947227178u, 8u, objects.obj49, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 842828958u, 8u, objects.obj50, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1015280446u, 8u, objects.obj51, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 846541941u, 8u, objects.obj52, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 916570524u, 9u, objects.c_page_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 800731870u, 9u, objects.c_bar_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 931023985u, 9u, objects.back_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 585286522u, 9u, objects.title_4, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 985756782u, 9u, objects.obj53, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 920710893u, 9u, objects.next_10, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1033400519u, 9u, objects.next_11, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 600400769u, 9u, objects.next_12, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 937141394u, 9u, objects.c_button_3, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 965814789u, 9u, objects.obj54, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1004084158u, 9u, objects.obj55, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 744666013u, 9u, objects.obj56, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1001595729u, 9u, objects.obj57, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 731306950u, 9u, objects.obj58, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 886534061u, 9u, objects.obj59, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 853959681u, 9u, objects.obj60, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1006854250u, 9u, objects.obj61, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 1016750466u, 9u, objects.obj62, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 889260850u, 9u, objects.obj63, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 859594440u, 9u, objects.obj64, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 704331781u, 9u, objects.obj65, outElements, outCapacity, boundCount) && allOk;
    allOk = bind_element(objectMap, 603731241u, 9u, objects.obj66, outElements, outCapacity, boundCount) && allOk;

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

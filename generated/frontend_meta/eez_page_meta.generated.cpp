// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#include "ui_object_map.generated.h"

#include "ui/screens.h"
#include "ui/ui.h"

namespace demo {

uint32_t screen32_current_page_id() {
    lv_obj_t* active = lv_scr_act();
    if (active == objects.load0) return 1u;
    if (active == objects.load) return 2u;
    if (active == objects.main) return 3u;
    if (active == objects.task_run) return 4u;
    if (active == objects.task_process) return 5u;
    if (active == objects.task) return 6u;
    if (active == objects.profile) return 7u;
    if (active == objects.list) return 8u;
    if (active == objects.info) return 9u;
    if (active == objects.input) return 10u;
    if (active == objects.init) return 11u;
    if (active == objects.wait) return 12u;
    if (active == objects.service) return 13u;
    if (active == objects.table) return 14u;
    if (active == objects.paper) return 15u;
    if (active == objects.guillotine) return 16u;
    if (active == objects.service2) return 17u;
    if (active == objects.throws) return 18u;
    if (active == objects.bigel) return 19u;
    if (active == objects.wifi) return 20u;
    if (active == objects.keyboard) return 21u;
    if (active == objects.stats) return 22u;
    if (active == objects.update) return 23u;
    if (active == objects.calibration) return 24u;
    if (active == objects.slice) return 25u;
    if (active == objects.page) return 26u;
    return 1u;
}

bool screen32_load_page_by_target(void* pageTarget) {
    lv_obj_t* target = static_cast<lv_obj_t*>(pageTarget);
    if (target == nullptr) {
        return false;
    }
    if (target == objects.load0) { loadScreen(SCREEN_ID_LOAD0); return true; }
    if (target == objects.load) { loadScreen(SCREEN_ID_LOAD); return true; }
    if (target == objects.main) { loadScreen(SCREEN_ID_MAIN); return true; }
    if (target == objects.task_run) { loadScreen(SCREEN_ID_TASK_RUN); return true; }
    if (target == objects.task_process) { loadScreen(SCREEN_ID_TASK_PROCESS); return true; }
    if (target == objects.task) { loadScreen(SCREEN_ID_TASK); return true; }
    if (target == objects.profile) { loadScreen(SCREEN_ID_PROFILE); return true; }
    if (target == objects.list) { loadScreen(SCREEN_ID_LIST); return true; }
    if (target == objects.info) { loadScreen(SCREEN_ID_INFO); return true; }
    if (target == objects.input) { loadScreen(SCREEN_ID_INPUT); return true; }
    if (target == objects.init) { loadScreen(SCREEN_ID_INIT); return true; }
    if (target == objects.wait) { loadScreen(SCREEN_ID_WAIT); return true; }
    if (target == objects.service) { loadScreen(SCREEN_ID_SERVICE); return true; }
    if (target == objects.table) { loadScreen(SCREEN_ID_TABLE); return true; }
    if (target == objects.paper) { loadScreen(SCREEN_ID_PAPER); return true; }
    if (target == objects.guillotine) { loadScreen(SCREEN_ID_GUILLOTINE); return true; }
    if (target == objects.service2) { loadScreen(SCREEN_ID_SERVICE2); return true; }
    if (target == objects.throws) { loadScreen(SCREEN_ID_THROWS); return true; }
    if (target == objects.bigel) { loadScreen(SCREEN_ID_BIGEL); return true; }
    if (target == objects.wifi) { loadScreen(SCREEN_ID_WIFI); return true; }
    if (target == objects.keyboard) { loadScreen(SCREEN_ID_KEYBOARD); return true; }
    if (target == objects.stats) { loadScreen(SCREEN_ID_STATS); return true; }
    if (target == objects.update) { loadScreen(SCREEN_ID_UPDATE); return true; }
    if (target == objects.calibration) { loadScreen(SCREEN_ID_CALIBRATION); return true; }
    if (target == objects.slice) { loadScreen(SCREEN_ID_SLICE); return true; }
    if (target == objects.page) { loadScreen(SCREEN_ID_PAGE); return true; }
    return false;
}

}  // namespace demo

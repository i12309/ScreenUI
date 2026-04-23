// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "runtime/PageRuntime.h"
#include "element_types.generated.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

template <typename TPage>
class MainPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_MAIN;
    MainPage()
      : cnt_MAIN_MENU(this, ::cnt_MAIN_MENU)
      , btn_MAIN_TASK(this, ::btn_MAIN_TASK)
      , btn_MAIN_PROFILE(this, ::btn_MAIN_PROFILE)
      , btn_MAIN_NET(this, ::btn_MAIN_NET)
      , btn_MAIN_SERVICE(this, ::btn_MAIN_SERVICE)
      , btn_MAIN_STATS(this, ::btn_MAIN_STATS)
      , btn_MAIN_SUPPORT(this, ::btn_MAIN_SUPPORT)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_MAIN_MENU;
    screenui::generated::TypeButton btn_MAIN_TASK;
    screenui::generated::TypeButton btn_MAIN_PROFILE;
    screenui::generated::TypeButton btn_MAIN_NET;
    screenui::generated::TypeButton btn_MAIN_SERVICE;
    screenui::generated::TypeButton btn_MAIN_STATS;
    screenui::generated::TypeButton btn_MAIN_SUPPORT;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_MAIN_TASK: btn_MAIN_TASK.onClick.emit(); break;
            case ::btn_MAIN_PROFILE: btn_MAIN_PROFILE.onClick.emit(); break;
            case ::btn_MAIN_NET: btn_MAIN_NET.onClick.emit(); break;
            case ::btn_MAIN_SERVICE: btn_MAIN_SERVICE.onClick.emit(); break;
            case ::btn_MAIN_STATS: btn_MAIN_STATS.onClick.emit(); break;
            case ::btn_MAIN_SUPPORT: btn_MAIN_SUPPORT.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

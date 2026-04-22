// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "Screen/Screen.h"
#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

template <typename TPage>
class MainBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_MAIN;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonMainTask(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainTask(); (void)action; }
    virtual void onClickMainTask() {}
    virtual void onButtonMainProfile(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainProfile(); (void)action; }
    virtual void onClickMainProfile() {}
    virtual void onButtonMainNet(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainNet(); (void)action; }
    virtual void onClickMainNet() {}
    virtual void onButtonMainService(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainService(); (void)action; }
    virtual void onClickMainService() {}
    virtual void onButtonMainStats(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainStats(); (void)action; }
    virtual void onClickMainStats() {}
    virtual void onButtonMainSupport(ButtonAction action) { if (action == ButtonAction_CLICK) onClickMainSupport(); (void)action; }
    virtual void onClickMainSupport() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_MAIN_TASK: onButtonMainTask(action); break;
            case btn_MAIN_PROFILE: onButtonMainProfile(action); break;
            case btn_MAIN_NET: onButtonMainNet(action); break;
            case btn_MAIN_SERVICE: onButtonMainService(action); break;
            case btn_MAIN_STATS: onButtonMainStats(action); break;
            case btn_MAIN_SUPPORT: onButtonMainSupport(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

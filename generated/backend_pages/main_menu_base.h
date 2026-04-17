// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class MainMenuBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_MAIN_MENU;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickBMainTask() {}
    virtual void onClickBMainProfile() {}
    virtual void onClickBMainNet() {}
    virtual void onClickBMainService() {}
    virtual void onClickBMainStats() {}
    virtual void onClickBMainSupport() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_MAIN_TASK: onClickBMainTask(); break;
            case btn_MAIN_PROFILE: onClickBMainProfile(); break;
            case btn_MAIN_NET: onClickBMainNet(); break;
            case btn_MAIN_SERVICE: onClickBMainService(); break;
            case btn_MAIN_STATS: onClickBMainStats(); break;
            case btn_MAIN_SUPPORT: onClickBMainSupport(); break;
            default: break;
        }
    }

};

}  // namespace screenui

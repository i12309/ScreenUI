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
    virtual void onClickMainTask() {}
    virtual void onClickMainProfile() {}
    virtual void onClickMainNet() {}
    virtual void onClickMainService() {}
    virtual void onClickMainStats() {}
    virtual void onClickMainSupport() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_MAIN_TASK: onClickMainTask(); break;
            case btn_MAIN_PROFILE: onClickMainProfile(); break;
            case btn_MAIN_NET: onClickMainNet(); break;
            case btn_MAIN_SERVICE: onClickMainService(); break;
            case btn_MAIN_STATS: onClickMainStats(); break;
            case btn_MAIN_SUPPORT: onClickMainSupport(); break;
            default: break;
        }
    }

};

}  // namespace screenui

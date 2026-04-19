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
class Service2Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_SERVICE2;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickService2Back() {}
    virtual void onClickServiceTable1() {}
    virtual void onClickServicePaper1() {}
    virtual void onClickServiceGuillotine1() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_SERVICE2_BACK: onClickService2Back(); break;
            case btn_SERVICE_TABLE_1: onClickServiceTable1(); break;
            case btn_SERVICE_PAPER_1: onClickServicePaper1(); break;
            case btn_SERVICE_GUILLOTINE_1: onClickServiceGuillotine1(); break;
            default: break;
        }
    }

};

}  // namespace screenui

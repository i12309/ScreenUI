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
class DefPage2Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE2;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickBack5() {}
    virtual void onClickNext13() {}
    virtual void onClickNext14() {}
    virtual void onClickNext15() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_5: onClickBack5(); break;
            case btn_NEXT_13: onClickNext13(); break;
            case btn_NEXT_14: onClickNext14(); break;
            case btn_NEXT_15: onClickNext15(); break;
            default: break;
        }
    }

};

}  // namespace screenui

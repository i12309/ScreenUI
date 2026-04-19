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
class WaitBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_WAIT;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickWaitText1() {}
    virtual void onClickWaitText2() {}
    virtual void onClickWaitText3() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_WAIT_TEXT1: onClickWaitText1(); break;
            case btn_WAIT_TEXT2: onClickWaitText2(); break;
            case btn_WAIT_TEXT3: onClickWaitText3(); break;
            default: break;
        }
    }

};

}  // namespace screenui

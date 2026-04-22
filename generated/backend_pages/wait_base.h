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
    virtual void onButtonWaitText1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickWaitText1(); (void)action; }
    virtual void onClickWaitText1() {}
    virtual void onButtonWaitText2(ButtonAction action) { if (action == ButtonAction_CLICK) onClickWaitText2(); (void)action; }
    virtual void onClickWaitText2() {}
    virtual void onButtonWaitText3(ButtonAction action) { if (action == ButtonAction_CLICK) onClickWaitText3(); (void)action; }
    virtual void onClickWaitText3() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_WAIT_TEXT1: onButtonWaitText1(action); break;
            case btn_WAIT_TEXT2: onButtonWaitText2(action); break;
            case btn_WAIT_TEXT3: onButtonWaitText3(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

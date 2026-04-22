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
class InputBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_INPUT;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonInputField1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputField1(); (void)action; }
    virtual void onClickInputField1() {}
    virtual void onButtonInputField2(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputField2(); (void)action; }
    virtual void onClickInputField2() {}
    virtual void onButtonInputField4(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputField4(); (void)action; }
    virtual void onClickInputField4() {}
    virtual void onButtonInputField3(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputField3(); (void)action; }
    virtual void onClickInputField3() {}
    virtual void onButtonInputCancel(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputCancel(); (void)action; }
    virtual void onClickInputCancel() {}
    virtual void onButtonInputOk(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInputOk(); (void)action; }
    virtual void onClickInputOk() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_INPUT_FIELD1: onButtonInputField1(action); break;
            case btn_INPUT_FIELD2: onButtonInputField2(action); break;
            case btn_INPUT_FIELD4: onButtonInputField4(action); break;
            case btn_INPUT_FIELD3: onButtonInputField3(action); break;
            case btn_INPUT_CANCEL: onButtonInputCancel(action); break;
            case btn_INPUT_OK: onButtonInputOk(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

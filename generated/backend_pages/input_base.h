// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class InputBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_INPUT;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickInputField1() {}
    virtual void onClickInputField2() {}
    virtual void onClickInputField4() {}
    virtual void onClickInputField3() {}
    virtual void onClickInputCancel() {}
    virtual void onClickInputOk() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_INPUT_FIELD1: onClickInputField1(); break;
            case btn_INPUT_FIELD2: onClickInputField2(); break;
            case btn_INPUT_FIELD4: onClickInputField4(); break;
            case btn_INPUT_FIELD3: onClickInputField3(); break;
            case btn_INPUT_CANCEL: onClickInputCancel(); break;
            case btn_INPUT_OK: onClickInputOk(); break;
            default: break;
        }
    }

};

}  // namespace screenui

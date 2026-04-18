// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class InfoBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_INFO;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickInfoField1() {}
    virtual void onClickInfoField2() {}
    virtual void onClickInfoField3() {}
    virtual void onClickInfoCancel() {}
    virtual void onClickInfoOk() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_INFO_FIELD1: onClickInfoField1(); break;
            case btn_INFO_FIELD2: onClickInfoField2(); break;
            case btn_INFO_FIELD3: onClickInfoField3(); break;
            case btn_INFO_CANCEL: onClickInfoCancel(); break;
            case btn_INFO_OK: onClickInfoOk(); break;
            default: break;
        }
    }

};

}  // namespace screenui

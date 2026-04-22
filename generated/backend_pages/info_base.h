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
class InfoBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_INFO;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonInfoBack(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoBack(); (void)action; }
    virtual void onClickInfoBack() {}
    virtual void onButtonInfoNext(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoNext(); (void)action; }
    virtual void onClickInfoNext() {}
    virtual void onButtonInfoField1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoField1(); (void)action; }
    virtual void onClickInfoField1() {}
    virtual void onButtonInfoField2(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoField2(); (void)action; }
    virtual void onClickInfoField2() {}
    virtual void onButtonInfoField3(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoField3(); (void)action; }
    virtual void onClickInfoField3() {}
    virtual void onButtonInfoCancel(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoCancel(); (void)action; }
    virtual void onClickInfoCancel() {}
    virtual void onButtonInfoOk(ButtonAction action) { if (action == ButtonAction_CLICK) onClickInfoOk(); (void)action; }
    virtual void onClickInfoOk() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_INFO_BACK: onButtonInfoBack(action); break;
            case btn_INFO_NEXT: onButtonInfoNext(action); break;
            case btn_INFO_FIELD1: onButtonInfoField1(action); break;
            case btn_INFO_FIELD2: onButtonInfoField2(action); break;
            case btn_INFO_FIELD3: onButtonInfoField3(action); break;
            case btn_INFO_CANCEL: onButtonInfoCancel(action); break;
            case btn_INFO_OK: onButtonInfoOk(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

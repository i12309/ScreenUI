// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "runtime/PageRuntime.h"
#include "element_types.generated.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

template <typename TPage>
class InputPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_INPUT;
    InputPage()
      : cnt_PAGE_7(this, ::cnt_PAGE_7)
      , cnt_BAR_8(this, ::cnt_BAR_8)
      , pnl_INPUT_TITLE_1(this, ::pnl_INPUT_TITLE_1)
      , cnt_BUTTON_7(this, ::cnt_BUTTON_7)
      , btn_INPUT_FIELD1(this, ::btn_INPUT_FIELD1)
      , btn_INPUT_FIELD2(this, ::btn_INPUT_FIELD2)
      , btn_INPUT_FIELD4(this, ::btn_INPUT_FIELD4)
      , btn_INPUT_FIELD3(this, ::btn_INPUT_FIELD3)
      , btn_INPUT_CANCEL(this, ::btn_INPUT_CANCEL)
      , btn_INPUT_OK(this, ::btn_INPUT_OK)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_7;
    screenui::generated::TypeContainer cnt_BAR_8;
    screenui::generated::TypePanel pnl_INPUT_TITLE_1;
    screenui::generated::TypeContainer cnt_BUTTON_7;
    screenui::generated::TypeButton btn_INPUT_FIELD1;
    screenui::generated::TypeButton btn_INPUT_FIELD2;
    screenui::generated::TypeButton btn_INPUT_FIELD4;
    screenui::generated::TypeButton btn_INPUT_FIELD3;
    screenui::generated::TypeButton btn_INPUT_CANCEL;
    screenui::generated::TypeButton btn_INPUT_OK;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_INPUT_FIELD1: btn_INPUT_FIELD1.onClick.emit(); break;
            case ::btn_INPUT_FIELD2: btn_INPUT_FIELD2.onClick.emit(); break;
            case ::btn_INPUT_FIELD4: btn_INPUT_FIELD4.onClick.emit(); break;
            case ::btn_INPUT_FIELD3: btn_INPUT_FIELD3.onClick.emit(); break;
            case ::btn_INPUT_CANCEL: btn_INPUT_CANCEL.onClick.emit(); break;
            case ::btn_INPUT_OK: btn_INPUT_OK.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

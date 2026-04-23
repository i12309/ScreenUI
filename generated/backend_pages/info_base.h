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
class InfoPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_INFO;
    InfoPage()
      : cnt_PAGE_6(this, ::cnt_PAGE_6)
      , cnt_BAR_7(this, ::cnt_BAR_7)
      , btn_INFO_BACK(this, ::btn_INFO_BACK)
      , pnl_INFO_TITLE(this, ::pnl_INFO_TITLE)
      , btn_INFO_NEXT(this, ::btn_INFO_NEXT)
      , cnt_BUTTON_6(this, ::cnt_BUTTON_6)
      , btn_INFO_FIELD1(this, ::btn_INFO_FIELD1)
      , btn_INFO_FIELD2(this, ::btn_INFO_FIELD2)
      , btn_INFO_FIELD3(this, ::btn_INFO_FIELD3)
      , btn_INFO_CANCEL(this, ::btn_INFO_CANCEL)
      , btn_INFO_OK(this, ::btn_INFO_OK)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_6;
    screenui::generated::TypeContainer cnt_BAR_7;
    screenui::generated::TypeButton btn_INFO_BACK;
    screenui::generated::TypePanel pnl_INFO_TITLE;
    screenui::generated::TypeButton btn_INFO_NEXT;
    screenui::generated::TypeContainer cnt_BUTTON_6;
    screenui::generated::TypeButton btn_INFO_FIELD1;
    screenui::generated::TypeButton btn_INFO_FIELD2;
    screenui::generated::TypeButton btn_INFO_FIELD3;
    screenui::generated::TypeButton btn_INFO_CANCEL;
    screenui::generated::TypeButton btn_INFO_OK;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_INFO_BACK: btn_INFO_BACK.onClick.emit(); break;
            case ::btn_INFO_NEXT: btn_INFO_NEXT.onClick.emit(); break;
            case ::btn_INFO_FIELD1: btn_INFO_FIELD1.onClick.emit(); break;
            case ::btn_INFO_FIELD2: btn_INFO_FIELD2.onClick.emit(); break;
            case ::btn_INFO_FIELD3: btn_INFO_FIELD3.onClick.emit(); break;
            case ::btn_INFO_CANCEL: btn_INFO_CANCEL.onClick.emit(); break;
            case ::btn_INFO_OK: btn_INFO_OK.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

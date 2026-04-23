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
class DefPage4Page : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE4;
    DefPage4Page()
      : cnt_PAGE_3(this, ::cnt_PAGE_3)
      , cnt_BAR_4(this, ::cnt_BAR_4)
      , btn_BACK_4(this, ::btn_BACK_4)
      , pnl_TITLE_4(this, ::pnl_TITLE_4)
      , btn_NEXT_10(this, ::btn_NEXT_10)
      , btn_NEXT_11(this, ::btn_NEXT_11)
      , btn_NEXT_12(this, ::btn_NEXT_12)
      , cnt_BUTTON_3(this, ::cnt_BUTTON_3)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_3;
    screenui::generated::TypeContainer cnt_BAR_4;
    screenui::generated::TypeButton btn_BACK_4;
    screenui::generated::TypePanel pnl_TITLE_4;
    screenui::generated::TypeButton btn_NEXT_10;
    screenui::generated::TypeButton btn_NEXT_11;
    screenui::generated::TypeButton btn_NEXT_12;
    screenui::generated::TypeContainer cnt_BUTTON_3;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_BACK_4: btn_BACK_4.onClick.emit(); break;
            case ::btn_NEXT_10: btn_NEXT_10.onClick.emit(); break;
            case ::btn_NEXT_11: btn_NEXT_11.onClick.emit(); break;
            case ::btn_NEXT_12: btn_NEXT_12.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

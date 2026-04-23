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
class DefPagePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE;
    DefPagePage()
      : cnt_PAGE_9(this, ::cnt_PAGE_9)
      , cnt_BAR_10(this, ::cnt_BAR_10)
      , pnl_TITLE_6(this, ::pnl_TITLE_6)
      , pnl_SIG_3(this, ::pnl_SIG_3)
      , btn_SIG1_6(this, ::btn_SIG1_6)
      , btn_SIG1_7(this, ::btn_SIG1_7)
      , btn_SIG1_8(this, ::btn_SIG1_8)
      , btn_NEXT_3(this, ::btn_NEXT_3)
      , cnt_BUTTON_9(this, ::cnt_BUTTON_9)
      , btn_B1_1(this, ::btn_B1_1)
      , btn_B2_1(this, ::btn_B2_1)
      , btn_B3_1(this, ::btn_B3_1)
      , btn_B4_1(this, ::btn_B4_1)
      , btn_B5_1(this, ::btn_B5_1)
      , btn_B6_1(this, ::btn_B6_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_9;
    screenui::generated::TypeContainer cnt_BAR_10;
    screenui::generated::TypePanel pnl_TITLE_6;
    screenui::generated::TypePanel pnl_SIG_3;
    screenui::generated::TypeButton btn_SIG1_6;
    screenui::generated::TypeButton btn_SIG1_7;
    screenui::generated::TypeButton btn_SIG1_8;
    screenui::generated::TypeButton btn_NEXT_3;
    screenui::generated::TypeContainer cnt_BUTTON_9;
    screenui::generated::TypeButton btn_B1_1;
    screenui::generated::TypeButton btn_B2_1;
    screenui::generated::TypeButton btn_B3_1;
    screenui::generated::TypeButton btn_B4_1;
    screenui::generated::TypeButton btn_B5_1;
    screenui::generated::TypeButton btn_B6_1;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_SIG1_6: btn_SIG1_6.onClick.emit(); break;
            case ::btn_SIG1_7: btn_SIG1_7.onClick.emit(); break;
            case ::btn_SIG1_8: btn_SIG1_8.onClick.emit(); break;
            case ::btn_NEXT_3: btn_NEXT_3.onClick.emit(); break;
            case ::btn_B1_1: btn_B1_1.onClick.emit(); break;
            case ::btn_B2_1: btn_B2_1.onClick.emit(); break;
            case ::btn_B3_1: btn_B3_1.onClick.emit(); break;
            case ::btn_B4_1: btn_B4_1.onClick.emit(); break;
            case ::btn_B5_1: btn_B5_1.onClick.emit(); break;
            case ::btn_B6_1: btn_B6_1.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

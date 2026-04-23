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
class DefPage3Page : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE3;
    DefPage3Page()
      : cnt_PAGE_2(this, ::cnt_PAGE_2)
      , cnt_BAR_3(this, ::cnt_BAR_3)
      , btn_BACK_3(this, ::btn_BACK_3)
      , pnl_TITLE_3(this, ::pnl_TITLE_3)
      , btn_NEXT_7(this, ::btn_NEXT_7)
      , btn_NEXT_8(this, ::btn_NEXT_8)
      , btn_NEXT_9(this, ::btn_NEXT_9)
      , cnt_BUTTON_2(this, ::cnt_BUTTON_2)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_2;
    screenui::generated::TypeContainer cnt_BAR_3;
    screenui::generated::TypeButton btn_BACK_3;
    screenui::generated::TypePanel pnl_TITLE_3;
    screenui::generated::TypeButton btn_NEXT_7;
    screenui::generated::TypeButton btn_NEXT_8;
    screenui::generated::TypeButton btn_NEXT_9;
    screenui::generated::TypeContainer cnt_BUTTON_2;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_BACK_3: btn_BACK_3.onClick.emit(); break;
            case ::btn_NEXT_7: btn_NEXT_7.onClick.emit(); break;
            case ::btn_NEXT_8: btn_NEXT_8.onClick.emit(); break;
            case ::btn_NEXT_9: btn_NEXT_9.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

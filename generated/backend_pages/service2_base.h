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
class Service2Page : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_SERVICE2;
    Service2Page()
      : cnt_PAGE_10(this, ::cnt_PAGE_10)
      , cnt_BAR_11(this, ::cnt_BAR_11)
      , btn_SERVICE2_BACK(this, ::btn_SERVICE2_BACK)
      , pnl_SERVICE2_TITLE(this, ::pnl_SERVICE2_TITLE)
      , cnt_BUTTON_10(this, ::cnt_BUTTON_10)
      , btn_SERVICE_TABLE_1(this, ::btn_SERVICE_TABLE_1)
      , btn_SERVICE_PAPER_1(this, ::btn_SERVICE_PAPER_1)
      , btn_SERVICE_GUILLOTINE_1(this, ::btn_SERVICE_GUILLOTINE_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_10;
    screenui::generated::TypeContainer cnt_BAR_11;
    screenui::generated::TypeButton btn_SERVICE2_BACK;
    screenui::generated::TypePanel pnl_SERVICE2_TITLE;
    screenui::generated::TypeContainer cnt_BUTTON_10;
    screenui::generated::TypeButton btn_SERVICE_TABLE_1;
    screenui::generated::TypeButton btn_SERVICE_PAPER_1;
    screenui::generated::TypeButton btn_SERVICE_GUILLOTINE_1;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_SERVICE2_BACK: btn_SERVICE2_BACK.onClick.emit(); break;
            case ::btn_SERVICE_TABLE_1: btn_SERVICE_TABLE_1.onClick.emit(); break;
            case ::btn_SERVICE_PAPER_1: btn_SERVICE_PAPER_1.onClick.emit(); break;
            case ::btn_SERVICE_GUILLOTINE_1: btn_SERVICE_GUILLOTINE_1.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

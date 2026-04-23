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
class ServicePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_SERVICE;
    ServicePage()
      : cnt_PAGE(this, ::cnt_PAGE)
      , cnt_BAR(this, ::cnt_BAR)
      , btn_SERVICE_BACK(this, ::btn_SERVICE_BACK)
      , pnl_SERVICE_TITLE(this, ::pnl_SERVICE_TITLE)
      , btn_NEXT_2(this, ::btn_NEXT_2)
      , cnt_BUTTON(this, ::cnt_BUTTON)
      , btn_SERVICE_TABLE(this, ::btn_SERVICE_TABLE)
      , btn_SERVICE_PAPER(this, ::btn_SERVICE_PAPER)
      , btn_SERVICE_GUILLOTINE(this, ::btn_SERVICE_GUILLOTINE)
      , btn_SERVICE_SLICE(this, ::btn_SERVICE_SLICE)
      , btn_SERVICE_CALIBRATION(this, ::btn_SERVICE_CALIBRATION)
      , btn_SERVICE_PROBA(this, ::btn_SERVICE_PROBA)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE;
    screenui::generated::TypeContainer cnt_BAR;
    screenui::generated::TypeButton btn_SERVICE_BACK;
    screenui::generated::TypePanel pnl_SERVICE_TITLE;
    screenui::generated::TypeButton btn_NEXT_2;
    screenui::generated::TypeContainer cnt_BUTTON;
    screenui::generated::TypeButton btn_SERVICE_TABLE;
    screenui::generated::TypeButton btn_SERVICE_PAPER;
    screenui::generated::TypeButton btn_SERVICE_GUILLOTINE;
    screenui::generated::TypeButton btn_SERVICE_SLICE;
    screenui::generated::TypeButton btn_SERVICE_CALIBRATION;
    screenui::generated::TypeButton btn_SERVICE_PROBA;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_SERVICE_BACK: btn_SERVICE_BACK.onClick.emit(); break;
            case ::btn_NEXT_2: btn_NEXT_2.onClick.emit(); break;
            case ::btn_SERVICE_TABLE: btn_SERVICE_TABLE.onClick.emit(); break;
            case ::btn_SERVICE_PAPER: btn_SERVICE_PAPER.onClick.emit(); break;
            case ::btn_SERVICE_GUILLOTINE: btn_SERVICE_GUILLOTINE.onClick.emit(); break;
            case ::btn_SERVICE_SLICE: btn_SERVICE_SLICE.onClick.emit(); break;
            case ::btn_SERVICE_CALIBRATION: btn_SERVICE_CALIBRATION.onClick.emit(); break;
            case ::btn_SERVICE_PROBA: btn_SERVICE_PROBA.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

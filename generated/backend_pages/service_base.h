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
class ServiceBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_SERVICE;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonServiceBack(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceBack(); (void)action; }
    virtual void onClickServiceBack() {}
    virtual void onButtonNext2(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext2(); (void)action; }
    virtual void onClickNext2() {}
    virtual void onButtonServiceTable(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceTable(); (void)action; }
    virtual void onClickServiceTable() {}
    virtual void onButtonServicePaper(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServicePaper(); (void)action; }
    virtual void onClickServicePaper() {}
    virtual void onButtonServiceGuillotine(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceGuillotine(); (void)action; }
    virtual void onClickServiceGuillotine() {}
    virtual void onButtonServiceSlice(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceSlice(); (void)action; }
    virtual void onClickServiceSlice() {}
    virtual void onButtonServiceCalibration(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceCalibration(); (void)action; }
    virtual void onClickServiceCalibration() {}
    virtual void onButtonServiceProba(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceProba(); (void)action; }
    virtual void onClickServiceProba() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_SERVICE_BACK: onButtonServiceBack(action); break;
            case btn_NEXT_2: onButtonNext2(action); break;
            case btn_SERVICE_TABLE: onButtonServiceTable(action); break;
            case btn_SERVICE_PAPER: onButtonServicePaper(action); break;
            case btn_SERVICE_GUILLOTINE: onButtonServiceGuillotine(action); break;
            case btn_SERVICE_SLICE: onButtonServiceSlice(action); break;
            case btn_SERVICE_CALIBRATION: onButtonServiceCalibration(action); break;
            case btn_SERVICE_PROBA: onButtonServiceProba(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

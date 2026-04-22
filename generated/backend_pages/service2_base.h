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
class Service2Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_SERVICE2;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonService2Back(ButtonAction action) { if (action == ButtonAction_CLICK) onClickService2Back(); (void)action; }
    virtual void onClickService2Back() {}
    virtual void onButtonServiceTable1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceTable1(); (void)action; }
    virtual void onClickServiceTable1() {}
    virtual void onButtonServicePaper1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServicePaper1(); (void)action; }
    virtual void onClickServicePaper1() {}
    virtual void onButtonServiceGuillotine1(ButtonAction action) { if (action == ButtonAction_CLICK) onClickServiceGuillotine1(); (void)action; }
    virtual void onClickServiceGuillotine1() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_SERVICE2_BACK: onButtonService2Back(action); break;
            case btn_SERVICE_TABLE_1: onButtonServiceTable1(action); break;
            case btn_SERVICE_PAPER_1: onButtonServicePaper1(action); break;
            case btn_SERVICE_GUILLOTINE_1: onButtonServiceGuillotine1(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

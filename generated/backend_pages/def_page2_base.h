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
class DefPage2Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE2;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonBack5(ButtonAction action) { if (action == ButtonAction_CLICK) onClickBack5(); (void)action; }
    virtual void onClickBack5() {}
    virtual void onButtonNext13(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext13(); (void)action; }
    virtual void onClickNext13() {}
    virtual void onButtonNext14(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext14(); (void)action; }
    virtual void onClickNext14() {}
    virtual void onButtonNext15(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext15(); (void)action; }
    virtual void onClickNext15() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_BACK_5: onButtonBack5(action); break;
            case btn_NEXT_13: onButtonNext13(action); break;
            case btn_NEXT_14: onButtonNext14(action); break;
            case btn_NEXT_15: onButtonNext15(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

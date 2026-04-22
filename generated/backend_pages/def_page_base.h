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
class DefPageBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonBSig16(ButtonAction action) { if (action == ButtonAction_CLICK) onClickBSig16(); (void)action; }
    virtual void onClickBSig16() {}
    virtual void onButtonBSig17(ButtonAction action) { if (action == ButtonAction_CLICK) onClickBSig17(); (void)action; }
    virtual void onClickBSig17() {}
    virtual void onButtonBSig18(ButtonAction action) { if (action == ButtonAction_CLICK) onClickBSig18(); (void)action; }
    virtual void onClickBSig18() {}
    virtual void onButtonNext3(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext3(); (void)action; }
    virtual void onClickNext3() {}
    virtual void onButtonB11(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB11(); (void)action; }
    virtual void onClickB11() {}
    virtual void onButtonB21(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB21(); (void)action; }
    virtual void onClickB21() {}
    virtual void onButtonB31(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB31(); (void)action; }
    virtual void onClickB31() {}
    virtual void onButtonB41(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB41(); (void)action; }
    virtual void onClickB41() {}
    virtual void onButtonB51(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB51(); (void)action; }
    virtual void onClickB51() {}
    virtual void onButtonB61(ButtonAction action) { if (action == ButtonAction_CLICK) onClickB61(); (void)action; }
    virtual void onClickB61() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_SIG1_6: onButtonBSig16(action); break;
            case btn_SIG1_7: onButtonBSig17(action); break;
            case btn_SIG1_8: onButtonBSig18(action); break;
            case btn_NEXT_3: onButtonNext3(action); break;
            case btn_B1_1: onButtonB11(action); break;
            case btn_B2_1: onButtonB21(action); break;
            case btn_B3_1: onButtonB31(action); break;
            case btn_B4_1: onButtonB41(action); break;
            case btn_B5_1: onButtonB51(action); break;
            case btn_B6_1: onButtonB61(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

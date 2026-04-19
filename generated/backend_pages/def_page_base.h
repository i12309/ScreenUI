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
    virtual void onClickBSig16() {}
    virtual void onClickBSig17() {}
    virtual void onClickBSig18() {}
    virtual void onClickNext3() {}
    virtual void onClickB11() {}
    virtual void onClickB21() {}
    virtual void onClickB31() {}
    virtual void onClickB41() {}
    virtual void onClickB51() {}
    virtual void onClickB61() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_SIG1_6: onClickBSig16(); break;
            case btn_SIG1_7: onClickBSig17(); break;
            case btn_SIG1_8: onClickBSig18(); break;
            case btn_NEXT_3: onClickNext3(); break;
            case btn_B1_1: onClickB11(); break;
            case btn_B2_1: onClickB21(); break;
            case btn_B3_1: onClickB31(); break;
            case btn_B4_1: onClickB41(); break;
            case btn_B5_1: onClickB51(); break;
            case btn_B6_1: onClickB61(); break;
            default: break;
        }
    }

};

}  // namespace screenui

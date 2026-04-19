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
    virtual void onClickBack5() {}
    virtual void onClickNext13() {}
    virtual void onClickNext14() {}
    virtual void onClickNext15() {}
    virtual void onClickObj36() {}
    virtual void onClickObj37() {}
    virtual void onClickObj38() {}
    virtual void onClickObj39() {}
    virtual void onClickObj40() {}
    virtual void onClickObj41() {}
    virtual void onClickObj42() {}
    virtual void onClickObj43() {}
    virtual void onClickObj44() {}
    virtual void onClickObj45() {}
    virtual void onClickObj46() {}
    virtual void onClickObj47() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_5: onClickBack5(); break;
            case btn_NEXT_13: onClickNext13(); break;
            case btn_NEXT_14: onClickNext14(); break;
            case btn_NEXT_15: onClickNext15(); break;
            case btn_OBJ36: onClickObj36(); break;
            case btn_OBJ37: onClickObj37(); break;
            case btn_OBJ38: onClickObj38(); break;
            case btn_OBJ39: onClickObj39(); break;
            case btn_OBJ40: onClickObj40(); break;
            case btn_OBJ41: onClickObj41(); break;
            case btn_OBJ42: onClickObj42(); break;
            case btn_OBJ43: onClickObj43(); break;
            case btn_OBJ44: onClickObj44(); break;
            case btn_OBJ45: onClickObj45(); break;
            case btn_OBJ46: onClickObj46(); break;
            case btn_OBJ47: onClickObj47(); break;
            default: break;
        }
    }

};

}  // namespace screenui

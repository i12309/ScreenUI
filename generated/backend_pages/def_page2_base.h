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
    virtual void onClickObj25() {}
    virtual void onClickObj26() {}
    virtual void onClickObj27() {}
    virtual void onClickObj28() {}
    virtual void onClickObj29() {}
    virtual void onClickObj30() {}
    virtual void onClickObj31() {}
    virtual void onClickObj32() {}
    virtual void onClickObj33() {}
    virtual void onClickObj34() {}
    virtual void onClickObj35() {}
    virtual void onClickObj36() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_5: onClickBack5(); break;
            case btn_NEXT_13: onClickNext13(); break;
            case btn_NEXT_14: onClickNext14(); break;
            case btn_NEXT_15: onClickNext15(); break;
            case btn_OBJ25: onClickObj25(); break;
            case btn_OBJ26: onClickObj26(); break;
            case btn_OBJ27: onClickObj27(); break;
            case btn_OBJ28: onClickObj28(); break;
            case btn_OBJ29: onClickObj29(); break;
            case btn_OBJ30: onClickObj30(); break;
            case btn_OBJ31: onClickObj31(); break;
            case btn_OBJ32: onClickObj32(); break;
            case btn_OBJ33: onClickObj33(); break;
            case btn_OBJ34: onClickObj34(); break;
            case btn_OBJ35: onClickObj35(); break;
            case btn_OBJ36: onClickObj36(); break;
            default: break;
        }
    }

};

}  // namespace screenui

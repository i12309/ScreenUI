// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class DefPage1Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE1;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickObj22() {}
    virtual void onClickBSig12() {}
    virtual void onClickBSig1() {}
    virtual void onClickBSig11() {}
    virtual void onClickNext2() {}
    virtual void onClickB1() {}
    virtual void onClickB2() {}
    virtual void onClickB3() {}
    virtual void onClickB4() {}
    virtual void onClickB5() {}
    virtual void onClickB6() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_OBJ22: onClickObj22(); break;
            case btn_SIG1_2: onClickBSig12(); break;
            case btn_SIG1: onClickBSig1(); break;
            case btn_SIG1_1: onClickBSig11(); break;
            case btn_NEXT_2: onClickNext2(); break;
            case btn_B1: onClickB1(); break;
            case btn_B2: onClickB2(); break;
            case btn_B3: onClickB3(); break;
            case btn_B4: onClickB4(); break;
            case btn_B5: onClickB5(); break;
            case btn_B6: onClickB6(); break;
            default: break;
        }
    }

};

}  // namespace screenui

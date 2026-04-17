// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class DefPage2Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = SCREEN32_PAGE_ID_DEF_PAGE2;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickBack1() {}
    virtual void onClickNext3() {}
    virtual void onClickNext4() {}
    virtual void onClickNext5() {}
    virtual void onClickObj12() {}
    virtual void onClickObj13() {}
    virtual void onClickObj14() {}
    virtual void onClickObj15() {}
    virtual void onClickObj16() {}
    virtual void onClickObj17() {}
    virtual void onClickObj18() {}
    virtual void onClickObj19() {}
    virtual void onClickObj20() {}
    virtual void onClickObj21() {}
    virtual void onClickObj22() {}
    virtual void onClickObj23() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case SCREEN32_ELEMENT_ID_BACK_1: onClickBack1(); break;
            case SCREEN32_ELEMENT_ID_NEXT_3: onClickNext3(); break;
            case SCREEN32_ELEMENT_ID_NEXT_4: onClickNext4(); break;
            case SCREEN32_ELEMENT_ID_NEXT_5: onClickNext5(); break;
            case SCREEN32_ELEMENT_ID_OBJ12: onClickObj12(); break;
            case SCREEN32_ELEMENT_ID_OBJ13: onClickObj13(); break;
            case SCREEN32_ELEMENT_ID_OBJ14: onClickObj14(); break;
            case SCREEN32_ELEMENT_ID_OBJ15: onClickObj15(); break;
            case SCREEN32_ELEMENT_ID_OBJ16: onClickObj16(); break;
            case SCREEN32_ELEMENT_ID_OBJ17: onClickObj17(); break;
            case SCREEN32_ELEMENT_ID_OBJ18: onClickObj18(); break;
            case SCREEN32_ELEMENT_ID_OBJ19: onClickObj19(); break;
            case SCREEN32_ELEMENT_ID_OBJ20: onClickObj20(); break;
            case SCREEN32_ELEMENT_ID_OBJ21: onClickObj21(); break;
            case SCREEN32_ELEMENT_ID_OBJ22: onClickObj22(); break;
            case SCREEN32_ELEMENT_ID_OBJ23: onClickObj23(); break;
            default: break;
        }
    }

};

}  // namespace screenui

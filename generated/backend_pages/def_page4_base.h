// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class DefPage4Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE4;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickBack4() {}
    virtual void onClickNext10() {}
    virtual void onClickNext11() {}
    virtual void onClickNext12() {}
    virtual void onClickObj53() {}
    virtual void onClickObj54() {}
    virtual void onClickObj55() {}
    virtual void onClickObj56() {}
    virtual void onClickObj57() {}
    virtual void onClickObj58() {}
    virtual void onClickObj59() {}
    virtual void onClickObj60() {}
    virtual void onClickObj61() {}
    virtual void onClickObj62() {}
    virtual void onClickObj63() {}
    virtual void onClickObj64() {}
    virtual void onClickObj65() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_4: onClickBack4(); break;
            case btn_NEXT_10: onClickNext10(); break;
            case btn_NEXT_11: onClickNext11(); break;
            case btn_NEXT_12: onClickNext12(); break;
            case btn_OBJ53: onClickObj53(); break;
            case btn_OBJ54: onClickObj54(); break;
            case btn_OBJ55: onClickObj55(); break;
            case btn_OBJ56: onClickObj56(); break;
            case btn_OBJ57: onClickObj57(); break;
            case btn_OBJ58: onClickObj58(); break;
            case btn_OBJ59: onClickObj59(); break;
            case btn_OBJ60: onClickObj60(); break;
            case btn_OBJ61: onClickObj61(); break;
            case btn_OBJ62: onClickObj62(); break;
            case btn_OBJ63: onClickObj63(); break;
            case btn_OBJ64: onClickObj64(); break;
            case btn_OBJ65: onClickObj65(); break;
            default: break;
        }
    }

};

}  // namespace screenui

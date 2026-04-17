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
    virtual void onClickObj42() {}
    virtual void onClickObj43() {}
    virtual void onClickObj44() {}
    virtual void onClickObj45() {}
    virtual void onClickObj46() {}
    virtual void onClickObj47() {}
    virtual void onClickObj48() {}
    virtual void onClickObj49() {}
    virtual void onClickObj50() {}
    virtual void onClickObj51() {}
    virtual void onClickObj52() {}
    virtual void onClickObj53() {}
    virtual void onClickObj54() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_4: onClickBack4(); break;
            case btn_NEXT_10: onClickNext10(); break;
            case btn_NEXT_11: onClickNext11(); break;
            case btn_NEXT_12: onClickNext12(); break;
            case btn_OBJ42: onClickObj42(); break;
            case btn_OBJ43: onClickObj43(); break;
            case btn_OBJ44: onClickObj44(); break;
            case btn_OBJ45: onClickObj45(); break;
            case btn_OBJ46: onClickObj46(); break;
            case btn_OBJ47: onClickObj47(); break;
            case btn_OBJ48: onClickObj48(); break;
            case btn_OBJ49: onClickObj49(); break;
            case btn_OBJ50: onClickObj50(); break;
            case btn_OBJ51: onClickObj51(); break;
            case btn_OBJ52: onClickObj52(); break;
            case btn_OBJ53: onClickObj53(); break;
            case btn_OBJ54: onClickObj54(); break;
            default: break;
        }
    }

};

}  // namespace screenui

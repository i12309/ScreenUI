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
class DefPage4Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE4;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickBack4() {}
    virtual void onClickNext10() {}
    virtual void onClickNext11() {}
    virtual void onClickNext12() {}
    virtual void onClickObj66() {}
    virtual void onClickObj67() {}
    virtual void onClickObj68() {}
    virtual void onClickObj69() {}
    virtual void onClickObj70() {}
    virtual void onClickObj71() {}
    virtual void onClickObj72() {}
    virtual void onClickObj73() {}
    virtual void onClickObj74() {}
    virtual void onClickObj75() {}
    virtual void onClickObj76() {}
    virtual void onClickObj77() {}
    virtual void onClickObj78() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_4: onClickBack4(); break;
            case btn_NEXT_10: onClickNext10(); break;
            case btn_NEXT_11: onClickNext11(); break;
            case btn_NEXT_12: onClickNext12(); break;
            case btn_OBJ66: onClickObj66(); break;
            case btn_OBJ67: onClickObj67(); break;
            case btn_OBJ68: onClickObj68(); break;
            case btn_OBJ69: onClickObj69(); break;
            case btn_OBJ70: onClickObj70(); break;
            case btn_OBJ71: onClickObj71(); break;
            case btn_OBJ72: onClickObj72(); break;
            case btn_OBJ73: onClickObj73(); break;
            case btn_OBJ74: onClickObj74(); break;
            case btn_OBJ75: onClickObj75(); break;
            case btn_OBJ76: onClickObj76(); break;
            case btn_OBJ77: onClickObj77(); break;
            case btn_OBJ78: onClickObj78(); break;
            default: break;
        }
    }

};

}  // namespace screenui

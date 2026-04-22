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
class DefPage3Base : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE3;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onButtonBack3(ButtonAction action) { if (action == ButtonAction_CLICK) onClickBack3(); (void)action; }
    virtual void onClickBack3() {}
    virtual void onButtonNext7(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext7(); (void)action; }
    virtual void onClickNext7() {}
    virtual void onButtonNext8(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext8(); (void)action; }
    virtual void onClickNext8() {}
    virtual void onButtonNext9(ButtonAction action) { if (action == ButtonAction_CLICK) onClickNext9(); (void)action; }
    virtual void onClickNext9() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_BACK_3: onButtonBack3(action); break;
            case btn_NEXT_7: onButtonNext7(action); break;
            case btn_NEXT_8: onButtonNext8(action); break;
            case btn_NEXT_9: onButtonNext9(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

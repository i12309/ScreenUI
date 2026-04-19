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
    virtual void onClickBack3() {}
    virtual void onClickNext7() {}
    virtual void onClickNext8() {}
    virtual void onClickNext9() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_3: onClickBack3(); break;
            case btn_NEXT_7: onClickNext7(); break;
            case btn_NEXT_8: onClickNext8(); break;
            case btn_NEXT_9: onClickNext9(); break;
            default: break;
        }
    }

};

}  // namespace screenui

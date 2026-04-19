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

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_BACK_4: onClickBack4(); break;
            case btn_NEXT_10: onClickNext10(); break;
            case btn_NEXT_11: onClickNext11(); break;
            case btn_NEXT_12: onClickNext12(); break;
            default: break;
        }
    }

};

}  // namespace screenui

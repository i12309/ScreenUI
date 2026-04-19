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
class InitBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_INIT;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickInitHttp() {}
    virtual void onClickInitOk() {}
    virtual void onClickObj24() {}
    virtual void onClickObj26() {}
    virtual void onClickObj27() {}
    virtual void onClickObj28() {}
    virtual void onClickObj29() {}
    virtual void onClickObj30() {}
    virtual void onClickObj31() {}
    virtual void onClickObj32() {}

    // === Числовые поля (slider/bar/arc/spinbox/roller/dropdown/switch) ===
    virtual void onChangeObj25(int32_t value) { (void)value; }

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_INIT_HTTP: onClickInitHttp(); break;
            case btn_INIT_OK: onClickInitOk(); break;
            case btn_OBJ24: onClickObj24(); break;
            case btn_OBJ26: onClickObj26(); break;
            case btn_OBJ27: onClickObj27(); break;
            case btn_OBJ28: onClickObj28(); break;
            case btn_OBJ29: onClickObj29(); break;
            case btn_OBJ30: onClickObj30(); break;
            case btn_OBJ31: onClickObj31(); break;
            case btn_OBJ32: onClickObj32(); break;
            default: break;
        }
    }

    void onInputInt(uint32_t elementId, int32_t value) final {
        switch (elementId) {
            case drp_OBJ25: onChangeObj25(value); break;
            default: break;
        }
    }

};

}  // namespace screenui

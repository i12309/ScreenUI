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
    virtual void onClickInitGroup() {}
    virtual void onClickInitName() {}
    virtual void onClickInitAccessPoint() {}
    virtual void onClickInitTest() {}

    // === Числовые поля (slider/bar/arc/spinbox/roller/dropdown/switch) ===
    virtual void onChangeInitMachine(int32_t value) { (void)value; }
    virtual void onChangeInitRAccessPoint(int32_t value) { (void)value; }
    virtual void onChangeInitRTest(int32_t value) { (void)value; }

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_INIT_HTTP: onClickInitHttp(); break;
            case btn_INIT_OK: onClickInitOk(); break;
            case btn_INIT_GROUP: onClickInitGroup(); break;
            case btn_INIT_NAME: onClickInitName(); break;
            case btn_INIT_ACCESS_POINT: onClickInitAccessPoint(); break;
            case btn_INIT_TEST: onClickInitTest(); break;
            default: break;
        }
    }

    void onInputInt(uint32_t elementId, int32_t value) final {
        switch (elementId) {
            case drp_INIT_MACHINE: onChangeInitMachine(value); break;
            case chk_INIT_R_ACCESS_POINT: onChangeInitRAccessPoint(value); break;
            case chk_INIT_R_TEST: onChangeInitRTest(value); break;
            default: break;
        }
    }

};

}  // namespace screenui

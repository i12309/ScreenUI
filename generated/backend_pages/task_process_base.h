// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class TaskProcessBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_TASK_PROCESS;
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickObj11() {}
    virtual void onClickObj12() {}
    virtual void onClickObj13() {}
    virtual void onClickObj14() {}
    virtual void onClickObj15() {}
    virtual void onClickObj16() {}
    virtual void onClickObj17() {}
    virtual void onClickObj18() {}
    virtual void onClickObj19() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_OBJ11: onClickObj11(); break;
            case btn_OBJ12: onClickObj12(); break;
            case btn_OBJ13: onClickObj13(); break;
            case btn_OBJ14: onClickObj14(); break;
            case btn_OBJ15: onClickObj15(); break;
            case btn_OBJ16: onClickObj16(); break;
            case btn_OBJ17: onClickObj17(); break;
            case btn_OBJ18: onClickObj18(); break;
            case btn_OBJ19: onClickObj19(); break;
            default: break;
        }
    }

};

}  // namespace screenui

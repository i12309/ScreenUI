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
class TaskRunBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = scr_TASK_RUN;
    // Открывает страницу через системный фасад экрана.
    static bool show() {
        return machine32::screen::Screen::getInstance().showPage<TPage>();
    }
    uint32_t pageId() const final { return kPageId; }

protected:
    // === Кнопки ===
    virtual void onClickTaskRunBack() {}
    virtual void onClickTaskRunListTask() {}
    virtual void onClickTaskRunListProfile() {}
    virtual void onClickTaskRunLabel() {}
    virtual void onClickTaskRunCycles() {}
    virtual void onClickTaskRunPlus() {}
    virtual void onClickTaskRunMinus() {}
    virtual void onClickTaskRunStart() {}

private:
    void onButton(uint32_t elementId) final {
        switch (elementId) {
            case btn_TASK_RUN_BACK: onClickTaskRunBack(); break;
            case btn_TASK_RUN_LIST_TASK: onClickTaskRunListTask(); break;
            case btn_TASK_RUN_LIST_PROFILE: onClickTaskRunListProfile(); break;
            case btn_TASK_RUN_LABEL: onClickTaskRunLabel(); break;
            case btn_TASK_RUN_CYCLES: onClickTaskRunCycles(); break;
            case btn_TASK_RUN_PLUS: onClickTaskRunPlus(); break;
            case btn_TASK_RUN_MINUS: onClickTaskRunMinus(); break;
            case btn_TASK_RUN_START: onClickTaskRunStart(); break;
            default: break;
        }
    }

};

}  // namespace screenui

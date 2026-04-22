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
    virtual void onButtonTaskRunBack(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunBack(); (void)action; }
    virtual void onClickTaskRunBack() {}
    virtual void onButtonTaskRunListTask(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunListTask(); (void)action; }
    virtual void onClickTaskRunListTask() {}
    virtual void onButtonTaskRunListProfile(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunListProfile(); (void)action; }
    virtual void onClickTaskRunListProfile() {}
    virtual void onButtonTaskRunLabel(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunLabel(); (void)action; }
    virtual void onClickTaskRunLabel() {}
    virtual void onButtonTaskRunCycles(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunCycles(); (void)action; }
    virtual void onClickTaskRunCycles() {}
    virtual void onButtonTaskRunPlus(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunPlus(); (void)action; }
    virtual void onClickTaskRunPlus() {}
    virtual void onButtonTaskRunMinus(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunMinus(); (void)action; }
    virtual void onClickTaskRunMinus() {}
    virtual void onButtonTaskRunStart(ButtonAction action) { if (action == ButtonAction_CLICK) onClickTaskRunStart(); (void)action; }
    virtual void onClickTaskRunStart() {}

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case btn_TASK_RUN_BACK: onButtonTaskRunBack(action); break;
            case btn_TASK_RUN_LIST_TASK: onButtonTaskRunListTask(action); break;
            case btn_TASK_RUN_LIST_PROFILE: onButtonTaskRunListProfile(action); break;
            case btn_TASK_RUN_LABEL: onButtonTaskRunLabel(action); break;
            case btn_TASK_RUN_CYCLES: onButtonTaskRunCycles(action); break;
            case btn_TASK_RUN_PLUS: onButtonTaskRunPlus(action); break;
            case btn_TASK_RUN_MINUS: onButtonTaskRunMinus(action); break;
            case btn_TASK_RUN_START: onButtonTaskRunStart(action); break;
            default: break;
        }
    }

};

}  // namespace screenui

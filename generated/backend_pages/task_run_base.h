// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "runtime/PageRuntime.h"
#include "element_types.generated.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

template <typename TPage>
class TaskRunPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_TASK_RUN;
    TaskRunPage()
      : cnt_PAGE_4(this, ::cnt_PAGE_4)
      , cnt_BAR_5(this, ::cnt_BAR_5)
      , btn_TASK_RUN_BACK(this, ::btn_TASK_RUN_BACK)
      , pnl_TASK_RUN_TITLE(this, ::pnl_TASK_RUN_TITLE)
      , cnt_BUTTON_4(this, ::cnt_BUTTON_4)
      , btn_TASK_RUN_LIST_TASK(this, ::btn_TASK_RUN_LIST_TASK)
      , btn_TASK_RUN_LIST_PROFILE(this, ::btn_TASK_RUN_LIST_PROFILE)
      , btn_TASK_RUN_LABEL(this, ::btn_TASK_RUN_LABEL)
      , btn_TASK_RUN_CYCLES(this, ::btn_TASK_RUN_CYCLES)
      , btn_TASK_RUN_PLUS(this, ::btn_TASK_RUN_PLUS)
      , btn_TASK_RUN_MINUS(this, ::btn_TASK_RUN_MINUS)
      , btn_TASK_RUN_START(this, ::btn_TASK_RUN_START)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_4;
    screenui::generated::TypeContainer cnt_BAR_5;
    screenui::generated::TypeButton btn_TASK_RUN_BACK;
    screenui::generated::TypePanel pnl_TASK_RUN_TITLE;
    screenui::generated::TypeContainer cnt_BUTTON_4;
    screenui::generated::TypeButton btn_TASK_RUN_LIST_TASK;
    screenui::generated::TypeButton btn_TASK_RUN_LIST_PROFILE;
    screenui::generated::TypeButton btn_TASK_RUN_LABEL;
    screenui::generated::TypeButton btn_TASK_RUN_CYCLES;
    screenui::generated::TypeButton btn_TASK_RUN_PLUS;
    screenui::generated::TypeButton btn_TASK_RUN_MINUS;
    screenui::generated::TypeButton btn_TASK_RUN_START;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        if (action != ButtonAction_CLICK) return;
        switch (elementId) {
            case ::btn_TASK_RUN_BACK: btn_TASK_RUN_BACK.onClick.emit(); break;
            case ::btn_TASK_RUN_LIST_TASK: btn_TASK_RUN_LIST_TASK.onClick.emit(); break;
            case ::btn_TASK_RUN_LIST_PROFILE: btn_TASK_RUN_LIST_PROFILE.onClick.emit(); break;
            case ::btn_TASK_RUN_LABEL: btn_TASK_RUN_LABEL.onClick.emit(); break;
            case ::btn_TASK_RUN_CYCLES: btn_TASK_RUN_CYCLES.onClick.emit(); break;
            case ::btn_TASK_RUN_PLUS: btn_TASK_RUN_PLUS.onClick.emit(); break;
            case ::btn_TASK_RUN_MINUS: btn_TASK_RUN_MINUS.onClick.emit(); break;
            case ::btn_TASK_RUN_START: btn_TASK_RUN_START.onClick.emit(); break;
            default: break;
        }
    }
};

}  // namespace screenui

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
      : btn_TASK_RUN_BACK(this, ::btn_TASK_RUN_BACK)
      , pnl_TASK_RUN_TITLE(this, ::pnl_TASK_RUN_TITLE)
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
    screenui::generated::TypeButton btn_TASK_RUN_BACK;
    screenui::generated::TypePanel pnl_TASK_RUN_TITLE;
    screenui::generated::TypeButton btn_TASK_RUN_LIST_TASK;
    screenui::generated::TypeButton btn_TASK_RUN_LIST_PROFILE;
    screenui::generated::TypeButton btn_TASK_RUN_LABEL;
    screenui::generated::TypeButton btn_TASK_RUN_CYCLES;
    screenui::generated::TypeButton btn_TASK_RUN_PLUS;
    screenui::generated::TypeButton btn_TASK_RUN_MINUS;
    screenui::generated::TypeButton btn_TASK_RUN_START;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_TASK_RUN_BACK:
                btn_TASK_RUN_BACK.text = text;
                btn_TASK_RUN_BACK.fireChanged();
                break;
            case ::pnl_TASK_RUN_TITLE:
                pnl_TASK_RUN_TITLE.text = text;
                pnl_TASK_RUN_TITLE.fireChanged();
                break;
            case ::btn_TASK_RUN_LIST_TASK:
                btn_TASK_RUN_LIST_TASK.text = text;
                btn_TASK_RUN_LIST_TASK.fireChanged();
                break;
            case ::btn_TASK_RUN_LIST_PROFILE:
                btn_TASK_RUN_LIST_PROFILE.text = text;
                btn_TASK_RUN_LIST_PROFILE.fireChanged();
                break;
            case ::btn_TASK_RUN_LABEL:
                btn_TASK_RUN_LABEL.text = text;
                btn_TASK_RUN_LABEL.fireChanged();
                break;
            case ::btn_TASK_RUN_CYCLES:
                btn_TASK_RUN_CYCLES.text = text;
                btn_TASK_RUN_CYCLES.fireChanged();
                break;
            case ::btn_TASK_RUN_PLUS:
                btn_TASK_RUN_PLUS.text = text;
                btn_TASK_RUN_PLUS.fireChanged();
                break;
            case ::btn_TASK_RUN_MINUS:
                btn_TASK_RUN_MINUS.text = text;
                btn_TASK_RUN_MINUS.fireChanged();
                break;
            case ::btn_TASK_RUN_START:
                btn_TASK_RUN_START.text = text;
                btn_TASK_RUN_START.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_TASK_RUN_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_LIST_TASK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_LIST_TASK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_LIST_TASK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_LIST_TASK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_LIST_TASK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_LIST_PROFILE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_LIST_PROFILE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_LIST_PROFILE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_LIST_PROFILE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_LIST_PROFILE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_LABEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_LABEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_LABEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_LABEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_LABEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_CYCLES:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_CYCLES.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_CYCLES.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_CYCLES.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_CYCLES.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_PLUS:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_PLUS.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_PLUS.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_PLUS.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_PLUS.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_MINUS:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_MINUS.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_MINUS.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_MINUS.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_MINUS.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_RUN_START:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_RUN_START.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_RUN_START.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_RUN_START.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_RUN_START.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

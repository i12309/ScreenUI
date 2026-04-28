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
class TaskPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_TASK;
    TaskPage()
      : btn_TASK_BACK(this, ::btn_TASK_BACK)
      , pnl_TASK_TITLE(this, ::pnl_TASK_TITLE)
      , btn_TASK_DEL(this, ::btn_TASK_DEL)
      , btn_TASK_SAVE(this, ::btn_TASK_SAVE)
      , btn_TASK_NAME(this, ::btn_TASK_NAME)
      , btn_TASK_LIST_PROFILE(this, ::btn_TASK_LIST_PROFILE)
      , btn_TASK_PRODUCT_MM(this, ::btn_TASK_PRODUCT_MM)
      , btn_TASK_OVER_MM(this, ::btn_TASK_OVER_MM)
      , btn_TASK_FIRST_CUT_MM(this, ::btn_TASK_FIRST_CUT_MM)
      , btn_TASK_LAST_CUT_MM(this, ::btn_TASK_LAST_CUT_MM)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_TASK_BACK;
    screenui::generated::TypePanel pnl_TASK_TITLE;
    screenui::generated::TypeButton btn_TASK_DEL;
    screenui::generated::TypeButton btn_TASK_SAVE;
    screenui::generated::TypeButton btn_TASK_NAME;
    screenui::generated::TypeButton btn_TASK_LIST_PROFILE;
    screenui::generated::TypeButton btn_TASK_PRODUCT_MM;
    screenui::generated::TypeButton btn_TASK_OVER_MM;
    screenui::generated::TypeButton btn_TASK_FIRST_CUT_MM;
    screenui::generated::TypeButton btn_TASK_LAST_CUT_MM;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_TASK_BACK:
                btn_TASK_BACK.text = text;
                btn_TASK_BACK.fireChanged();
                break;
            case ::pnl_TASK_TITLE:
                pnl_TASK_TITLE.text = text;
                pnl_TASK_TITLE.fireChanged();
                break;
            case ::btn_TASK_DEL:
                btn_TASK_DEL.text = text;
                btn_TASK_DEL.fireChanged();
                break;
            case ::btn_TASK_SAVE:
                btn_TASK_SAVE.text = text;
                btn_TASK_SAVE.fireChanged();
                break;
            case ::btn_TASK_NAME:
                btn_TASK_NAME.text = text;
                btn_TASK_NAME.fireChanged();
                break;
            case ::btn_TASK_LIST_PROFILE:
                btn_TASK_LIST_PROFILE.text = text;
                btn_TASK_LIST_PROFILE.fireChanged();
                break;
            case ::btn_TASK_PRODUCT_MM:
                btn_TASK_PRODUCT_MM.text = text;
                btn_TASK_PRODUCT_MM.fireChanged();
                break;
            case ::btn_TASK_OVER_MM:
                btn_TASK_OVER_MM.text = text;
                btn_TASK_OVER_MM.fireChanged();
                break;
            case ::btn_TASK_FIRST_CUT_MM:
                btn_TASK_FIRST_CUT_MM.text = text;
                btn_TASK_FIRST_CUT_MM.fireChanged();
                break;
            case ::btn_TASK_LAST_CUT_MM:
                btn_TASK_LAST_CUT_MM.text = text;
                btn_TASK_LAST_CUT_MM.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_TASK_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_DEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_DEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_DEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_DEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_DEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_SAVE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_SAVE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_SAVE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_SAVE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_SAVE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_NAME:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_NAME.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_NAME.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_NAME.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_NAME.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_LIST_PROFILE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_LIST_PROFILE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_LIST_PROFILE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_LIST_PROFILE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_LIST_PROFILE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_PRODUCT_MM:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_PRODUCT_MM.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_PRODUCT_MM.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_PRODUCT_MM.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_PRODUCT_MM.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_OVER_MM:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_OVER_MM.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_OVER_MM.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_OVER_MM.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_OVER_MM.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_FIRST_CUT_MM:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_FIRST_CUT_MM.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_FIRST_CUT_MM.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_FIRST_CUT_MM.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_FIRST_CUT_MM.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_LAST_CUT_MM:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_LAST_CUT_MM.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_LAST_CUT_MM.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_LAST_CUT_MM.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_LAST_CUT_MM.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

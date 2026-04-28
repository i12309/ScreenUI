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
class MainPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_MAIN;
    MainPage()
      : btn_MAIN_TASK(this, ::btn_MAIN_TASK)
      , btn_MAIN_PROFILE(this, ::btn_MAIN_PROFILE)
      , btn_MAIN_NET(this, ::btn_MAIN_NET)
      , btn_MAIN_SERVICE(this, ::btn_MAIN_SERVICE)
      , btn_MAIN_STATS(this, ::btn_MAIN_STATS)
      , btn_MAIN_SUPPORT(this, ::btn_MAIN_SUPPORT)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_MAIN_TASK;
    screenui::generated::TypeButton btn_MAIN_PROFILE;
    screenui::generated::TypeButton btn_MAIN_NET;
    screenui::generated::TypeButton btn_MAIN_SERVICE;
    screenui::generated::TypeButton btn_MAIN_STATS;
    screenui::generated::TypeButton btn_MAIN_SUPPORT;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_MAIN_TASK:
                btn_MAIN_TASK.text = text;
                btn_MAIN_TASK.fireChanged();
                break;
            case ::btn_MAIN_PROFILE:
                btn_MAIN_PROFILE.text = text;
                btn_MAIN_PROFILE.fireChanged();
                break;
            case ::btn_MAIN_NET:
                btn_MAIN_NET.text = text;
                btn_MAIN_NET.fireChanged();
                break;
            case ::btn_MAIN_SERVICE:
                btn_MAIN_SERVICE.text = text;
                btn_MAIN_SERVICE.fireChanged();
                break;
            case ::btn_MAIN_STATS:
                btn_MAIN_STATS.text = text;
                btn_MAIN_STATS.fireChanged();
                break;
            case ::btn_MAIN_SUPPORT:
                btn_MAIN_SUPPORT.text = text;
                btn_MAIN_SUPPORT.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_MAIN_TASK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_TASK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_TASK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_TASK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_TASK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_MAIN_PROFILE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_PROFILE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_PROFILE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_PROFILE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_PROFILE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_MAIN_NET:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_NET.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_NET.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_NET.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_NET.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_MAIN_SERVICE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_SERVICE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_SERVICE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_SERVICE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_SERVICE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_MAIN_STATS:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_STATS.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_STATS.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_STATS.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_STATS.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_MAIN_SUPPORT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_MAIN_SUPPORT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_MAIN_SUPPORT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_MAIN_SUPPORT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_MAIN_SUPPORT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

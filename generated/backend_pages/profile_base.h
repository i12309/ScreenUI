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
class ProfilePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_PROFILE;
    ProfilePage()
      : btn_PROFILE_BACK(this, ::btn_PROFILE_BACK)
      , pnl_PROFILE_TITLE(this, ::pnl_PROFILE_TITLE)
      , btn_PROFILE_DEL(this, ::btn_PROFILE_DEL)
      , btn_PROFILE_SAVE(this, ::btn_PROFILE_SAVE)
      , btn_PROFILE_NAME(this, ::btn_PROFILE_NAME)
      , btn_PROFILE_NAME_1(this, ::btn_PROFILE_NAME_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_PROFILE_BACK;
    screenui::generated::TypePanel pnl_PROFILE_TITLE;
    screenui::generated::TypeButton btn_PROFILE_DEL;
    screenui::generated::TypeButton btn_PROFILE_SAVE;
    screenui::generated::TypeButton btn_PROFILE_NAME;
    screenui::generated::TypeButton btn_PROFILE_NAME_1;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_PROFILE_BACK:
                btn_PROFILE_BACK.text = text;
                btn_PROFILE_BACK.fireChanged();
                break;
            case ::pnl_PROFILE_TITLE:
                pnl_PROFILE_TITLE.text = text;
                pnl_PROFILE_TITLE.fireChanged();
                break;
            case ::btn_PROFILE_DEL:
                btn_PROFILE_DEL.text = text;
                btn_PROFILE_DEL.fireChanged();
                break;
            case ::btn_PROFILE_SAVE:
                btn_PROFILE_SAVE.text = text;
                btn_PROFILE_SAVE.fireChanged();
                break;
            case ::btn_PROFILE_NAME:
                btn_PROFILE_NAME.text = text;
                btn_PROFILE_NAME.fireChanged();
                break;
            case ::btn_PROFILE_NAME_1:
                btn_PROFILE_NAME_1.text = text;
                btn_PROFILE_NAME_1.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_PROFILE_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PROFILE_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PROFILE_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PROFILE_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PROFILE_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_PROFILE_DEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PROFILE_DEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PROFILE_DEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PROFILE_DEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PROFILE_DEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_PROFILE_SAVE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PROFILE_SAVE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PROFILE_SAVE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PROFILE_SAVE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PROFILE_SAVE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_PROFILE_NAME:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PROFILE_NAME.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PROFILE_NAME.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PROFILE_NAME.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PROFILE_NAME.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_PROFILE_NAME_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PROFILE_NAME_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PROFILE_NAME_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PROFILE_NAME_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PROFILE_NAME_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

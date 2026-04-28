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
class UpdatePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_UPDATE;
    UpdatePage()
      : btn_UPDATE_BACK(this, ::btn_UPDATE_BACK)
      , pnl_UPDATE_TITLE(this, ::pnl_UPDATE_TITLE)
      , btn_UPDATE_DEV_VER(this, ::btn_UPDATE_DEV_VER)
      , btn_UPDATE_DEV(this, ::btn_UPDATE_DEV)
      , btn_UPDATE_SCR_VER(this, ::btn_UPDATE_SCR_VER)
      , btn_UPDATE_SCR(this, ::btn_UPDATE_SCR)
      , btn_UPDATE_AUTO(this, ::btn_UPDATE_AUTO)
      , btn_UPDATE_VERSION(this, ::btn_UPDATE_VERSION)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_UPDATE_BACK;
    screenui::generated::TypePanel pnl_UPDATE_TITLE;
    screenui::generated::TypeButton btn_UPDATE_DEV_VER;
    screenui::generated::TypeButton btn_UPDATE_DEV;
    screenui::generated::TypeButton btn_UPDATE_SCR_VER;
    screenui::generated::TypeButton btn_UPDATE_SCR;
    screenui::generated::TypeButton btn_UPDATE_AUTO;
    screenui::generated::TypeButton btn_UPDATE_VERSION;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_UPDATE_BACK:
                btn_UPDATE_BACK.text = text;
                btn_UPDATE_BACK.fireChanged();
                break;
            case ::pnl_UPDATE_TITLE:
                pnl_UPDATE_TITLE.text = text;
                pnl_UPDATE_TITLE.fireChanged();
                break;
            case ::btn_UPDATE_DEV_VER:
                btn_UPDATE_DEV_VER.text = text;
                btn_UPDATE_DEV_VER.fireChanged();
                break;
            case ::btn_UPDATE_DEV:
                btn_UPDATE_DEV.text = text;
                btn_UPDATE_DEV.fireChanged();
                break;
            case ::btn_UPDATE_SCR_VER:
                btn_UPDATE_SCR_VER.text = text;
                btn_UPDATE_SCR_VER.fireChanged();
                break;
            case ::btn_UPDATE_SCR:
                btn_UPDATE_SCR.text = text;
                btn_UPDATE_SCR.fireChanged();
                break;
            case ::btn_UPDATE_AUTO:
                btn_UPDATE_AUTO.text = text;
                btn_UPDATE_AUTO.fireChanged();
                break;
            case ::btn_UPDATE_VERSION:
                btn_UPDATE_VERSION.text = text;
                btn_UPDATE_VERSION.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_UPDATE_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_DEV_VER:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_DEV_VER.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_DEV_VER.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_DEV_VER.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_DEV_VER.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_DEV:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_DEV.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_DEV.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_DEV.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_DEV.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_SCR_VER:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_SCR_VER.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_SCR_VER.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_SCR_VER.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_SCR_VER.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_SCR:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_SCR.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_SCR.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_SCR.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_SCR.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_AUTO:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_AUTO.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_AUTO.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_AUTO.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_AUTO.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_UPDATE_VERSION:
                switch (action) {
                    case ButtonAction_CLICK:  btn_UPDATE_VERSION.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_UPDATE_VERSION.onPush.emit();   break;
                    case ButtonAction_POP:    btn_UPDATE_VERSION.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_UPDATE_VERSION.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

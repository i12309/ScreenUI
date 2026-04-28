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
class BigelPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_BIGEL;
    BigelPage()
      : btn_BIGEL_BACK(this, ::btn_BIGEL_BACK)
      , pnl_BIGEL_TITLE(this, ::pnl_BIGEL_TITLE)
      , btn_SIG1_17(this, ::btn_SIG1_17)
      , btn_SIG1_19(this, ::btn_SIG1_19)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_BIGEL_BACK;
    screenui::generated::TypePanel pnl_BIGEL_TITLE;
    screenui::generated::TypeButton btn_SIG1_17;
    screenui::generated::TypeButton btn_SIG1_19;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_BIGEL_BACK:
                btn_BIGEL_BACK.text = text;
                btn_BIGEL_BACK.fireChanged();
                break;
            case ::pnl_BIGEL_TITLE:
                pnl_BIGEL_TITLE.text = text;
                pnl_BIGEL_TITLE.fireChanged();
                break;
            case ::btn_SIG1_17:
                btn_SIG1_17.text = text;
                btn_SIG1_17.fireChanged();
                break;
            case ::btn_SIG1_19:
                btn_SIG1_19.text = text;
                btn_SIG1_19.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_BIGEL_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_BIGEL_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_BIGEL_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_BIGEL_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_BIGEL_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_17:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_17.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_17.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_17.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_17.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_19:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_19.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_19.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_19.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_19.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

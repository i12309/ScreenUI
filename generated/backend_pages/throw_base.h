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
class ThrowPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_THROW;
    ThrowPage()
      : btn_GUILLOTINE_BACK_1(this, ::btn_GUILLOTINE_BACK_1)
      , pnl_GUILLOTINE_TITLE_1(this, ::pnl_GUILLOTINE_TITLE_1)
      , btn_SIG1_18(this, ::btn_SIG1_18)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_GUILLOTINE_BACK_1;
    screenui::generated::TypePanel pnl_GUILLOTINE_TITLE_1;
    screenui::generated::TypeButton btn_SIG1_18;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_GUILLOTINE_BACK_1:
                btn_GUILLOTINE_BACK_1.text = text;
                btn_GUILLOTINE_BACK_1.fireChanged();
                break;
            case ::pnl_GUILLOTINE_TITLE_1:
                pnl_GUILLOTINE_TITLE_1.text = text;
                pnl_GUILLOTINE_TITLE_1.fireChanged();
                break;
            case ::btn_SIG1_18:
                btn_SIG1_18.text = text;
                btn_SIG1_18.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_GUILLOTINE_BACK_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_GUILLOTINE_BACK_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_GUILLOTINE_BACK_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_GUILLOTINE_BACK_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_GUILLOTINE_BACK_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_18:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_18.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_18.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_18.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_18.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

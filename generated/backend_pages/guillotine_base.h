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
class GuillotinePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_GUILLOTINE;
    GuillotinePage()
      : btn_GUILLOTINE_BACK(this, ::btn_GUILLOTINE_BACK)
      , pnl_GUILLOTINE_TITLE(this, ::pnl_GUILLOTINE_TITLE)
      , btn_SIG1_12(this, ::btn_SIG1_12)
      , btn_SIG1_13(this, ::btn_SIG1_13)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_GUILLOTINE_BACK;
    screenui::generated::TypePanel pnl_GUILLOTINE_TITLE;
    screenui::generated::TypeButton btn_SIG1_12;
    screenui::generated::TypeButton btn_SIG1_13;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_GUILLOTINE_BACK:
                btn_GUILLOTINE_BACK.text = text;
                btn_GUILLOTINE_BACK.fireChanged();
                break;
            case ::pnl_GUILLOTINE_TITLE:
                pnl_GUILLOTINE_TITLE.text = text;
                pnl_GUILLOTINE_TITLE.fireChanged();
                break;
            case ::btn_SIG1_12:
                btn_SIG1_12.text = text;
                btn_SIG1_12.fireChanged();
                break;
            case ::btn_SIG1_13:
                btn_SIG1_13.text = text;
                btn_SIG1_13.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_GUILLOTINE_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_GUILLOTINE_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_GUILLOTINE_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_GUILLOTINE_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_GUILLOTINE_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_12:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_12.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_12.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_12.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_12.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_13:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_13.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_13.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_13.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_13.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

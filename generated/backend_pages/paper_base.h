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
class PaperPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_PAPER;
    PaperPage()
      : btn_PAPER_BACK(this, ::btn_PAPER_BACK)
      , pnl_PAPER_TITLE(this, ::pnl_PAPER_TITLE)
      , btn_PAPER_ODO(this, ::btn_PAPER_ODO)
      , btn_SIG1_14(this, ::btn_SIG1_14)
      , btn_SIG1_15(this, ::btn_SIG1_15)
      , btn_SIG1_16(this, ::btn_SIG1_16)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_PAPER_BACK;
    screenui::generated::TypePanel pnl_PAPER_TITLE;
    screenui::generated::TypeButton btn_PAPER_ODO;
    screenui::generated::TypeButton btn_SIG1_14;
    screenui::generated::TypeButton btn_SIG1_15;
    screenui::generated::TypeButton btn_SIG1_16;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_PAPER_BACK:
                btn_PAPER_BACK.text = text;
                btn_PAPER_BACK.fireChanged();
                break;
            case ::pnl_PAPER_TITLE:
                pnl_PAPER_TITLE.text = text;
                pnl_PAPER_TITLE.fireChanged();
                break;
            case ::btn_PAPER_ODO:
                btn_PAPER_ODO.text = text;
                btn_PAPER_ODO.fireChanged();
                break;
            case ::btn_SIG1_14:
                btn_SIG1_14.text = text;
                btn_SIG1_14.fireChanged();
                break;
            case ::btn_SIG1_15:
                btn_SIG1_15.text = text;
                btn_SIG1_15.fireChanged();
                break;
            case ::btn_SIG1_16:
                btn_SIG1_16.text = text;
                btn_SIG1_16.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_PAPER_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PAPER_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PAPER_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PAPER_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PAPER_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_PAPER_ODO:
                switch (action) {
                    case ButtonAction_CLICK:  btn_PAPER_ODO.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_PAPER_ODO.onPush.emit();   break;
                    case ButtonAction_POP:    btn_PAPER_ODO.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_PAPER_ODO.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_14:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_14.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_14.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_14.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_14.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_15:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_15.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_15.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_15.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_15.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_16:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_16.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_16.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_16.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_16.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

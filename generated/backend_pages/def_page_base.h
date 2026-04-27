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
class DefPagePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE;
    DefPagePage()
      : cnt_PAGE_9(this, ::cnt_PAGE_9)
      , cnt_BAR_10(this, ::cnt_BAR_10)
      , pnl_TITLE_6(this, ::pnl_TITLE_6)
      , pnl_SIG_3(this, ::pnl_SIG_3)
      , btn_SIG1_6(this, ::btn_SIG1_6)
      , btn_SIG1_7(this, ::btn_SIG1_7)
      , btn_SIG1_8(this, ::btn_SIG1_8)
      , btn_NEXT_3(this, ::btn_NEXT_3)
      , cnt_BUTTON_9(this, ::cnt_BUTTON_9)
      , btn_B1_1(this, ::btn_B1_1)
      , btn_B2_1(this, ::btn_B2_1)
      , btn_B3_1(this, ::btn_B3_1)
      , btn_B4_1(this, ::btn_B4_1)
      , btn_B5_1(this, ::btn_B5_1)
      , btn_B6_1(this, ::btn_B6_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_9;
    screenui::generated::TypeContainer cnt_BAR_10;
    screenui::generated::TypePanel pnl_TITLE_6;
    screenui::generated::TypePanel pnl_SIG_3;
    screenui::generated::TypeButton btn_SIG1_6;
    screenui::generated::TypeButton btn_SIG1_7;
    screenui::generated::TypeButton btn_SIG1_8;
    screenui::generated::TypeButton btn_NEXT_3;
    screenui::generated::TypeContainer cnt_BUTTON_9;
    screenui::generated::TypeButton btn_B1_1;
    screenui::generated::TypeButton btn_B2_1;
    screenui::generated::TypeButton btn_B3_1;
    screenui::generated::TypeButton btn_B4_1;
    screenui::generated::TypeButton btn_B5_1;
    screenui::generated::TypeButton btn_B6_1;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::pnl_TITLE_6:
                pnl_TITLE_6.text = text;
                pnl_TITLE_6.fireChanged();
                break;
            case ::pnl_SIG_3:
                pnl_SIG_3.text = text;
                pnl_SIG_3.fireChanged();
                break;
            case ::btn_SIG1_6:
                btn_SIG1_6.text = text;
                btn_SIG1_6.fireChanged();
                break;
            case ::btn_SIG1_7:
                btn_SIG1_7.text = text;
                btn_SIG1_7.fireChanged();
                break;
            case ::btn_SIG1_8:
                btn_SIG1_8.text = text;
                btn_SIG1_8.fireChanged();
                break;
            case ::btn_NEXT_3:
                btn_NEXT_3.text = text;
                btn_NEXT_3.fireChanged();
                break;
            case ::btn_B1_1:
                btn_B1_1.text = text;
                btn_B1_1.fireChanged();
                break;
            case ::btn_B2_1:
                btn_B2_1.text = text;
                btn_B2_1.fireChanged();
                break;
            case ::btn_B3_1:
                btn_B3_1.text = text;
                btn_B3_1.fireChanged();
                break;
            case ::btn_B4_1:
                btn_B4_1.text = text;
                btn_B4_1.fireChanged();
                break;
            case ::btn_B5_1:
                btn_B5_1.text = text;
                btn_B5_1.fireChanged();
                break;
            case ::btn_B6_1:
                btn_B6_1.text = text;
                btn_B6_1.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_SIG1_6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_7:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_7.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_7.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_7.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_7.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SIG1_8:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SIG1_8.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SIG1_8.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SIG1_8.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SIG1_8.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_NEXT_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_NEXT_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_NEXT_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_NEXT_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_NEXT_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B1_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B1_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B1_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B1_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B1_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B2_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B2_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B2_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B2_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B2_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B3_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B3_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B3_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B3_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B3_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B4_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B4_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B4_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B4_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B4_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B5_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B5_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B5_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B5_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B5_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_B6_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_B6_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_B6_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_B6_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_B6_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

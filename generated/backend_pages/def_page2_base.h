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
class DefPage2Page : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_DEF_PAGE2;
    DefPage2Page()
      : cnt_PAGE_5(this, ::cnt_PAGE_5)
      , cnt_BAR_6(this, ::cnt_BAR_6)
      , btn_BACK_5(this, ::btn_BACK_5)
      , pnl_TITLE_5(this, ::pnl_TITLE_5)
      , btn_NEXT_13(this, ::btn_NEXT_13)
      , btn_NEXT_14(this, ::btn_NEXT_14)
      , btn_NEXT_15(this, ::btn_NEXT_15)
      , cnt_BUTTON_5(this, ::cnt_BUTTON_5)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_5;
    screenui::generated::TypeContainer cnt_BAR_6;
    screenui::generated::TypeButton btn_BACK_5;
    screenui::generated::TypePanel pnl_TITLE_5;
    screenui::generated::TypeButton btn_NEXT_13;
    screenui::generated::TypeButton btn_NEXT_14;
    screenui::generated::TypeButton btn_NEXT_15;
    screenui::generated::TypeContainer cnt_BUTTON_5;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_BACK_5:
                btn_BACK_5.text = text;
                btn_BACK_5.fireChanged();
                break;
            case ::pnl_TITLE_5:
                pnl_TITLE_5.text = text;
                pnl_TITLE_5.fireChanged();
                break;
            case ::btn_NEXT_13:
                btn_NEXT_13.text = text;
                btn_NEXT_13.fireChanged();
                break;
            case ::btn_NEXT_14:
                btn_NEXT_14.text = text;
                btn_NEXT_14.fireChanged();
                break;
            case ::btn_NEXT_15:
                btn_NEXT_15.text = text;
                btn_NEXT_15.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_BACK_5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_BACK_5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_BACK_5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_BACK_5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_BACK_5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_NEXT_13:
                switch (action) {
                    case ButtonAction_CLICK:  btn_NEXT_13.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_NEXT_13.onPush.emit();   break;
                    case ButtonAction_POP:    btn_NEXT_13.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_NEXT_13.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_NEXT_14:
                switch (action) {
                    case ButtonAction_CLICK:  btn_NEXT_14.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_NEXT_14.onPush.emit();   break;
                    case ButtonAction_POP:    btn_NEXT_14.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_NEXT_14.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_NEXT_15:
                switch (action) {
                    case ButtonAction_CLICK:  btn_NEXT_15.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_NEXT_15.onPush.emit();   break;
                    case ButtonAction_POP:    btn_NEXT_15.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_NEXT_15.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

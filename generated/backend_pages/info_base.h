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
class InfoPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_INFO;
    InfoPage()
      : cnt_PAGE_6(this, ::cnt_PAGE_6)
      , cnt_BAR_7(this, ::cnt_BAR_7)
      , btn_INFO_BACK(this, ::btn_INFO_BACK)
      , pnl_INFO_TITLE(this, ::pnl_INFO_TITLE)
      , btn_INFO_NEXT(this, ::btn_INFO_NEXT)
      , cnt_BUTTON_6(this, ::cnt_BUTTON_6)
      , btn_INFO_FIELD1(this, ::btn_INFO_FIELD1)
      , btn_INFO_FIELD2(this, ::btn_INFO_FIELD2)
      , btn_INFO_FIELD3(this, ::btn_INFO_FIELD3)
      , btn_INFO_CANCEL(this, ::btn_INFO_CANCEL)
      , btn_INFO_OK(this, ::btn_INFO_OK)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_6;
    screenui::generated::TypeContainer cnt_BAR_7;
    screenui::generated::TypeButton btn_INFO_BACK;
    screenui::generated::TypePanel pnl_INFO_TITLE;
    screenui::generated::TypeButton btn_INFO_NEXT;
    screenui::generated::TypeContainer cnt_BUTTON_6;
    screenui::generated::TypeButton btn_INFO_FIELD1;
    screenui::generated::TypeButton btn_INFO_FIELD2;
    screenui::generated::TypeButton btn_INFO_FIELD3;
    screenui::generated::TypeButton btn_INFO_CANCEL;
    screenui::generated::TypeButton btn_INFO_OK;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_INFO_BACK:
                btn_INFO_BACK.text = text;
                btn_INFO_BACK.fireChanged();
                break;
            case ::pnl_INFO_TITLE:
                pnl_INFO_TITLE.text = text;
                pnl_INFO_TITLE.fireChanged();
                break;
            case ::btn_INFO_NEXT:
                btn_INFO_NEXT.text = text;
                btn_INFO_NEXT.fireChanged();
                break;
            case ::btn_INFO_FIELD1:
                btn_INFO_FIELD1.text = text;
                btn_INFO_FIELD1.fireChanged();
                break;
            case ::btn_INFO_FIELD2:
                btn_INFO_FIELD2.text = text;
                btn_INFO_FIELD2.fireChanged();
                break;
            case ::btn_INFO_FIELD3:
                btn_INFO_FIELD3.text = text;
                btn_INFO_FIELD3.fireChanged();
                break;
            case ::btn_INFO_CANCEL:
                btn_INFO_CANCEL.text = text;
                btn_INFO_CANCEL.fireChanged();
                break;
            case ::btn_INFO_OK:
                btn_INFO_OK.text = text;
                btn_INFO_OK.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_INFO_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_NEXT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_NEXT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_NEXT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_NEXT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_NEXT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_FIELD1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_FIELD1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_FIELD1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_FIELD1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_FIELD1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_FIELD2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_FIELD2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_FIELD2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_FIELD2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_FIELD2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_FIELD3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_FIELD3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_FIELD3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_FIELD3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_FIELD3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_CANCEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_CANCEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_CANCEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_CANCEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_CANCEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INFO_OK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INFO_OK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INFO_OK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INFO_OK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INFO_OK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

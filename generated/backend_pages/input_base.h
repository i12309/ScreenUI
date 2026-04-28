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
class InputPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_INPUT;
    InputPage()
      : pnl_INPUT_TITLE_1(this, ::pnl_INPUT_TITLE_1)
      , btn_INPUT_FIELD1(this, ::btn_INPUT_FIELD1)
      , btn_INPUT_FIELD2(this, ::btn_INPUT_FIELD2)
      , btn_INPUT_FIELD4(this, ::btn_INPUT_FIELD4)
      , btn_INPUT_FIELD3(this, ::btn_INPUT_FIELD3)
      , btn_INPUT_CANCEL(this, ::btn_INPUT_CANCEL)
      , btn_INPUT_OK(this, ::btn_INPUT_OK)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypePanel pnl_INPUT_TITLE_1;
    screenui::generated::TypeButton btn_INPUT_FIELD1;
    screenui::generated::TypeButton btn_INPUT_FIELD2;
    screenui::generated::TypeButton btn_INPUT_FIELD4;
    screenui::generated::TypeButton btn_INPUT_FIELD3;
    screenui::generated::TypeButton btn_INPUT_CANCEL;
    screenui::generated::TypeButton btn_INPUT_OK;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::pnl_INPUT_TITLE_1:
                pnl_INPUT_TITLE_1.text = text;
                pnl_INPUT_TITLE_1.fireChanged();
                break;
            case ::btn_INPUT_FIELD1:
                btn_INPUT_FIELD1.text = text;
                btn_INPUT_FIELD1.fireChanged();
                break;
            case ::btn_INPUT_FIELD2:
                btn_INPUT_FIELD2.text = text;
                btn_INPUT_FIELD2.fireChanged();
                break;
            case ::btn_INPUT_FIELD4:
                btn_INPUT_FIELD4.text = text;
                btn_INPUT_FIELD4.fireChanged();
                break;
            case ::btn_INPUT_FIELD3:
                btn_INPUT_FIELD3.text = text;
                btn_INPUT_FIELD3.fireChanged();
                break;
            case ::btn_INPUT_CANCEL:
                btn_INPUT_CANCEL.text = text;
                btn_INPUT_CANCEL.fireChanged();
                break;
            case ::btn_INPUT_OK:
                btn_INPUT_OK.text = text;
                btn_INPUT_OK.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_INPUT_FIELD1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_FIELD1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_FIELD1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_FIELD1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_FIELD1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INPUT_FIELD2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_FIELD2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_FIELD2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_FIELD2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_FIELD2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INPUT_FIELD4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_FIELD4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_FIELD4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_FIELD4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_FIELD4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INPUT_FIELD3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_FIELD3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_FIELD3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_FIELD3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_FIELD3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INPUT_CANCEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_CANCEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_CANCEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_CANCEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_CANCEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INPUT_OK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INPUT_OK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INPUT_OK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INPUT_OK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INPUT_OK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

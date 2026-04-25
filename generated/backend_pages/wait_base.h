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
class WaitPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_WAIT;
    WaitPage()
      : btn_WAIT_TEXT1(this, ::btn_WAIT_TEXT1)
      , btn_WAIT_TEXT2(this, ::btn_WAIT_TEXT2)
      , btn_WAIT_TEXT3(this, ::btn_WAIT_TEXT3)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_WAIT_TEXT1;
    screenui::generated::TypeButton btn_WAIT_TEXT2;
    screenui::generated::TypeButton btn_WAIT_TEXT3;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_WAIT_TEXT1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WAIT_TEXT1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WAIT_TEXT1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WAIT_TEXT1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WAIT_TEXT1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WAIT_TEXT2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WAIT_TEXT2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WAIT_TEXT2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WAIT_TEXT2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WAIT_TEXT2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WAIT_TEXT3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WAIT_TEXT3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WAIT_TEXT3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WAIT_TEXT3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WAIT_TEXT3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

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
class ThrowsPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_THROWS;
    ThrowsPage()
      : btn_THROWS_BACK(this, ::btn_THROWS_BACK)
      , pnl_THROWS_TITLE(this, ::pnl_THROWS_TITLE)
      , btn_THROWS_SIG(this, ::btn_THROWS_SIG)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_THROWS_BACK;
    screenui::generated::TypePanel pnl_THROWS_TITLE;
    screenui::generated::TypeButton btn_THROWS_SIG;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_THROWS_BACK:
                btn_THROWS_BACK.text = text;
                btn_THROWS_BACK.fireChanged();
                break;
            case ::pnl_THROWS_TITLE:
                pnl_THROWS_TITLE.text = text;
                pnl_THROWS_TITLE.fireChanged();
                break;
            case ::btn_THROWS_SIG:
                btn_THROWS_SIG.text = text;
                btn_THROWS_SIG.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_THROWS_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_THROWS_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_THROWS_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_THROWS_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_THROWS_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_THROWS_SIG:
                switch (action) {
                    case ButtonAction_CLICK:  btn_THROWS_SIG.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_THROWS_SIG.onPush.emit();   break;
                    case ButtonAction_POP:    btn_THROWS_SIG.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_THROWS_SIG.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

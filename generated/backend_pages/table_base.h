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
class TablePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_TABLE;
    TablePage()
      : btn_TABLE_BACK(this, ::btn_TABLE_BACK)
      , pnl_TABLE_TITLE(this, ::pnl_TABLE_TITLE)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_TABLE_BACK;
    screenui::generated::TypePanel pnl_TABLE_TITLE;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_TABLE_BACK:
                btn_TABLE_BACK.text = text;
                btn_TABLE_BACK.fireChanged();
                break;
            case ::pnl_TABLE_TITLE:
                pnl_TABLE_TITLE.text = text;
                pnl_TABLE_TITLE.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_TABLE_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TABLE_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TABLE_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TABLE_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TABLE_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

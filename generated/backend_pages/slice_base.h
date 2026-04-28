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
class SlicePage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_SLICE;
    SlicePage()
      : btn_SLICE_BACK(this, ::btn_SLICE_BACK)
      , pnl_SLICE_TITLE(this, ::pnl_SLICE_TITLE)
      , btn_SLICE_LIST_PROFILE(this, ::btn_SLICE_LIST_PROFILE)
      , btn_SLICE_COUNT_PAPER(this, ::btn_SLICE_COUNT_PAPER)
      , btn_SLICE_PLUS(this, ::btn_SLICE_PLUS)
      , btn_SLICE_MINUS(this, ::btn_SLICE_MINUS)
      , btn_TASK_FIRST_CUT_MM_3(this, ::btn_TASK_FIRST_CUT_MM_3)
      , btn_SLICE_GO(this, ::btn_SLICE_GO)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_SLICE_BACK;
    screenui::generated::TypePanel pnl_SLICE_TITLE;
    screenui::generated::TypeButton btn_SLICE_LIST_PROFILE;
    screenui::generated::TypeButton btn_SLICE_COUNT_PAPER;
    screenui::generated::TypeButton btn_SLICE_PLUS;
    screenui::generated::TypeButton btn_SLICE_MINUS;
    screenui::generated::TypeButton btn_TASK_FIRST_CUT_MM_3;
    screenui::generated::TypeButton btn_SLICE_GO;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_SLICE_BACK:
                btn_SLICE_BACK.text = text;
                btn_SLICE_BACK.fireChanged();
                break;
            case ::pnl_SLICE_TITLE:
                pnl_SLICE_TITLE.text = text;
                pnl_SLICE_TITLE.fireChanged();
                break;
            case ::btn_SLICE_LIST_PROFILE:
                btn_SLICE_LIST_PROFILE.text = text;
                btn_SLICE_LIST_PROFILE.fireChanged();
                break;
            case ::btn_SLICE_COUNT_PAPER:
                btn_SLICE_COUNT_PAPER.text = text;
                btn_SLICE_COUNT_PAPER.fireChanged();
                break;
            case ::btn_SLICE_PLUS:
                btn_SLICE_PLUS.text = text;
                btn_SLICE_PLUS.fireChanged();
                break;
            case ::btn_SLICE_MINUS:
                btn_SLICE_MINUS.text = text;
                btn_SLICE_MINUS.fireChanged();
                break;
            case ::btn_TASK_FIRST_CUT_MM_3:
                btn_TASK_FIRST_CUT_MM_3.text = text;
                btn_TASK_FIRST_CUT_MM_3.fireChanged();
                break;
            case ::btn_SLICE_GO:
                btn_SLICE_GO.text = text;
                btn_SLICE_GO.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_SLICE_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SLICE_LIST_PROFILE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_LIST_PROFILE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_LIST_PROFILE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_LIST_PROFILE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_LIST_PROFILE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SLICE_COUNT_PAPER:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_COUNT_PAPER.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_COUNT_PAPER.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_COUNT_PAPER.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_COUNT_PAPER.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SLICE_PLUS:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_PLUS.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_PLUS.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_PLUS.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_PLUS.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SLICE_MINUS:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_MINUS.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_MINUS.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_MINUS.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_MINUS.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_FIRST_CUT_MM_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_FIRST_CUT_MM_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_FIRST_CUT_MM_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_FIRST_CUT_MM_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_FIRST_CUT_MM_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_SLICE_GO:
                switch (action) {
                    case ButtonAction_CLICK:  btn_SLICE_GO.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_SLICE_GO.onPush.emit();   break;
                    case ButtonAction_POP:    btn_SLICE_GO.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_SLICE_GO.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

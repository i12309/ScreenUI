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
class ListPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_LIST;
    ListPage()
      : btn_LIST_BACK(this, ::btn_LIST_BACK)
      , pnl_LIST_TITLE(this, ::pnl_LIST_TITLE)
      , btn_LIST_DEL(this, ::btn_LIST_DEL)
      , btn_LIST_ADD(this, ::btn_LIST_ADD)
      , btn_LIST_NEXT(this, ::btn_LIST_NEXT)
      , btn_LIST_CHECK_1(this, ::btn_LIST_CHECK_1)
      , btn_LIST_ITEM_1(this, ::btn_LIST_ITEM_1)
      , btn_LIST_EDIT_1(this, ::btn_LIST_EDIT_1)
      , btn_LIST_CHECK_2(this, ::btn_LIST_CHECK_2)
      , btn_LIST_ITEM_2(this, ::btn_LIST_ITEM_2)
      , btn_LIST_EDIT_2(this, ::btn_LIST_EDIT_2)
      , btn_LIST_CHECK_3(this, ::btn_LIST_CHECK_3)
      , btn_LIST_ITEM_3(this, ::btn_LIST_ITEM_3)
      , btn_LIST_EDIT_3(this, ::btn_LIST_EDIT_3)
      , btn_LIST_CHECK_4(this, ::btn_LIST_CHECK_4)
      , btn_LIST_ITEM_4(this, ::btn_LIST_ITEM_4)
      , btn_LIST_EDIT_4(this, ::btn_LIST_EDIT_4)
      , btn_LIST_CHECK_5(this, ::btn_LIST_CHECK_5)
      , btn_LIST_ITEM_5(this, ::btn_LIST_ITEM_5)
      , btn_LIST_EDIT_5(this, ::btn_LIST_EDIT_5)
      , btn_LIST_CHECK_6(this, ::btn_LIST_CHECK_6)
      , btn_LIST_ITEM_6(this, ::btn_LIST_ITEM_6)
      , btn_LIST_EDIT_6(this, ::btn_LIST_EDIT_6)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_LIST_BACK;
    screenui::generated::TypePanel pnl_LIST_TITLE;
    screenui::generated::TypeButton btn_LIST_DEL;
    screenui::generated::TypeButton btn_LIST_ADD;
    screenui::generated::TypeButton btn_LIST_NEXT;
    screenui::generated::TypeButton btn_LIST_CHECK_1;
    screenui::generated::TypeButton btn_LIST_ITEM_1;
    screenui::generated::TypeButton btn_LIST_EDIT_1;
    screenui::generated::TypeButton btn_LIST_CHECK_2;
    screenui::generated::TypeButton btn_LIST_ITEM_2;
    screenui::generated::TypeButton btn_LIST_EDIT_2;
    screenui::generated::TypeButton btn_LIST_CHECK_3;
    screenui::generated::TypeButton btn_LIST_ITEM_3;
    screenui::generated::TypeButton btn_LIST_EDIT_3;
    screenui::generated::TypeButton btn_LIST_CHECK_4;
    screenui::generated::TypeButton btn_LIST_ITEM_4;
    screenui::generated::TypeButton btn_LIST_EDIT_4;
    screenui::generated::TypeButton btn_LIST_CHECK_5;
    screenui::generated::TypeButton btn_LIST_ITEM_5;
    screenui::generated::TypeButton btn_LIST_EDIT_5;
    screenui::generated::TypeButton btn_LIST_CHECK_6;
    screenui::generated::TypeButton btn_LIST_ITEM_6;
    screenui::generated::TypeButton btn_LIST_EDIT_6;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_LIST_BACK:
                btn_LIST_BACK.text = text;
                btn_LIST_BACK.fireChanged();
                break;
            case ::pnl_LIST_TITLE:
                pnl_LIST_TITLE.text = text;
                pnl_LIST_TITLE.fireChanged();
                break;
            case ::btn_LIST_DEL:
                btn_LIST_DEL.text = text;
                btn_LIST_DEL.fireChanged();
                break;
            case ::btn_LIST_ADD:
                btn_LIST_ADD.text = text;
                btn_LIST_ADD.fireChanged();
                break;
            case ::btn_LIST_NEXT:
                btn_LIST_NEXT.text = text;
                btn_LIST_NEXT.fireChanged();
                break;
            case ::btn_LIST_CHECK_1:
                btn_LIST_CHECK_1.text = text;
                btn_LIST_CHECK_1.fireChanged();
                break;
            case ::btn_LIST_ITEM_1:
                btn_LIST_ITEM_1.text = text;
                btn_LIST_ITEM_1.fireChanged();
                break;
            case ::btn_LIST_EDIT_1:
                btn_LIST_EDIT_1.text = text;
                btn_LIST_EDIT_1.fireChanged();
                break;
            case ::btn_LIST_CHECK_2:
                btn_LIST_CHECK_2.text = text;
                btn_LIST_CHECK_2.fireChanged();
                break;
            case ::btn_LIST_ITEM_2:
                btn_LIST_ITEM_2.text = text;
                btn_LIST_ITEM_2.fireChanged();
                break;
            case ::btn_LIST_EDIT_2:
                btn_LIST_EDIT_2.text = text;
                btn_LIST_EDIT_2.fireChanged();
                break;
            case ::btn_LIST_CHECK_3:
                btn_LIST_CHECK_3.text = text;
                btn_LIST_CHECK_3.fireChanged();
                break;
            case ::btn_LIST_ITEM_3:
                btn_LIST_ITEM_3.text = text;
                btn_LIST_ITEM_3.fireChanged();
                break;
            case ::btn_LIST_EDIT_3:
                btn_LIST_EDIT_3.text = text;
                btn_LIST_EDIT_3.fireChanged();
                break;
            case ::btn_LIST_CHECK_4:
                btn_LIST_CHECK_4.text = text;
                btn_LIST_CHECK_4.fireChanged();
                break;
            case ::btn_LIST_ITEM_4:
                btn_LIST_ITEM_4.text = text;
                btn_LIST_ITEM_4.fireChanged();
                break;
            case ::btn_LIST_EDIT_4:
                btn_LIST_EDIT_4.text = text;
                btn_LIST_EDIT_4.fireChanged();
                break;
            case ::btn_LIST_CHECK_5:
                btn_LIST_CHECK_5.text = text;
                btn_LIST_CHECK_5.fireChanged();
                break;
            case ::btn_LIST_ITEM_5:
                btn_LIST_ITEM_5.text = text;
                btn_LIST_ITEM_5.fireChanged();
                break;
            case ::btn_LIST_EDIT_5:
                btn_LIST_EDIT_5.text = text;
                btn_LIST_EDIT_5.fireChanged();
                break;
            case ::btn_LIST_CHECK_6:
                btn_LIST_CHECK_6.text = text;
                btn_LIST_CHECK_6.fireChanged();
                break;
            case ::btn_LIST_ITEM_6:
                btn_LIST_ITEM_6.text = text;
                btn_LIST_ITEM_6.fireChanged();
                break;
            case ::btn_LIST_EDIT_6:
                btn_LIST_EDIT_6.text = text;
                btn_LIST_EDIT_6.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_LIST_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_DEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_DEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_DEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_DEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_DEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ADD:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ADD.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ADD.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ADD.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ADD.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_NEXT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_NEXT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_NEXT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_NEXT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_NEXT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_CHECK_6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_CHECK_6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_CHECK_6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_CHECK_6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_CHECK_6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_ITEM_6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_ITEM_6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_ITEM_6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_ITEM_6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_ITEM_6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_LIST_EDIT_6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_LIST_EDIT_6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_LIST_EDIT_6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_LIST_EDIT_6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_LIST_EDIT_6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

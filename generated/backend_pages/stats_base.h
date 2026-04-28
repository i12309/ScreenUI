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
class StatsPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_STATS;
    StatsPage()
      : btn_STATS_BACK(this, ::btn_STATS_BACK)
      , pnl_STATS_TITLE(this, ::pnl_STATS_TITLE)
      , btn_STATS_NEXT(this, ::btn_STATS_NEXT)
      , btn_STATS_FIELD1(this, ::btn_STATS_FIELD1)
      , btn_STATS_FIELD2(this, ::btn_STATS_FIELD2)
      , btn_STATS_PARAM1(this, ::btn_STATS_PARAM1)
      , btn_STATS_VALUE1(this, ::btn_STATS_VALUE1)
      , btn_STATS_PARAM2(this, ::btn_STATS_PARAM2)
      , btn_STATS_VALUE2(this, ::btn_STATS_VALUE2)
      , btn_STATS_PARAM3(this, ::btn_STATS_PARAM3)
      , btn_STATS_VALUE3(this, ::btn_STATS_VALUE3)
      , btn_STATS_PARAM4(this, ::btn_STATS_PARAM4)
      , btn_STATS_VALUE4(this, ::btn_STATS_VALUE4)
      , btn_STATS_PARAM5(this, ::btn_STATS_PARAM5)
      , btn_STATS_VALUE5(this, ::btn_STATS_VALUE5)
      , btn_STATS_PARAM6(this, ::btn_STATS_PARAM6)
      , btn_STATS_VALUE6(this, ::btn_STATS_VALUE6)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_STATS_BACK;
    screenui::generated::TypePanel pnl_STATS_TITLE;
    screenui::generated::TypeButton btn_STATS_NEXT;
    screenui::generated::TypeButton btn_STATS_FIELD1;
    screenui::generated::TypeButton btn_STATS_FIELD2;
    screenui::generated::TypeButton btn_STATS_PARAM1;
    screenui::generated::TypeButton btn_STATS_VALUE1;
    screenui::generated::TypeButton btn_STATS_PARAM2;
    screenui::generated::TypeButton btn_STATS_VALUE2;
    screenui::generated::TypeButton btn_STATS_PARAM3;
    screenui::generated::TypeButton btn_STATS_VALUE3;
    screenui::generated::TypeButton btn_STATS_PARAM4;
    screenui::generated::TypeButton btn_STATS_VALUE4;
    screenui::generated::TypeButton btn_STATS_PARAM5;
    screenui::generated::TypeButton btn_STATS_VALUE5;
    screenui::generated::TypeButton btn_STATS_PARAM6;
    screenui::generated::TypeButton btn_STATS_VALUE6;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_STATS_BACK:
                btn_STATS_BACK.text = text;
                btn_STATS_BACK.fireChanged();
                break;
            case ::pnl_STATS_TITLE:
                pnl_STATS_TITLE.text = text;
                pnl_STATS_TITLE.fireChanged();
                break;
            case ::btn_STATS_NEXT:
                btn_STATS_NEXT.text = text;
                btn_STATS_NEXT.fireChanged();
                break;
            case ::btn_STATS_FIELD1:
                btn_STATS_FIELD1.text = text;
                btn_STATS_FIELD1.fireChanged();
                break;
            case ::btn_STATS_FIELD2:
                btn_STATS_FIELD2.text = text;
                btn_STATS_FIELD2.fireChanged();
                break;
            case ::btn_STATS_PARAM1:
                btn_STATS_PARAM1.text = text;
                btn_STATS_PARAM1.fireChanged();
                break;
            case ::btn_STATS_VALUE1:
                btn_STATS_VALUE1.text = text;
                btn_STATS_VALUE1.fireChanged();
                break;
            case ::btn_STATS_PARAM2:
                btn_STATS_PARAM2.text = text;
                btn_STATS_PARAM2.fireChanged();
                break;
            case ::btn_STATS_VALUE2:
                btn_STATS_VALUE2.text = text;
                btn_STATS_VALUE2.fireChanged();
                break;
            case ::btn_STATS_PARAM3:
                btn_STATS_PARAM3.text = text;
                btn_STATS_PARAM3.fireChanged();
                break;
            case ::btn_STATS_VALUE3:
                btn_STATS_VALUE3.text = text;
                btn_STATS_VALUE3.fireChanged();
                break;
            case ::btn_STATS_PARAM4:
                btn_STATS_PARAM4.text = text;
                btn_STATS_PARAM4.fireChanged();
                break;
            case ::btn_STATS_VALUE4:
                btn_STATS_VALUE4.text = text;
                btn_STATS_VALUE4.fireChanged();
                break;
            case ::btn_STATS_PARAM5:
                btn_STATS_PARAM5.text = text;
                btn_STATS_PARAM5.fireChanged();
                break;
            case ::btn_STATS_VALUE5:
                btn_STATS_VALUE5.text = text;
                btn_STATS_VALUE5.fireChanged();
                break;
            case ::btn_STATS_PARAM6:
                btn_STATS_PARAM6.text = text;
                btn_STATS_PARAM6.fireChanged();
                break;
            case ::btn_STATS_VALUE6:
                btn_STATS_VALUE6.text = text;
                btn_STATS_VALUE6.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_STATS_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_NEXT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_NEXT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_NEXT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_NEXT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_NEXT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_FIELD1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_FIELD1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_FIELD1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_FIELD1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_FIELD1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_FIELD2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_FIELD2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_FIELD2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_FIELD2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_FIELD2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE4:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE4.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE4.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE4.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE4.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE5:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE5.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE5.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE5.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE5.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_PARAM6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_PARAM6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_PARAM6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_PARAM6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_PARAM6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_STATS_VALUE6:
                switch (action) {
                    case ButtonAction_CLICK:  btn_STATS_VALUE6.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_STATS_VALUE6.onPush.emit();   break;
                    case ButtonAction_POP:    btn_STATS_VALUE6.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_STATS_VALUE6.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

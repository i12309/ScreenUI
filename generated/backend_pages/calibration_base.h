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
class CalibrationPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_CALIBRATION;
    CalibrationPage()
      : btn_CALIBRATION_BACK(this, ::btn_CALIBRATION_BACK)
      , pnl_CALIBRATION_TITLE(this, ::pnl_CALIBRATION_TITLE)
      , btn_CALIBRATION_SAVE(this, ::btn_CALIBRATION_SAVE)
      , btn_CALIBRATION_LIST_PROFILE(this, ::btn_CALIBRATION_LIST_PROFILE)
      , btn_TASK_NAME_1(this, ::btn_TASK_NAME_1)
      , btn_TASK_NAME_2(this, ::btn_TASK_NAME_2)
      , btn_TASK_NAME_3(this, ::btn_TASK_NAME_3)
      , btn_TASK_PRODUCT_MM_1(this, ::btn_TASK_PRODUCT_MM_1)
      , btn_TASK_OVER_MM_1(this, ::btn_TASK_OVER_MM_1)
      , btn_TASK_FIRST_CUT_MM_2(this, ::btn_TASK_FIRST_CUT_MM_2)
      , btn_TASK_FIRST_CUT_MM_1(this, ::btn_TASK_FIRST_CUT_MM_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_CALIBRATION_BACK;
    screenui::generated::TypePanel pnl_CALIBRATION_TITLE;
    screenui::generated::TypeButton btn_CALIBRATION_SAVE;
    screenui::generated::TypeButton btn_CALIBRATION_LIST_PROFILE;
    screenui::generated::TypeButton btn_TASK_NAME_1;
    screenui::generated::TypeButton btn_TASK_NAME_2;
    screenui::generated::TypeButton btn_TASK_NAME_3;
    screenui::generated::TypeButton btn_TASK_PRODUCT_MM_1;
    screenui::generated::TypeButton btn_TASK_OVER_MM_1;
    screenui::generated::TypeButton btn_TASK_FIRST_CUT_MM_2;
    screenui::generated::TypeButton btn_TASK_FIRST_CUT_MM_1;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_CALIBRATION_BACK:
                btn_CALIBRATION_BACK.text = text;
                btn_CALIBRATION_BACK.fireChanged();
                break;
            case ::pnl_CALIBRATION_TITLE:
                pnl_CALIBRATION_TITLE.text = text;
                pnl_CALIBRATION_TITLE.fireChanged();
                break;
            case ::btn_CALIBRATION_SAVE:
                btn_CALIBRATION_SAVE.text = text;
                btn_CALIBRATION_SAVE.fireChanged();
                break;
            case ::btn_CALIBRATION_LIST_PROFILE:
                btn_CALIBRATION_LIST_PROFILE.text = text;
                btn_CALIBRATION_LIST_PROFILE.fireChanged();
                break;
            case ::btn_TASK_NAME_1:
                btn_TASK_NAME_1.text = text;
                btn_TASK_NAME_1.fireChanged();
                break;
            case ::btn_TASK_NAME_2:
                btn_TASK_NAME_2.text = text;
                btn_TASK_NAME_2.fireChanged();
                break;
            case ::btn_TASK_NAME_3:
                btn_TASK_NAME_3.text = text;
                btn_TASK_NAME_3.fireChanged();
                break;
            case ::btn_TASK_PRODUCT_MM_1:
                btn_TASK_PRODUCT_MM_1.text = text;
                btn_TASK_PRODUCT_MM_1.fireChanged();
                break;
            case ::btn_TASK_OVER_MM_1:
                btn_TASK_OVER_MM_1.text = text;
                btn_TASK_OVER_MM_1.fireChanged();
                break;
            case ::btn_TASK_FIRST_CUT_MM_2:
                btn_TASK_FIRST_CUT_MM_2.text = text;
                btn_TASK_FIRST_CUT_MM_2.fireChanged();
                break;
            case ::btn_TASK_FIRST_CUT_MM_1:
                btn_TASK_FIRST_CUT_MM_1.text = text;
                btn_TASK_FIRST_CUT_MM_1.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_CALIBRATION_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_CALIBRATION_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_CALIBRATION_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_CALIBRATION_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_CALIBRATION_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_CALIBRATION_SAVE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_CALIBRATION_SAVE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_CALIBRATION_SAVE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_CALIBRATION_SAVE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_CALIBRATION_SAVE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_CALIBRATION_LIST_PROFILE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_CALIBRATION_LIST_PROFILE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_CALIBRATION_LIST_PROFILE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_CALIBRATION_LIST_PROFILE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_CALIBRATION_LIST_PROFILE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_NAME_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_NAME_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_NAME_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_NAME_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_NAME_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_NAME_2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_NAME_2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_NAME_2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_NAME_2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_NAME_2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_NAME_3:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_NAME_3.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_NAME_3.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_NAME_3.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_NAME_3.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_PRODUCT_MM_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_PRODUCT_MM_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_PRODUCT_MM_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_PRODUCT_MM_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_PRODUCT_MM_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_OVER_MM_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_OVER_MM_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_OVER_MM_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_OVER_MM_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_OVER_MM_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_FIRST_CUT_MM_2:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_FIRST_CUT_MM_2.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_FIRST_CUT_MM_2.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_FIRST_CUT_MM_2.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_FIRST_CUT_MM_2.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_TASK_FIRST_CUT_MM_1:
                switch (action) {
                    case ButtonAction_CLICK:  btn_TASK_FIRST_CUT_MM_1.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_TASK_FIRST_CUT_MM_1.onPush.emit();   break;
                    case ButtonAction_POP:    btn_TASK_FIRST_CUT_MM_1.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_TASK_FIRST_CUT_MM_1.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

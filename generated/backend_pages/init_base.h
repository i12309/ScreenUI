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
class InitPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_INIT;
    InitPage()
      : cnt_PAGE_8(this, ::cnt_PAGE_8)
      , cnt_BAR_9(this, ::cnt_BAR_9)
      , pnl_INIT_TITLE(this, ::pnl_INIT_TITLE)
      , btn_INIT_HTTP(this, ::btn_INIT_HTTP)
      , btn_INIT_OK(this, ::btn_INIT_OK)
      , cnt_BUTTON_8(this, ::cnt_BUTTON_8)
      , drp_INIT_MACHINE(this, ::drp_INIT_MACHINE)
      , btn_INIT_GROUP(this, ::btn_INIT_GROUP)
      , btn_INIT_NAME(this, ::btn_INIT_NAME)
      , btn_INIT_ACCESS_POINT(this, ::btn_INIT_ACCESS_POINT)
      , chk_INIT_R_ACCESS_POINT(this, ::chk_INIT_R_ACCESS_POINT)
      , btn_INIT_TEST(this, ::btn_INIT_TEST)
      , chk_INIT_R_TEST(this, ::chk_INIT_R_TEST)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_8;
    screenui::generated::TypeContainer cnt_BAR_9;
    screenui::generated::TypePanel pnl_INIT_TITLE;
    screenui::generated::TypeButton btn_INIT_HTTP;
    screenui::generated::TypeButton btn_INIT_OK;
    screenui::generated::TypeContainer cnt_BUTTON_8;
    screenui::generated::TypeDropdown drp_INIT_MACHINE;
    screenui::generated::TypeButton btn_INIT_GROUP;
    screenui::generated::TypeButton btn_INIT_NAME;
    screenui::generated::TypeButton btn_INIT_ACCESS_POINT;
    screenui::generated::TypeCheckbox chk_INIT_R_ACCESS_POINT;
    screenui::generated::TypeButton btn_INIT_TEST;
    screenui::generated::TypeCheckbox chk_INIT_R_TEST;

private:
    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_INIT_HTTP:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_HTTP.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_HTTP.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_HTTP.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_HTTP.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INIT_OK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_OK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_OK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_OK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_OK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INIT_GROUP:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_GROUP.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_GROUP.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_GROUP.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_GROUP.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INIT_NAME:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_NAME.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_NAME.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_NAME.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_NAME.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INIT_ACCESS_POINT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_ACCESS_POINT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_ACCESS_POINT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_ACCESS_POINT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_ACCESS_POINT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_INIT_TEST:
                switch (action) {
                    case ButtonAction_CLICK:  btn_INIT_TEST.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_INIT_TEST.onPush.emit();   break;
                    case ButtonAction_POP:    btn_INIT_TEST.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_INIT_TEST.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

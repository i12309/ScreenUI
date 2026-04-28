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
class WifiPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_WIFI;
    WifiPage()
      : btn_WIFI_BACK(this, ::btn_WIFI_BACK)
      , pnl_WIFI_TITLE(this, ::pnl_WIFI_TITLE)
      , btn_WIFI_DEL(this, ::btn_WIFI_DEL)
      , btn_WIFI_ADD(this, ::btn_WIFI_ADD)
      , btn_WIFI_SAVE(this, ::btn_WIFI_SAVE)
      , btn_WIFI_SSID_LABEL(this, ::btn_WIFI_SSID_LABEL)
      , drp_WIFI_SSID(this, ::drp_WIFI_SSID)
      , btn_WIFI_RSSI_LABEL(this, ::btn_WIFI_RSSI_LABEL)
      , btn_WIFI_RSSI(this, ::btn_WIFI_RSSI)
      , btn_WIFI_IP_LABEL(this, ::btn_WIFI_IP_LABEL)
      , btn_WIFI_IP(this, ::btn_WIFI_IP)
      , btn_WIFI_AUTO_CONNECT(this, ::btn_WIFI_AUTO_CONNECT)
      , chk_INIT_R_ACCESS_POINT_1(this, ::chk_INIT_R_ACCESS_POINT_1)
      , btn_WIFI_CONNECT(this, ::btn_WIFI_CONNECT)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeButton btn_WIFI_BACK;
    screenui::generated::TypePanel pnl_WIFI_TITLE;
    screenui::generated::TypeButton btn_WIFI_DEL;
    screenui::generated::TypeButton btn_WIFI_ADD;
    screenui::generated::TypeButton btn_WIFI_SAVE;
    screenui::generated::TypeButton btn_WIFI_SSID_LABEL;
    screenui::generated::TypeDropdown drp_WIFI_SSID;
    screenui::generated::TypeButton btn_WIFI_RSSI_LABEL;
    screenui::generated::TypeButton btn_WIFI_RSSI;
    screenui::generated::TypeButton btn_WIFI_IP_LABEL;
    screenui::generated::TypeButton btn_WIFI_IP;
    screenui::generated::TypeButton btn_WIFI_AUTO_CONNECT;
    screenui::generated::TypeCheckbox chk_INIT_R_ACCESS_POINT_1;
    screenui::generated::TypeButton btn_WIFI_CONNECT;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::btn_WIFI_BACK:
                btn_WIFI_BACK.text = text;
                btn_WIFI_BACK.fireChanged();
                break;
            case ::pnl_WIFI_TITLE:
                pnl_WIFI_TITLE.text = text;
                pnl_WIFI_TITLE.fireChanged();
                break;
            case ::btn_WIFI_DEL:
                btn_WIFI_DEL.text = text;
                btn_WIFI_DEL.fireChanged();
                break;
            case ::btn_WIFI_ADD:
                btn_WIFI_ADD.text = text;
                btn_WIFI_ADD.fireChanged();
                break;
            case ::btn_WIFI_SAVE:
                btn_WIFI_SAVE.text = text;
                btn_WIFI_SAVE.fireChanged();
                break;
            case ::btn_WIFI_SSID_LABEL:
                btn_WIFI_SSID_LABEL.text = text;
                btn_WIFI_SSID_LABEL.fireChanged();
                break;
            case ::btn_WIFI_RSSI_LABEL:
                btn_WIFI_RSSI_LABEL.text = text;
                btn_WIFI_RSSI_LABEL.fireChanged();
                break;
            case ::btn_WIFI_RSSI:
                btn_WIFI_RSSI.text = text;
                btn_WIFI_RSSI.fireChanged();
                break;
            case ::btn_WIFI_IP_LABEL:
                btn_WIFI_IP_LABEL.text = text;
                btn_WIFI_IP_LABEL.fireChanged();
                break;
            case ::btn_WIFI_IP:
                btn_WIFI_IP.text = text;
                btn_WIFI_IP.fireChanged();
                break;
            case ::btn_WIFI_AUTO_CONNECT:
                btn_WIFI_AUTO_CONNECT.text = text;
                btn_WIFI_AUTO_CONNECT.fireChanged();
                break;
            case ::btn_WIFI_CONNECT:
                btn_WIFI_CONNECT.text = text;
                btn_WIFI_CONNECT.fireChanged();
                break;
            default: break;
        }
    }

    void onInputInt(uint32_t elementId, int32_t value) final {
        switch (elementId) {
            case ::drp_WIFI_SSID:
                drp_WIFI_SSID.value = value;
                drp_WIFI_SSID.fireChanged();
                break;
            case ::chk_INIT_R_ACCESS_POINT_1:
                chk_INIT_R_ACCESS_POINT_1.value = value;
                chk_INIT_R_ACCESS_POINT_1.fireChanged();
                break;
            default: break;
        }
    }

    void onButton(uint32_t elementId, ButtonAction action) final {
        switch (elementId) {
            case ::btn_WIFI_BACK:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_BACK.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_BACK.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_BACK.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_BACK.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_DEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_DEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_DEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_DEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_DEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_ADD:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_ADD.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_ADD.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_ADD.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_ADD.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_SAVE:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_SAVE.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_SAVE.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_SAVE.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_SAVE.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_SSID_LABEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_SSID_LABEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_SSID_LABEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_SSID_LABEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_SSID_LABEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_RSSI_LABEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_RSSI_LABEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_RSSI_LABEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_RSSI_LABEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_RSSI_LABEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_RSSI:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_RSSI.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_RSSI.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_RSSI.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_RSSI.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_IP_LABEL:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_IP_LABEL.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_IP_LABEL.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_IP_LABEL.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_IP_LABEL.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_IP:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_IP.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_IP.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_IP.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_IP.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_AUTO_CONNECT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_AUTO_CONNECT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_AUTO_CONNECT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_AUTO_CONNECT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_AUTO_CONNECT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            case ::btn_WIFI_CONNECT:
                switch (action) {
                    case ButtonAction_CLICK:  btn_WIFI_CONNECT.onClick.emit();  break;
                    case ButtonAction_PUSH:   btn_WIFI_CONNECT.onPush.emit();   break;
                    case ButtonAction_POP:    btn_WIFI_CONNECT.onPop.emit();    break;
                    case ButtonAction_REPEAT: btn_WIFI_CONNECT.onRepeat.emit(); break;
                    default: break;
                }
                break;
            default: break;
        }
    }
};

}  // namespace screenui

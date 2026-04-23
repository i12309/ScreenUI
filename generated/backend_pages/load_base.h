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
class LoadPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_LOAD;
    LoadPage()
      : pnl_LOAD_MODEL(this, ::pnl_LOAD_MODEL)
      , txt_LOAD_MA_CADDRESS(this, ::txt_LOAD_MA_CADDRESS)
      , txt_LOAD_VERSION(this, ::txt_LOAD_VERSION)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypePanel pnl_LOAD_MODEL;
    screenui::generated::TypeText txt_LOAD_MA_CADDRESS;
    screenui::generated::TypeText txt_LOAD_VERSION;
};

}  // namespace screenui

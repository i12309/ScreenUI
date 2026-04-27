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
class Load0Page : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_LOAD0;
    Load0Page()
      : pnl_LOAD_MODEL_1(this, ::pnl_LOAD_MODEL_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypePanel pnl_LOAD_MODEL_1;

private:
    void onInputText(uint32_t elementId, const char* text) final {
        switch (elementId) {
            case ::pnl_LOAD_MODEL_1:
                pnl_LOAD_MODEL_1.text = text;
                pnl_LOAD_MODEL_1.fireChanged();
                break;
            default: break;
        }
    }
};

}  // namespace screenui

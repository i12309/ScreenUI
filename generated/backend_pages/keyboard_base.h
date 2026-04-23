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
class KeyboardPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_KEYBOARD;
    KeyboardPage()
      : txa_KBD_TEXT(this, ::txa_KBD_TEXT)
      , kbd_KBD_KEY(this, ::kbd_KBD_KEY)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeTextarea txa_KBD_TEXT;
    screenui::generated::TypeKeyboard kbd_KBD_KEY;
};

}  // namespace screenui

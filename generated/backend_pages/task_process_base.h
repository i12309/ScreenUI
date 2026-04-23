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
class TaskProcessPage : public screenlib::IPage {
public:
    static constexpr uint32_t kPageId = scr_TASK_PROCESS;
    TaskProcessPage()
      : cnt_PAGE_1(this, ::cnt_PAGE_1)
      , cnt_BAR_1(this, ::cnt_BAR_1)
      , pnl_TITLE_1(this, ::pnl_TITLE_1)
      , cnt_BUTTON_1(this, ::cnt_BUTTON_1)
    {}
    uint32_t pageId() const final { return kPageId; }

protected:
    screenui::generated::TypeContainer cnt_PAGE_1;
    screenui::generated::TypeContainer cnt_BAR_1;
    screenui::generated::TypePanel pnl_TITLE_1;
    screenui::generated::TypeContainer cnt_BUTTON_1;
};

}  // namespace screenui

// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/IHostPage.h"

#include "../shared/element_ids.generated.h"
#include "../shared/page_ids.generated.h"

namespace screenui {

class LoadBase : public screenlib::IHostPage {
public:
    static constexpr uint32_t kPageId = SCREEN32_PAGE_ID_LOAD;
    uint32_t pageId() const final { return kPageId; }

protected:
private:
};

}  // namespace screenui

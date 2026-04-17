# ScreenUI

`ScreenUI` — репозиторий UI/design package.

Он содержит:
- `eez_project/` как source of truth для EEZ Studio;
- `vendor/lvgl/` как зависимость LVGL;
- `eez_project/src/ui/` как EEZ/LVGL frontend runtime sources;
- `generated/shared/` как generated-метаданные для frontend и backend;
- `generated/frontend_meta/` как frontend-only object map/page-meta слой;
- `adapter/lvgl_eez/` как concrete `IUiAdapter` implementation (`EezLvglAdapter`, `UiObjectMap`);
- `tools/` как tooling для генерации.

Потребители:
- `Screen32` использует:
  - `eez_project/src`
  - `generated/shared`
  - `generated/frontend_meta`
  - `adapter/lvgl_eez`
  - `vendor/lvgl`
- backend-проекты используют только:
  - `generated/shared`

Граница ответственности:
- здесь не должно быть host/business runtime;
- здесь не должно быть ownership протокольного runtime, он живет в `screenLIB`.

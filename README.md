# ScreenUI

`ScreenUI` is the UI/design package repository.

It contains:
- `eez_project/` source-of-truth assets/project files for EEZ Studio.
- `vendor/lvgl/` LVGL dependency.
- `eez_project/src/ui/` EEZ/LVGL frontend runtime sources (input for generators/consumers).
- `generated/shared/` generated metadata used by both frontend and backend.
- `generated/frontend_meta/` generated frontend-only object map/page-meta layer.
- `adapter/lvgl_eez/` concrete `IUiAdapter` implementation (`EezLvglAdapter`, `UiObjectMap`).
- `tools/` generation tooling.

Consumers:
- Frontend project (`Screen32`) uses:
  - `eez_project/src`
  - `generated/shared`
  - `generated/frontend_meta`
  - `adapter/lvgl_eez`
  - `vendor/lvgl`
- Backend projects use only:
  - `generated/shared`

Boundary:
- No host/business runtime here.
- No protocol runtime ownership here (`screenLIB` owns that).

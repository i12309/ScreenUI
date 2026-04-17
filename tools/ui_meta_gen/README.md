# UI Meta Generator

`tools/ui_meta_gen` is a build-time code generation tool.
It is not linked as runtime code.

Input:
- `eez_project/src/ui/screens.h`
- `eez_project/src/ui/screens.c`

Output:
- shared artifacts:
  - `generated/shared/page_ids.generated.h`
  - `generated/shared/element_ids.generated.h`
  - `generated/shared/page_descriptors.generated.h`
  - `generated/shared/element_descriptors.generated.h`
- frontend-only artifacts:
  - `generated/frontend_meta/ui_object_map.generated.h`
  - `generated/frontend_meta/ui_object_map.generated.cpp`
  - `generated/frontend_meta/eez_page_meta.generated.cpp`

Run:

```powershell
python tools/ui_meta_gen/generate_ui_meta.py
```

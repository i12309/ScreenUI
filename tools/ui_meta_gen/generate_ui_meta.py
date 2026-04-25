#!/usr/bin/env python3
"""Генерирует UI meta-layer из исходников EEZ/LVGL UI.

Вход:
- eez_project/src/ui/screens.h
- eez_project/src/ui/screens.c

Выход:
- generated/shared/page_ids.generated.h
- generated/shared/element_ids.generated.h
- generated/shared/page_descriptors.generated.h
- generated/shared/element_descriptors.generated.h
- generated/frontend_meta/ui_object_map.generated.h
- generated/frontend_meta/ui_object_map.generated.cpp
- generated/frontend_meta/eez_page_meta.generated.cpp
"""

from __future__ import annotations

import hashlib
import json
import re
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Set

try:
    import yaml
except ModuleNotFoundError:
    yaml = None

REPO_ROOT = Path(__file__).resolve().parents[2]
UI_DIR = REPO_ROOT / "eez_project" / "src" / "ui"
OUT_SHARED_DIR = REPO_ROOT / "generated" / "shared"
OUT_FRONTEND_META_DIR = REPO_ROOT / "generated" / "frontend_meta"
OUT_BACKEND_PAGES_DIR = REPO_ROOT / "generated" / "backend_pages"

SCREENS_H = UI_DIR / "screens.h"
SCREENS_C = UI_DIR / "screens.c"
EEZ_PROJECT_DIR = UI_DIR.parents[1]
SYNCED_ATTRS_YAML = Path(__file__).resolve().parent / "synced_attrs.yaml"


@dataclass(frozen=True)
class PageInfo:
    """Описание страницы из `screens.h`."""

    enum_name: str
    page_id: int
    object_name: str


@dataclass(frozen=True)
class ElementInfo:
    """Описание элемента с привязкой к странице и LVGL creator-функции."""

    object_name: str
    page_enum: str
    page_id: int
    creator: str
    studio_type: Optional[str] = None


# Полный набор типовых элементов (ориентир: палитра LVGL/Studio из задачи).
ELEMENT_TYPES: List[tuple[str, int]] = [
    ("TYPE_UNKNOWN", 0),
    ("TYPE_ARC", 1),
    ("TYPE_BUTTON", 2),
    ("TYPE_BUTTON_MATRIX", 3),
    ("TYPE_CONTAINER", 4),
    ("TYPE_IMAGE", 5),
    ("TYPE_TEXT", 6),
    ("TYPE_LIST", 7),
    ("TYPE_MENU", 8),
    ("TYPE_MESSAGE_BOX", 9),
    ("TYPE_QR_CODE", 10),
    ("TYPE_PANEL", 11),
    ("TYPE_SPAN", 12),
    ("TYPE_TABLE", 13),
    ("TYPE_TAB_VIEW", 14),
    ("TYPE_TAB", 15),
    ("TYPE_TEXTAREA", 16),
    ("TYPE_TILE_VIEW", 17),
    ("TYPE_WINDOW", 18),
    ("TYPE_CALENDAR", 19),
    ("TYPE_CHECKBOX", 20),
    ("TYPE_DROPDOWN", 21),
    ("TYPE_IMAGE_BUTTON", 22),
    ("TYPE_KEYBOARD", 23),
    ("TYPE_ROLLER", 24),
    ("TYPE_SPINBOX", 25),
    ("TYPE_SLIDER", 26),
    ("TYPE_SWITCH", 27),
    ("TYPE_ANIMATION_IMAGE", 28),
    ("TYPE_BAR", 29),
    ("TYPE_CHART", 30),
    ("TYPE_CANVAS", 31),
    ("TYPE_LED", 32),
    ("TYPE_LINE", 33),
    ("TYPE_LOTTIE", 34),
    ("TYPE_SCALE", 35),
    ("TYPE_SPINNER", 36),
]

# Короткие и читаемые префиксы для element id (btn_..., txt_..., pnl_...).
ELEMENT_TYPE_PREFIXES: Dict[str, str] = {
    "TYPE_UNKNOWN": "obj",
    "TYPE_ARC": "arc",
    "TYPE_BUTTON": "btn",
    "TYPE_BUTTON_MATRIX": "bmx",
    "TYPE_CONTAINER": "cnt",
    "TYPE_IMAGE": "img",
    "TYPE_TEXT": "txt",
    "TYPE_LIST": "lst",
    "TYPE_MENU": "mnu",
    "TYPE_MESSAGE_BOX": "msg",
    "TYPE_QR_CODE": "qrc",
    "TYPE_PANEL": "pnl",
    "TYPE_SPAN": "spn",
    "TYPE_TABLE": "tbl",
    "TYPE_TAB_VIEW": "tbv",
    "TYPE_TAB": "tab",
    "TYPE_TEXTAREA": "txa",
    "TYPE_TILE_VIEW": "tlv",
    "TYPE_WINDOW": "win",
    "TYPE_CALENDAR": "cal",
    "TYPE_CHECKBOX": "chk",
    "TYPE_DROPDOWN": "drp",
    "TYPE_IMAGE_BUTTON": "ibtn",
    "TYPE_KEYBOARD": "kbd",
    "TYPE_ROLLER": "rlr",
    "TYPE_SPINBOX": "spb",
    "TYPE_SLIDER": "sld",
    "TYPE_SWITCH": "swt",
    "TYPE_ANIMATION_IMAGE": "ani",
    "TYPE_BAR": "bar",
    "TYPE_CHART": "cht",
    "TYPE_CANVAS": "cnv",
    "TYPE_LED": "led",
    "TYPE_LINE": "lin",
    "TYPE_LOTTIE": "lot",
    "TYPE_SCALE": "scl",
    "TYPE_SPINNER": "spi",
}

# Маппинг creator-функций LVGL в типы генератора.
CREATOR_TO_TYPE: Dict[str, str] = {
    "lv_arc": "TYPE_ARC",
    "lv_button": "TYPE_BUTTON",
    "lv_btn": "TYPE_BUTTON",
    "lv_buttonmatrix": "TYPE_BUTTON_MATRIX",
    "lv_btnmatrix": "TYPE_BUTTON_MATRIX",
    "lv_image": "TYPE_IMAGE",
    "lv_img": "TYPE_IMAGE",
    "lv_label": "TYPE_TEXT",
    "lv_list": "TYPE_LIST",
    "lv_menu": "TYPE_MENU",
    "lv_msgbox": "TYPE_MESSAGE_BOX",
    "lv_qrcode": "TYPE_QR_CODE",
    "lv_span": "TYPE_SPAN",
    "lv_table": "TYPE_TABLE",
    "lv_tabview": "TYPE_TAB_VIEW",
    "lv_textarea": "TYPE_TEXTAREA",
    "lv_tileview": "TYPE_TILE_VIEW",
    "lv_win": "TYPE_WINDOW",
    "lv_calendar": "TYPE_CALENDAR",
    "lv_checkbox": "TYPE_CHECKBOX",
    "lv_dropdown": "TYPE_DROPDOWN",
    "lv_imagebutton": "TYPE_IMAGE_BUTTON",
    "lv_imgbutton": "TYPE_IMAGE_BUTTON",
    "lv_imgbtn": "TYPE_IMAGE_BUTTON",
    "lv_keyboard": "TYPE_KEYBOARD",
    "lv_roller": "TYPE_ROLLER",
    "lv_spinbox": "TYPE_SPINBOX",
    "lv_slider": "TYPE_SLIDER",
    "lv_switch": "TYPE_SWITCH",
    "lv_animimg": "TYPE_ANIMATION_IMAGE",
    "lv_bar": "TYPE_BAR",
    "lv_chart": "TYPE_CHART",
    "lv_canvas": "TYPE_CANVAS",
    "lv_led": "TYPE_LED",
    "lv_line": "TYPE_LINE",
    "lv_lottie": "TYPE_LOTTIE",
    "lv_scale": "TYPE_SCALE",
    "lv_spinner": "TYPE_SPINNER",
}

TEXT_CAPABLE_TYPES = {
    "TYPE_BUTTON",
    "TYPE_BUTTON_MATRIX",
    "TYPE_CHECKBOX",
    "TYPE_CONTAINER",
    "TYPE_DROPDOWN",
    "TYPE_LIST",
    "TYPE_MENU",
    "TYPE_MESSAGE_BOX",
    "TYPE_PANEL",
    "TYPE_QR_CODE",
    "TYPE_SPAN",
    "TYPE_TAB",
    "TYPE_TAB_VIEW",
    "TYPE_TEXT",
    "TYPE_TEXTAREA",
    "TYPE_WINDOW",
}
VALUE_CAPABLE_TYPES = {
    "TYPE_ARC",
    "TYPE_BAR",
    "TYPE_CALENDAR",
    "TYPE_CHECKBOX",
    "TYPE_DROPDOWN",
    "TYPE_ROLLER",
    "TYPE_SLIDER",
    "TYPE_SPINBOX",
    "TYPE_SWITCH",
}
BUTTON_EVENT_TYPES = {"TYPE_BUTTON", "TYPE_BUTTON_MATRIX", "TYPE_IMAGE_BUTTON", "TYPE_TAB"}
INPUT_EVENT_TYPES = VALUE_CAPABLE_TYPES | {"TYPE_KEYBOARD", "TYPE_TEXTAREA"}
TEXT_INPUT_TYPES = {"TYPE_KEYBOARD", "TYPE_TEXTAREA"}

# Точное сопоставление типов виджетов Studio -> типы генератора.
STUDIO_WIDGET_TO_ELEMENT_TYPE: Dict[str, str] = {
    "LVGLContainerWidget": "TYPE_CONTAINER",
    "LVGLPanelWidget": "TYPE_PANEL",
}

# Маппинг имени атрибута из synced_attrs.yaml -> значение enum ElementAttribute
# из screenLIB/lib/core/src/proto/machine.proto. Не менять без синхронного
# обновления proto.
ATTRIBUTE_NAME_TO_ENUM_VALUE: Dict[str, int] = {
    "width":        1,   # ELEMENT_ATTRIBUTE_POSITION_WIDTH
    "height":       2,   # ELEMENT_ATTRIBUTE_POSITION_HEIGHT
    "bg_color":     3,   # ELEMENT_ATTRIBUTE_BACKGROUND_COLOR
    "border_color": 4,   # ELEMENT_ATTRIBUTE_BORDER_COLOR
    "border_width": 5,   # ELEMENT_ATTRIBUTE_BORDER_WIDTH
    "text_color":   6,   # ELEMENT_ATTRIBUTE_TEXT_COLOR
    "text_font":    7,   # ELEMENT_ATTRIBUTE_TEXT_FONT
    "visible":      8,   # ELEMENT_ATTRIBUTE_VISIBLE
    "text":         9,   # ELEMENT_ATTRIBUTE_TEXT
    "value":        10,  # ELEMENT_ATTRIBUTE_VALUE
    "x":            11,  # ELEMENT_ATTRIBUTE_X
    "y":            12,  # ELEMENT_ATTRIBUTE_Y
}

ATTRIBUTE_CPP_SPEC: Dict[str, tuple[str, str, str]] = {
    "width":        ("int32_t",     "ELEMENT_ATTRIBUTE_POSITION_WIDTH",  "width"),
    "height":       ("int32_t",     "ELEMENT_ATTRIBUTE_POSITION_HEIGHT", "height"),
    "x":            ("int32_t",     "ELEMENT_ATTRIBUTE_X",               "x"),
    "y":            ("int32_t",     "ELEMENT_ATTRIBUTE_Y",               "y"),
    "bg_color":     ("uint32_t",    "ELEMENT_ATTRIBUTE_BACKGROUND_COLOR","bgColor"),
    "border_color": ("uint32_t",    "ELEMENT_ATTRIBUTE_BORDER_COLOR",    "borderColor"),
    "border_width": ("int32_t",     "ELEMENT_ATTRIBUTE_BORDER_WIDTH",    "borderWidth"),
    "text":         ("const char*", "ELEMENT_ATTRIBUTE_TEXT",            "text"),
    "text_color":   ("uint32_t",    "ELEMENT_ATTRIBUTE_TEXT_COLOR",      "textColor"),
    "text_font":    ("ElementFont", "ELEMENT_ATTRIBUTE_TEXT_FONT",       "font"),
    "value":        ("int32_t",     "ELEMENT_ATTRIBUTE_VALUE",           "value"),
    "visible":      ("bool",        "ELEMENT_ATTRIBUTE_VISIBLE",         "visible"),
}

ELEMENT_BASE_ATTRIBUTES = {"visible", "width", "height"}


@dataclass(frozen=True)
class SyncedAttrsConfig:
    """Распаршенный synced_attrs.yaml: какие атрибуты у какого типа synced."""

    defaults: tuple[str, ...]
    by_type: Dict[str, tuple[str, ...]]

    def synced_names_for(self, type_name: str) -> List[str]:
        """Вернёт имена synced-атрибутов для типа (с дефолтами, с сохранением порядка)."""

        ordered: List[str] = []
        seen: Set[str] = set()
        for name in (*self.defaults, *self.by_type.get(type_name, ())):
            if name in seen:
                continue
            ordered.append(name)
            seen.add(name)
        return ordered

    def synced_mask_for(self, type_name: str) -> int:
        """Битовая маска synced-атрибутов по enum ElementAttribute."""

        mask = 0
        for name in self.synced_names_for(type_name):
            value = ATTRIBUTE_NAME_TO_ENUM_VALUE.get(name)
            if value is None:
                raise RuntimeError(
                    f"synced_attrs.yaml: unknown attribute name '{name}' for type {type_name}"
                )
            mask |= (1 << value)
        return mask


def parse_simple_yaml_mapping(text: str) -> Dict[str, List[str]]:
    """Parse the limited YAML subset used by synced_attrs.yaml.

    Supported forms:
    - `key: [a, b, c]`
    - `key:` followed by indented `- value` items
    - blank lines and `#` comments
    """

    result: Dict[str, List[str]] = {}
    current_key: Optional[str] = None

    for line_no, raw_line in enumerate(text.splitlines(), start=1):
        content = raw_line.split("#", 1)[0].rstrip()
        if not content.strip():
            continue

        stripped = content.lstrip()
        if stripped.startswith("-"):
            if current_key is None:
                raise RuntimeError(
                    f"synced_attrs.yaml:{line_no}: list item without a preceding key"
                )
            item = stripped[1:].strip()
            if not item:
                raise RuntimeError(
                    f"synced_attrs.yaml:{line_no}: empty list item is not supported"
                )
            result[current_key].append(item)
            continue

        if ":" not in stripped:
            raise RuntimeError(
                f"synced_attrs.yaml:{line_no}: expected `key: value` mapping entry"
            )

        key, raw_value = stripped.split(":", 1)
        key = key.strip()
        value = raw_value.strip()
        if not key:
            raise RuntimeError(f"synced_attrs.yaml:{line_no}: empty key")

        current_key = None
        if not value:
            result[key] = []
            current_key = key
            continue

        if value.startswith("[") and value.endswith("]"):
            inner = value[1:-1].strip()
            result[key] = [] if not inner else [part.strip() for part in inner.split(",")]
            continue

        raise RuntimeError(
            f"synced_attrs.yaml:{line_no}: unsupported value format `{value}`"
        )

    return result


def load_synced_attrs(path: Path = SYNCED_ATTRS_YAML) -> SyncedAttrsConfig:
    """Читает synced_attrs.yaml и возвращает типизированную конфигурацию."""

    text = read_text(path)
    raw = yaml.safe_load(text) if yaml is not None else parse_simple_yaml_mapping(text)
    if not isinstance(raw, dict):
        raise RuntimeError(f"synced_attrs.yaml: top-level must be a mapping")

    raw_defaults = raw.get("defaults") or []
    if not isinstance(raw_defaults, list):
        raise RuntimeError("synced_attrs.yaml: defaults must be a list")
    defaults = tuple(raw_defaults)

    by_type: Dict[str, tuple[str, ...]] = {}
    known_types = {name for name, _ in ELEMENT_TYPES}
    for key, value in raw.items():
        if key == "defaults":
            continue
        if key not in known_types:
            raise RuntimeError(
                f"synced_attrs.yaml: unknown element type '{key}' "
                f"(not in Screen32ElementType)"
            )
        if not isinstance(value, list):
            raise RuntimeError(
                f"synced_attrs.yaml: value for '{key}' must be a list"
            )
        by_type[key] = tuple(value)

    # Проверим, что все упомянутые имена атрибутов нам известны.
    all_names = set(defaults)
    for names in by_type.values():
        all_names.update(names)
    unknown = all_names - set(ATTRIBUTE_NAME_TO_ENUM_VALUE.keys())
    if unknown:
        raise RuntimeError(
            f"synced_attrs.yaml: unknown attribute names: {sorted(unknown)}"
        )

    return SyncedAttrsConfig(defaults=defaults, by_type=by_type)


def read_text(path: Path) -> str:
    if not path.exists():
        raise FileNotFoundError(f"Missing required input file: {path}")
    return path.read_text(encoding="utf-8")


def find_eez_project_file() -> Optional[Path]:
    """Находит основной `.eez-project` файл в каталоге `eez_project`."""

    candidates = sorted(EEZ_PROJECT_DIR.glob("*.eez-project"))
    return candidates[0] if candidates else None


def normalize_identifier(identifier: str) -> str:
    """Приводит identifier из Studio к виду имён объектов из `screens.*`."""

    snake = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", identifier)
    snake = re.sub(r"[^A-Za-z0-9]+", "_", snake).strip("_")
    return snake.lower()


def _walk_widgets(node: object, out: Dict[str, str]) -> None:
    """Рекурсивно собирает identifier -> element type из JSON дерева проекта."""

    if isinstance(node, dict):
        raw_identifier = node.get("identifier")
        raw_widget_type = node.get("type")
        if isinstance(raw_identifier, str) and isinstance(raw_widget_type, str):
            mapped = STUDIO_WIDGET_TO_ELEMENT_TYPE.get(raw_widget_type)
            if mapped is not None:
                out[normalize_identifier(raw_identifier)] = mapped

        for value in node.values():
            _walk_widgets(value, out)
        return

    if isinstance(node, list):
        for item in node:
            _walk_widgets(item, out)


def parse_studio_widget_hints() -> Dict[str, str]:
    """Читает `.eez-project` и возвращает подсказки по типам элементов."""

    project_file = find_eez_project_file()
    if project_file is None:
        return {}

    try:
        data = json.loads(read_text(project_file))
    except Exception:
        # Генератор не должен падать из-за вспомогательных подсказок.
        return {}

    hints: Dict[str, str] = {}
    _walk_widgets(data, hints)
    return hints


def to_object_name(page_enum_name: str) -> str:
    if not page_enum_name.startswith("SCREEN_ID_"):
        raise ValueError(f"Invalid page enum name: {page_enum_name}")
    return page_enum_name[len("SCREEN_ID_") :].lower()


def to_create_function(page_enum_name: str) -> str:
    return f"create_screen_{to_object_name(page_enum_name)}"


def is_auto_generated_object_name(object_name: str) -> bool:
    """Возвращает True для служебных имён Studio/LVGL вида `obj0`, `obj1`, ..."""

    return re.fullmatch(r"obj\d+", object_name) is not None


def parse_pages_and_objects(screens_h: str) -> tuple[List[PageInfo], List[str]]:
    pages: List[PageInfo] = []
    objects: List[str] = []

    enum_re = re.compile(r"^\s*(SCREEN_ID_[A-Z0-9_]+)\s*=\s*(\d+)\s*,\s*$")
    object_re = re.compile(r"^\s*lv_obj_t\s*\*\s*([A-Za-z_][A-Za-z0-9_]*)\s*;\s*$")

    in_enum = False
    in_struct = False
    for raw_line in screens_h.splitlines():
        line = raw_line.strip()

        if line.startswith("enum ScreensEnum"):
            in_enum = True
            continue
        if in_enum:
            if line.startswith("};"):
                in_enum = False
                continue
            match = enum_re.match(raw_line)
            if match:
                enum_name = match.group(1)
                if enum_name.startswith("_SCREEN_ID_"):
                    continue
                page_id = int(match.group(2))
                pages.append(PageInfo(enum_name=enum_name, page_id=page_id, object_name=to_object_name(enum_name)))
            continue

        if line.startswith("typedef struct _objects_t"):
            in_struct = True
            continue
        if in_struct:
            if line.startswith("} objects_t;"):
                in_struct = False
                continue
            match = object_re.match(raw_line)
            if match:
                objects.append(match.group(1))

    if not pages:
        raise RuntimeError("Failed to parse page enum from screens.h")
    if not objects:
        raise RuntimeError("Failed to parse objects struct from screens.h")

    return pages, objects


def parse_object_assignments(
    screens_c: str,
    pages: List[PageInfo],
    studio_type_hints: Optional[Dict[str, str]] = None,
) -> Dict[str, ElementInfo]:
    func_to_page: Dict[str, PageInfo] = {to_create_function(p.enum_name): p for p in pages}
    hints = studio_type_hints or {}

    current_page: PageInfo | None = None
    current_creator = "lv_obj"

    fn_re = re.compile(r"^\s*void\s+(create_screen_[a-zA-Z0-9_]+)\s*\(")
    creator_re = re.compile(r"\blv_obj_t\s*\*\s*obj\s*=\s*([a-zA-Z0-9_]+)_create\s*\(")
    assign_re = re.compile(r"\bobjects\.([A-Za-z_][A-Za-z0-9_]*)\s*=\s*obj\s*;")

    out: Dict[str, ElementInfo] = {}
    for raw_line in screens_c.splitlines():
        fn_match = fn_re.match(raw_line)
        if fn_match:
            fn_name = fn_match.group(1)
            current_page = func_to_page.get(fn_name)
            current_creator = "lv_obj"
            continue

        creator_match = creator_re.search(raw_line)
        if creator_match:
            current_creator = creator_match.group(1)

        assign_match = assign_re.search(raw_line)
        if assign_match and current_page is not None:
            obj_name = assign_match.group(1)
            out[obj_name] = ElementInfo(
                object_name=obj_name,
                page_enum=current_page.enum_name,
                page_id=current_page.page_id,
                creator=current_creator,
                studio_type=hints.get(obj_name),
            )

    return out


def normalize_element_name(object_name: str) -> str:
    return re.sub(r"[^A-Za-z0-9]+", "_", object_name).strip("_").upper()


def make_page_enum_name(page_enum_name: str) -> str:
    """Формирует читаемое имя страницы в стиле `scr_MAIN_MENU`."""

    if not page_enum_name.startswith("SCREEN_ID_"):
        raise ValueError(f"Invalid page enum name: {page_enum_name}")
    return f"scr_{page_enum_name[len('SCREEN_ID_') :]}"


def infer_lv_obj_kind(object_name: str) -> str:
    """Уточняет тип для `lv_obj` по имени объекта (panel/container)."""

    lowered = object_name.lower()
    if lowered.startswith(("c_", "cnt_", "container_")):
        return "TYPE_CONTAINER"
    if lowered.startswith(("p_", "pnl_", "panel_")):
        return "TYPE_PANEL"
    return "TYPE_CONTAINER"


def infer_element_type(element: ElementInfo) -> str:
    """Определяет тип элемента по creator-функции LVGL."""

    if element.studio_type is not None:
        return element.studio_type

    creator = element.creator
    if creator in CREATOR_TO_TYPE:
        return CREATOR_TO_TYPE[creator]
    if creator == "lv_obj":
        return infer_lv_obj_kind(element.object_name)
    return "TYPE_CONTAINER"


def strip_known_prefix(object_name: str, element_type: str) -> str:
    """Удаляет устаревшие короткие префиксы из имени Studio, если они совпали с типом."""

    by_type: Dict[str, tuple[str, ...]] = {
        "TYPE_BUTTON": ("b_", "btn_"),
        "TYPE_PANEL": ("p_", "pnl_", "panel_"),
        "TYPE_CONTAINER": ("c_", "cnt_", "container_"),
        "TYPE_TEXT": ("t_", "txt_", "lbl_", "label_"),
        "TYPE_IMAGE": ("i_", "img_"),
        "TYPE_IMAGE_BUTTON": ("ib_", "ibtn_", "imgbtn_"),
        "TYPE_TEXTAREA": ("ta_", "txa_", "textarea_"),
    }
    lowered = object_name.lower()
    for pref in by_type.get(element_type, ()):
        if lowered.startswith(pref):
            return object_name[len(pref) :]
    return object_name


def make_element_enum_name(object_name: str, element_type: str) -> str:
    """Формирует читаемое имя элемента в стиле `btn_MAIN_TASK`, `txt_VERSION`."""

    prefix = ELEMENT_TYPE_PREFIXES.get(element_type, ELEMENT_TYPE_PREFIXES["TYPE_UNKNOWN"])
    base_name = strip_known_prefix(object_name, element_type)
    normalized = normalize_element_name(base_name)
    if not normalized:
        normalized = normalize_element_name(object_name)
    return f"{prefix}_{normalized}"


def stable_element_id(object_name: str, used_ids: set[int]) -> int:
    # Стабилизируем ID по хэшу имени объекта; редкие коллизии разрешаем детерминированно.
    seed = f"screen32:element:{object_name}"
    counter = 0
    while True:
        material = seed if counter == 0 else f"{seed}#{counter}"
        digest = hashlib.sha1(material.encode("utf-8")).digest()
        candidate = int.from_bytes(digest[:4], byteorder="big") & 0x1FFFFFFF
        candidate |= 0x20000000
        if candidate not in used_ids:
            used_ids.add(candidate)
            return candidate
        counter += 1


def infer_type_and_flags(element: ElementInfo) -> tuple[str, Dict[str, bool]]:
    """Возвращает тип элемента и capability-флаги для runtime/adapter слоя."""

    element_type = infer_element_type(element)
    flags = {
        "supports_text": element_type in TEXT_CAPABLE_TYPES,
        "supports_value": element_type in VALUE_CAPABLE_TYPES,
        "supports_visible": True,
        "supports_color": True,
        "emits_button_event": element_type in BUTTON_EVENT_TYPES,
        "emits_input_event": element_type in INPUT_EVENT_TYPES,
    }
    if element_type in {"TYPE_PANEL", "TYPE_CONTAINER"}:
        # Для контейнеров сохраняем прежнее поведение: текст через вложенный label.
        flags["supports_text"] = True
    return element_type, flags


def render_page_ids_header(pages: List[PageInfo]) -> str:
    lines = [
        "#pragma once",
        "",
        "#include <stdint.h>",
        "",
        "#ifdef __cplusplus",
        "extern \"C\" {",
        "#endif",
        "",
        "typedef enum Screen32PageId {",
    ]
    for page in pages:
        lines.append(f"    {make_page_enum_name(page.enum_name)} = {page.page_id},")
    lines.extend(
        [
            "} Screen32PageId;",
            "",
            f"#define SCREEN32_PAGE_DESCRIPTOR_COUNT {len(pages)}",
            "",
            "#ifdef __cplusplus",
            "}",
            "#endif",
            "",
        ]
    )
    return "\n".join(lines)


def render_element_ids_header(
    element_order: List[str],
    element_map: Dict[str, ElementInfo],
    element_ids: Dict[str, int],
) -> str:
    lines = [
        "#pragma once",
        "",
        "#include <stdint.h>",
        "",
        "#ifdef __cplusplus",
        "extern \"C\" {",
        "#endif",
        "",
        "typedef enum Screen32ElementId {",
    ]
    for name in element_order:
        enum_name = make_element_enum_name(name, infer_element_type(element_map[name]))
        lines.append(f"    {enum_name} = {element_ids[name]}u,")
    lines.extend(
        [
            "} Screen32ElementId;",
            "",
            f"#define SCREEN32_ELEMENT_DESCRIPTOR_COUNT {len(element_order)}",
            "",
            "#ifdef __cplusplus",
            "}",
            "#endif",
            "",
        ]
    )
    return "\n".join(lines)


def render_page_descriptors_header(pages: List[PageInfo]) -> str:
    lines = [
        "#pragma once",
        "",
        "#include <stddef.h>",
        "#include <stdint.h>",
        "",
        "#include \"page_ids.generated.h\"",
        "",
        "#ifdef __cplusplus",
        "extern \"C\" {",
        "#endif",
        "",
        "typedef struct Screen32PageDescriptor {",
        "    uint32_t page_id;",
        "    const char* page_name;",
        "    const char* object_name;",
        "} Screen32PageDescriptor;",
        "",
        "static const Screen32PageDescriptor g_screen32_page_descriptors[SCREEN32_PAGE_DESCRIPTOR_COUNT] = {",
    ]
    for page in pages:
        short_name = page.enum_name[len("SCREEN_ID_") :]
        lines.append(
            f"    {{{page.page_id}u, \"{short_name}\", \"{page.object_name}\"}},"
        )
    lines.extend(
        [
            "};",
            "",
            "static inline size_t screen32_page_descriptor_count(void) {",
            "    return (size_t)SCREEN32_PAGE_DESCRIPTOR_COUNT;",
            "}",
            "",
            "static inline const Screen32PageDescriptor* screen32_find_page_descriptor(uint32_t page_id) {",
            "    for (size_t i = 0; i < screen32_page_descriptor_count(); ++i) {",
            "        if (g_screen32_page_descriptors[i].page_id == page_id) {",
            "            return &g_screen32_page_descriptors[i];",
            "        }",
            "    }",
            "    return 0;",
            "}",
            "",
            "#ifdef __cplusplus",
            "}",
            "#endif",
            "",
        ]
    )
    return "\n".join(lines)


def render_element_descriptors_header(
    element_order: List[str],
    element_map: Dict[str, ElementInfo],
    element_ids: Dict[str, int],
    synced_attrs: SyncedAttrsConfig,
) -> str:
    lines = [
        "#pragma once",
        "",
        "#include <stdbool.h>",
        "#include <stddef.h>",
        "#include <stdint.h>",
        "",
        "#include \"element_ids.generated.h\"",
        "#include \"page_ids.generated.h\"",
        "",
        "#ifdef __cplusplus",
        "extern \"C\" {",
        "#endif",
        "",
        "typedef enum Screen32ElementType {",
    ]
    for type_name, type_value in ELEMENT_TYPES:
        lines.append(f"    {type_name} = {type_value},")
    lines.extend(
        [
        "} Screen32ElementType;",
        "",
        "typedef struct Screen32ElementDescriptor {",
        "    uint32_t element_id;",
        "    const char* element_name;",
        "    const char* object_name;",
        "    uint32_t page_id;",
        "    const char* page_name;",
        "    Screen32ElementType element_type;",
        "    bool supports_text;",
        "    bool supports_value;",
        "    bool supports_visible;",
        "    bool supports_color;",
        "    bool emits_button_event;",
        "    bool emits_input_event;",
        "    // Битовая маска synced-атрибутов. Бит i установлен, если атрибут",
        "    // с значением enum ElementAttribute = i синхронизируется.",
        "    // Определяется tools/ui_meta_gen/synced_attrs.yaml.",
        "    uint16_t synced_mask;",
        "} Screen32ElementDescriptor;",
        "",
        "static const Screen32ElementDescriptor g_screen32_element_descriptors[SCREEN32_ELEMENT_DESCRIPTOR_COUNT] = {",
    ])

    for name in element_order:
        info = element_map[name]
        elem_type, flags = infer_type_and_flags(info)
        page_short = info.page_enum[len("SCREEN_ID_") :]
        synced_mask = synced_attrs.synced_mask_for(elem_type)
        lines.append(
            "    "
            + "{"
            + f"{element_ids[name]}u, "
            + f"\"{make_element_enum_name(name, elem_type)}\", "
            + f"\"{name}\", "
            + f"{info.page_id}u, "
            + f"\"{page_short}\", "
            + f"{elem_type}, "
            + f"{str(flags['supports_text']).lower()}, "
            + f"{str(flags['supports_value']).lower()}, "
            + f"{str(flags['supports_visible']).lower()}, "
            + f"{str(flags['supports_color']).lower()}, "
            + f"{str(flags['emits_button_event']).lower()}, "
            + f"{str(flags['emits_input_event']).lower()}, "
            + f"0x{synced_mask:04X}u"
            + "},"
        )

    lines.extend(
        [
            "};",
            "",
            "static inline size_t screen32_element_descriptor_count(void) {",
            "    return (size_t)SCREEN32_ELEMENT_DESCRIPTOR_COUNT;",
            "}",
            "",
            "static inline const Screen32ElementDescriptor* screen32_find_element_descriptor(uint32_t element_id) {",
            "    for (size_t i = 0; i < screen32_element_descriptor_count(); ++i) {",
            "        if (g_screen32_element_descriptors[i].element_id == element_id) {",
            "            return &g_screen32_element_descriptors[i];",
            "        }",
            "    }",
            "    return 0;",
            "}",
            "",
            "#ifdef __cplusplus",
            "}",
            "#endif",
            "",
        ]
    )
    return "\n".join(lines)


def to_pascal_case(snake: str) -> str:
    parts = re.split(r"[^A-Za-z0-9]+", snake)
    return "".join(p[:1].upper() + p[1:].lower() for p in parts if p)


def page_class_name(page: PageInfo) -> str:
    # main_menu -> MainMenu
    return to_pascal_case(page.object_name)


def page_template_class_name(page: PageInfo) -> str:
    return page_class_name(page) + "Page"


def element_type_class_name(type_name: str) -> str:
    parts = type_name[len("TYPE_") :].lower().split("_")
    return "Type" + "".join(p[:1].upper() + p[1:] for p in parts)


def element_member_name(info: ElementInfo) -> str:
    return make_element_enum_name(info.object_name, infer_element_type(info))


def element_handler_suffix(object_name: str) -> str:
    # b_main_task -> BMainTask
    return to_pascal_case(object_name)


def render_element_types_header(
    synced_attrs: SyncedAttrsConfig,
    used_types: Set[str],
) -> str:
    ordered_used_types = [name for name, _ in ELEMENT_TYPES if name in used_types]

    lines = [
        "#pragma once",
        "",
        "#include <stdint.h>",
        "",
        "#include \"pages/Element.h\"",
        "",
        "namespace screenui::generated {",
        "",
        "class TypeGeneric : public screenlib::ElementBase {",
        "public:",
        "    using screenlib::ElementBase::ElementBase;",
        "};",
        "",
    ]

    for type_name in ordered_used_types:
        class_name = element_type_class_name(type_name)
        attrs = [
            name
            for name in synced_attrs.synced_names_for(type_name)
            if name not in ELEMENT_BASE_ATTRIBUTES
        ]
        emits_click = type_name in BUTTON_EVENT_TYPES

        lines.append(f"class {class_name} : public screenlib::ElementBase {{")
        lines.append("public:")

        if attrs:
            lines.append(f"    {class_name}(screenlib::IPage* page, uint32_t id)")
            lines.append("      : ElementBase(page, id)")
            for attr_name in attrs:
                spec = ATTRIBUTE_CPP_SPEC.get(attr_name)
                if spec is None:
                    raise RuntimeError(
                        f"render_element_types_header: unsupported attribute '{attr_name}' for {type_name}"
                    )
                field_name = spec[2]
                lines.append(f"      , {field_name}(page, id)")
            lines.append("    {}")
        else:
            lines.append("    using screenlib::ElementBase::ElementBase;")

        lines.append("")

        for attr_name in attrs:
            cpp_type, enum_name, field_name = ATTRIBUTE_CPP_SPEC[attr_name]
            lines.append(f"    screenlib::Property<{cpp_type}, {enum_name}> {field_name};")
        if emits_click:
            lines.append("    screenlib::Signal<> onClick;")
            lines.append("    screenlib::Signal<> onPush;")
            lines.append("    screenlib::Signal<> onPop;")
            lines.append("    screenlib::Signal<> onRepeat;")

        if not attrs and not emits_click:
            lines.append("    // Тип не имеет дополнительных synced-полей сверх ElementBase.")

        lines.append("};")
        lines.append("")

    lines.append("}  // namespace screenui::generated")
    lines.append("")
    return "\n".join(lines)


def render_page_base_header(
    page: PageInfo,
    page_elements: List[ElementInfo],
    element_ids: Dict[str, int],
    synced_attrs: SyncedAttrsConfig,
) -> str:
    cls = page_template_class_name(page)
    page_id_macro = make_page_enum_name(page.enum_name)
    buttons = [
        info for info in page_elements if infer_element_type(info) in BUTTON_EVENT_TYPES
    ]

    lines = [
        "#pragma once",
        "",
        "#include <stdint.h>",
        "",
        "#include \"runtime/PageRuntime.h\"",
        "#include \"element_types.generated.h\"",
        "",
        "#include \"../shared/element_ids.generated.h\"",
        "#include \"../shared/page_ids.generated.h\"",
        "",
        "namespace screenui {",
        "",
        "template <typename TPage>",
        f"class {cls} : public screenlib::IPage {{",
        "public:",
        f"    static constexpr uint32_t kPageId = {page_id_macro};",
    ]

    if page_elements:
        lines.append(f"    {cls}()")
        for index, info in enumerate(page_elements):
            member_name = element_member_name(info)
            prefix = ":" if index == 0 else ","
            lines.append(f"      {prefix} {member_name}(this, ::{member_name})")
        lines.append("    {}")
    else:
        lines.append(f"    {cls}() = default;")

    lines.extend(
        [
        f"    uint32_t pageId() const final {{ return kPageId; }}",
        "",
        "protected:",
        ]
    )

    for info in page_elements:
        element_type = infer_element_type(info)
        _ = synced_attrs.synced_names_for(element_type)
        member_name = element_member_name(info)
        type_class = element_type_class_name(element_type)
        lines.append(f"    screenui::generated::{type_class} {member_name};")

    if buttons:
        lines.extend(["", "private:"])
        lines.append("    void onButton(uint32_t elementId, ButtonAction action) final {")
        lines.append("        switch (elementId) {")
        for info in buttons:
            member_name = element_member_name(info)
            lines.append(f"            case ::{member_name}:")
            lines.append("                switch (action) {")
            lines.append(f"                    case ButtonAction_CLICK:  {member_name}.onClick.emit();  break;")
            lines.append(f"                    case ButtonAction_PUSH:   {member_name}.onPush.emit();   break;")
            lines.append(f"                    case ButtonAction_POP:    {member_name}.onPop.emit();    break;")
            lines.append(f"                    case ButtonAction_REPEAT: {member_name}.onRepeat.emit(); break;")
            lines.append("                    default: break;")
            lines.append("                }")
            lines.append("                break;")
        lines.append("            default: break;")
        lines.append("        }")
        lines.append("    }")

    lines.append("};")
    lines.append("")
    lines.append("}  // namespace screenui")
    lines.append("")
    return "\n".join(lines)


def render_pages_aggregator(pages: List[PageInfo]) -> str:
    lines = [
        "#pragma once",
        "",
        "// Удобный агрегатор всех сгенерированных base-классов страниц.",
        "// Подключай этот файл, если в одном TU нужны несколько страниц.",
        "",
    ]
    for page in pages:
        lines.append(f"#include \"{page.object_name}_base.h\"")
    lines.append("")
    return "\n".join(lines)


def render_ui_object_map_header() -> str:
    return "\n".join(
        [
            "#pragma once",
            "",
            "#include <stddef.h>",
            "#include <stdint.h>",
            "",
            "#include <lvgl.h>",
            "",
            "#include \"element_descriptors.generated.h\"",
            "#include \"page_descriptors.generated.h\"",
            "#include \"lvgl_eez/UiObjectMap.h\"",
            "",
            "namespace demo {",
            "",
            "struct Screen32BoundElement {",
            "    uint32_t elementId = 0;",
            "    uint32_t pageId = 0;",
            "    lv_obj_t* obj = nullptr;",
            "    const Screen32ElementDescriptor* descriptor = nullptr;",
            "};",
            "",
            "bool screen32_bind_generated_ui_map(screenlib::adapter::UiObjectMap& objectMap,",
            "                                  Screen32BoundElement* outElements,",
            "                                  size_t outCapacity,",
            "                                  size_t* outCount);",
            "",
            "const Screen32BoundElement* screen32_find_bound_element(const Screen32BoundElement* elements,",
            "                                                     size_t count,",
            "                                                     uint32_t elementId);",
            "",
            "uint32_t screen32_current_page_id();",
            "bool screen32_load_page_by_target(void* pageTarget);",
            "",
            "}  // namespace demo",
            "",
        ]
    )


def render_ui_object_map_cpp(
    pages: List[PageInfo],
    element_order: List[str],
    element_map: Dict[str, ElementInfo],
    element_ids: Dict[str, int],
) -> str:
    lines: List[str] = [
        "#include \"ui_object_map.generated.h\"",
        "",
        "#include \"ui/screens.h\"",
        "",
        "namespace demo {",
        "namespace {",
        "",
        "bool bind_page(screenlib::adapter::UiObjectMap& objectMap, uint32_t pageId, lv_obj_t* pageObj) {",
        "    return pageObj != nullptr && objectMap.bindPage(pageId, pageObj);",
        "}",
        "",
        "bool bind_element(screenlib::adapter::UiObjectMap& objectMap,",
        "                  uint32_t elementId,",
        "                  uint32_t pageId,",
        "                  lv_obj_t* obj,",
        "                  Screen32BoundElement* outElements,",
        "                  size_t outCapacity,",
        "                  size_t& outCount) {",
        "    if (obj == nullptr) {",
        "        return false;",
        "    }",
        "    if (!objectMap.bindElement(elementId, obj)) {",
        "        return false;",
        "    }",
        "",
        "    if (outElements != nullptr && outCount < outCapacity) {",
        "        outElements[outCount].elementId = elementId;",
        "        outElements[outCount].pageId = pageId;",
        "        outElements[outCount].obj = obj;",
        "        outElements[outCount].descriptor = screen32_find_element_descriptor(elementId);",
        "        outCount++;",
        "    }",
        "",
        "    return true;",
        "}",
        "",
        "}  // namespace",
        "",
        "bool screen32_bind_generated_ui_map(screenlib::adapter::UiObjectMap& objectMap,",
        "                                  Screen32BoundElement* outElements,",
        "                                  size_t outCapacity,",
        "                                  size_t* outCount) {",
        "    objectMap.clear();",
        "    size_t boundCount = 0;",
        "    bool allOk = true;",
        "",
        "    // Карта страниц",
    ]

    for page in pages:
        lines.append(
            f"    allOk = bind_page(objectMap, {page.page_id}u, objects.{page.object_name}) && allOk;"
        )

    lines.extend(["", "    // Карта элементов", ""])

    for object_name in element_order:
        info = element_map[object_name]
        lines.append(
            "    allOk = bind_element(objectMap, "
            + f"{element_ids[object_name]}u, "
            + f"{info.page_id}u, "
            + f"objects.{object_name}, "
            + "outElements, outCapacity, boundCount) && allOk;"
        )

    lines.extend(
        [
            "",
            "    if (outCount != nullptr) {",
            "        *outCount = boundCount;",
            "    }",
            "",
            "    return allOk;",
            "}",
            "",
            "const Screen32BoundElement* screen32_find_bound_element(const Screen32BoundElement* elements,",
            "                                                     size_t count,",
            "                                                     uint32_t elementId) {",
            "    if (elements == nullptr) {",
            "        return nullptr;",
            "    }",
            "    for (size_t i = 0; i < count; ++i) {",
            "        if (elements[i].elementId == elementId) {",
            "            return &elements[i];",
            "        }",
            "    }",
            "    return nullptr;",
            "}",
            "",
            "}  // namespace demo",
            "",
        ]
    )

    return "\n".join(lines)


def render_eez_page_meta_cpp(pages: List[PageInfo]) -> str:
    lines: List[str] = [
        "#include \"ui_object_map.generated.h\"",
        "",
        "#include \"ui/screens.h\"",
        "#include \"ui/ui.h\"",
        "",
        "namespace demo {",
        "",
        "uint32_t screen32_current_page_id() {",
        "    lv_obj_t* active = lv_scr_act();",
    ]

    for page in pages:
        lines.append(f"    if (active == objects.{page.object_name}) return {page.page_id}u;")

    lines.extend(
        [
            f"    return {pages[0].page_id}u;",
            "}",
            "",
            "bool screen32_load_page_by_target(void* pageTarget) {",
            "    lv_obj_t* target = static_cast<lv_obj_t*>(pageTarget);",
            "    if (target == nullptr) {",
            "        return false;",
            "    }",
        ]
    )

    for page in pages:
        lines.append(
            f"    if (target == objects.{page.object_name}) {{ loadScreen({page.enum_name}); return true; }}"
        )

    lines.extend(
        [
            "    return false;",
            "}",
            "",
            "}  // namespace demo",
            "",
        ]
    )

    return "\n".join(lines)


def write_file(path: Path, content: str) -> None:
    header = (
        "// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.\n"
        "// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c\n"
        "// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py\n\n"
    )
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(header + content, encoding="utf-8", newline="\n")


def generate() -> None:
    screens_h = read_text(SCREENS_H)
    screens_c = read_text(SCREENS_C)
    studio_type_hints = parse_studio_widget_hints()
    synced_attrs = load_synced_attrs()

    pages, objects = parse_pages_and_objects(screens_h)
    assignments = parse_object_assignments(screens_c, pages, studio_type_hints)

    page_object_names = {page.object_name for page in pages}
    element_order = [
        name
        for name in objects
        if name not in page_object_names and not is_auto_generated_object_name(name)
    ]

    missing = [name for name in element_order if name not in assignments]
    if missing:
        raise RuntimeError(
            "Could not resolve page mapping for objects from screens.c: " + ", ".join(missing)
        )

    used_ids = {page.page_id for page in pages}
    element_ids = {name: stable_element_id(name, used_ids) for name in element_order}
    used_types = {infer_element_type(assignments[name]) for name in element_order}

    write_file(OUT_SHARED_DIR / "page_ids.generated.h", render_page_ids_header(pages))
    write_file(
        OUT_SHARED_DIR / "element_ids.generated.h",
        render_element_ids_header(element_order, assignments, element_ids),
    )
    write_file(OUT_SHARED_DIR / "page_descriptors.generated.h", render_page_descriptors_header(pages))
    write_file(
        OUT_SHARED_DIR / "element_descriptors.generated.h",
        render_element_descriptors_header(element_order, assignments, element_ids, synced_attrs),
    )
    write_file(
        OUT_BACKEND_PAGES_DIR / "element_types.generated.h",
        render_element_types_header(synced_attrs, used_types),
    )
    write_file(OUT_FRONTEND_META_DIR / "ui_object_map.generated.h", render_ui_object_map_header())
    write_file(
        OUT_FRONTEND_META_DIR / "ui_object_map.generated.cpp",
        render_ui_object_map_cpp(pages, element_order, assignments, element_ids),
    )
    write_file(OUT_FRONTEND_META_DIR / "eez_page_meta.generated.cpp", render_eez_page_meta_cpp(pages))

    elements_by_page: Dict[str, List[ElementInfo]] = {p.enum_name: [] for p in pages}
    for name in element_order:
        info = assignments[name]
        elements_by_page.setdefault(info.page_enum, []).append(info)

    for page in pages:
        write_file(
            OUT_BACKEND_PAGES_DIR / f"{page.object_name}_base.h",
            render_page_base_header(
                page,
                elements_by_page.get(page.enum_name, []),
                element_ids,
                synced_attrs,
            ),
        )
    write_file(OUT_BACKEND_PAGES_DIR / "pages.h", render_pages_aggregator(pages))

    # PIO-манифест для папки. Без него LDF не подхватит библиотеку как зависимость.
    backend_pages_lib_json = OUT_BACKEND_PAGES_DIR / "library.json"
    backend_pages_lib_json.write_text(
        (
            "{\n"
            "  \"name\": \"screenui-backend-pages\",\n"
            "  \"version\": \"0.1.0\",\n"
            "  \"description\": \"Generated per-page base classes for backend (inherits screenlib::IPage)\",\n"
            "  \"frameworks\": [\"arduino\"],\n"
            "  \"platforms\": [\"espressif32\"],\n"
            "  \"build\": {\n"
            "    \"includeDir\": \".\",\n"
            "    \"srcFilter\": \"-<*>\"\n"
            "  },\n"
            "  \"dependencies\": [\n"
            "    { \"name\": \"screenlib-host\" },\n"
            "    { \"name\": \"screenui-shared-meta\" }\n"
            "  ]\n"
            "}\n"
        ),
        encoding="utf-8",
        newline="\n",
    )

    print(f"Generated shared meta in: {OUT_SHARED_DIR}")
    print(f"Generated frontend meta in: {OUT_FRONTEND_META_DIR}")
    print(f"Generated backend page bases in: {OUT_BACKEND_PAGES_DIR}")
    print(f"Pages: {len(pages)}, Elements: {len(element_order)}")


if __name__ == "__main__":
    generate()

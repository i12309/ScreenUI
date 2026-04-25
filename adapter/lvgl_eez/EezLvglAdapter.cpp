#include "lvgl_eez/EezLvglAdapter.h"

#include <stdio.h>
#include <string.h>

#include "../../generated/shared/element_descriptors.generated.h"

#if defined(__has_include)
#if __has_include(<lvgl.h>)
#include <lvgl.h>
#define SCREENUI_LVGL_HELPERS_AVAILABLE 1
#endif
#if __has_include("../../eez_project/src/ui/fonts.h")
#include "../../eez_project/src/ui/fonts.h"
#define SCREENUI_EEZ_FONT_MAP_AVAILABLE 1
#endif
#endif

#ifndef SCREENUI_LVGL_HELPERS_AVAILABLE
#define SCREENUI_LVGL_HELPERS_AVAILABLE 0
#endif

#ifndef SCREENUI_EEZ_FONT_MAP_AVAILABLE
#define SCREENUI_EEZ_FONT_MAP_AVAILABLE 0
#endif

namespace screenlib::adapter {

namespace {

uint32_t normalize_rgb_color(uint32_t value) {
    if (value <= 0xFFFFu) {
        const uint8_t r = static_cast<uint8_t>(((value >> 11) & 0x1Fu) * 255u / 31u);
        const uint8_t g = static_cast<uint8_t>(((value >> 5) & 0x3Fu) * 255u / 63u);
        const uint8_t b = static_cast<uint8_t>((value & 0x1Fu) * 255u / 31u);
        return (static_cast<uint32_t>(r) << 16) |
               (static_cast<uint32_t>(g) << 8) |
               static_cast<uint32_t>(b);
    }
    return value & 0x00FFFFFFu;
}

template <typename T, size_t N>
constexpr size_t array_count(const T (&)[N]) {
    return N;
}

void copy_text_safe(char* dst, size_t dstSize, const char* src) {
    if (dst == nullptr || dstSize == 0) {
        return;
    }

    dst[0] = '\0';
    if (src == nullptr) {
        return;
    }

    strncpy(dst, src, dstSize - 1);
    dst[dstSize - 1] = '\0';
}

void reset_attribute_value(ElementAttributeValue& out, ElementAttribute attribute) {
    memset(&out, 0, sizeof(out));
    out.attribute = attribute;
}

void fill_int_value(ElementAttributeValue& out, ElementAttribute attribute, int32_t value) {
    reset_attribute_value(out, attribute);
    out.which_value = ElementAttributeValue_int_value_tag;
    out.value.int_value = value;
}

void fill_color_value(ElementAttributeValue& out, ElementAttribute attribute, uint32_t value) {
    reset_attribute_value(out, attribute);
    out.which_value = ElementAttributeValue_color_value_tag;
    out.value.color_value = value & 0x00FFFFFFu;
}

void fill_font_value(ElementAttributeValue& out, ElementAttribute attribute, ElementFont value) {
    reset_attribute_value(out, attribute);
    out.which_value = ElementAttributeValue_font_value_tag;
    out.value.font_value = value;
}

void fill_bool_value(ElementAttributeValue& out, ElementAttribute attribute, bool value) {
    reset_attribute_value(out, attribute);
    out.which_value = ElementAttributeValue_bool_value_tag;
    out.value.bool_value = value;
}

void fill_string_value(ElementAttributeValue& out, ElementAttribute attribute, const char* value) {
    reset_attribute_value(out, attribute);
    out.which_value = ElementAttributeValue_string_value_tag;
    copy_text_safe(out.value.string_value, sizeof(out.value.string_value), value);
}

bool copy_attribute_value_to_set_cmd(uint32_t elementId,
                                     const ElementAttributeValue& src,
                                     SetElementAttribute& dst) {
    dst = SetElementAttribute_init_zero;
    dst.element_id = elementId;
    dst.attribute = src.attribute;

    switch (src.which_value) {
        case ElementAttributeValue_int_value_tag:
            dst.which_value = SetElementAttribute_int_value_tag;
            dst.value.int_value = src.value.int_value;
            return true;
        case ElementAttributeValue_color_value_tag:
            dst.which_value = SetElementAttribute_color_value_tag;
            dst.value.color_value = src.value.color_value & 0x00FFFFFFu;
            return true;
        case ElementAttributeValue_font_value_tag:
            dst.which_value = SetElementAttribute_font_value_tag;
            dst.value.font_value = src.value.font_value;
            return true;
        case ElementAttributeValue_bool_value_tag:
            dst.which_value = SetElementAttribute_bool_value_tag;
            dst.value.bool_value = src.value.bool_value;
            return true;
        case ElementAttributeValue_string_value_tag:
            dst.which_value = SetElementAttribute_string_value_tag;
            copy_text_safe(
                dst.value.string_value,
                sizeof(dst.value.string_value),
                src.value.string_value
            );
            return true;
        default:
            return false;
    }
}

#if SCREENUI_LVGL_HELPERS_AVAILABLE
bool as_valid_lv_obj(void* uiObject, lv_obj_t*& outObj) {
    outObj = static_cast<lv_obj_t*>(uiObject);
    return outObj != nullptr && lv_obj_is_valid(outObj);
}

uint32_t lvgl_color_to_rgb888(lv_color_t color) {
    return normalize_rgb_color(lv_color_to_u32(color));
}

#if LV_USE_LABEL
lv_obj_t* find_first_label_descendant(lv_obj_t* root) {
    if (root == nullptr) {
        return nullptr;
    }

    if (lv_obj_check_type(root, &lv_label_class)) {
        return root;
    }

    const uint32_t childCount = lv_obj_get_child_count(root);
    for (uint32_t i = 0; i < childCount; ++i) {
        lv_obj_t* child = lv_obj_get_child(root, static_cast<int32_t>(i));
        lv_obj_t* label = find_first_label_descendant(child);
        if (label != nullptr) {
            return label;
        }
    }

    return nullptr;
}
#endif

const lv_font_t* map_proto_font(ElementFont font) {
#if SCREENUI_EEZ_FONT_MAP_AVAILABLE
    switch (font) {
        case ElementFont_ELEMENT_FONT_UI_M18:
            return &ui_font_m_18;
        case ElementFont_ELEMENT_FONT_UI_M20:
            return &ui_font_m_20;
        case ElementFont_ELEMENT_FONT_UI_M24:
            return &ui_font_m_24;
        case ElementFont_ELEMENT_FONT_UI_M70:
            return &ui_font_m_70;
        case ElementFont_ELEMENT_FONT_UNKNOWN:
        default:
            return nullptr;
    }
#else
    (void)font;
    return nullptr;
#endif
}

ElementFont map_lvgl_font(const lv_font_t* font) {
#if SCREENUI_EEZ_FONT_MAP_AVAILABLE
    if (font == &ui_font_m_18) return ElementFont_ELEMENT_FONT_UI_M18;
    if (font == &ui_font_m_20) return ElementFont_ELEMENT_FONT_UI_M20;
    if (font == &ui_font_m_24) return ElementFont_ELEMENT_FONT_UI_M24;
    if (font == &ui_font_m_70) return ElementFont_ELEMENT_FONT_UI_M70;
#else
    (void)font;
#endif
    return ElementFont_ELEMENT_FONT_UNKNOWN;
}

bool set_text_with_helpers(void* uiObject, const char* text) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

    const char* safeText = (text != nullptr) ? text : "";

#if LV_USE_LABEL
    if (lv_obj_check_type(obj, &lv_label_class)) {
        lv_label_set_text(obj, safeText);
        return true;
    }
#endif

#if LV_USE_TEXTAREA
    if (lv_obj_check_type(obj, &lv_textarea_class)) {
        lv_textarea_set_text(obj, safeText);
        return true;
    }
#endif

#if LV_USE_CHECKBOX
    if (lv_obj_check_type(obj, &lv_checkbox_class)) {
        lv_checkbox_set_text(obj, safeText);
        return true;
    }
#endif

#if LV_USE_DROPDOWN
    if (lv_obj_check_type(obj, &lv_dropdown_class)) {
        lv_dropdown_set_text(obj, safeText);
        return true;
    }
#endif

#if LV_USE_LABEL
    lv_obj_t* label = find_first_label_descendant(obj);
    if (label != nullptr) {
        lv_label_set_text(label, safeText);
        return true;
    }
#endif

    return false;
}

bool read_text_with_helpers(void* uiObject, ElementAttributeValue& out) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

#if LV_USE_LABEL
    if (lv_obj_check_type(obj, &lv_label_class)) {
        fill_string_value(out, out.attribute, lv_label_get_text(obj));
        return true;
    }
#endif

#if LV_USE_TEXTAREA
    if (lv_obj_check_type(obj, &lv_textarea_class)) {
        fill_string_value(out, out.attribute, lv_textarea_get_text(obj));
        return true;
    }
#endif

#if LV_USE_CHECKBOX
    if (lv_obj_check_type(obj, &lv_checkbox_class)) {
        fill_string_value(out, out.attribute, lv_checkbox_get_text(obj));
        return true;
    }
#endif

#if LV_USE_DROPDOWN
    if (lv_obj_check_type(obj, &lv_dropdown_class)) {
        char text[sizeof(out.value.string_value)] = {};
        lv_dropdown_get_selected_str(obj, text, sizeof(text));
        fill_string_value(out, out.attribute, text);
        return true;
    }
#endif

#if LV_USE_LABEL
    lv_obj_t* label = find_first_label_descendant(obj);
    if (label != nullptr) {
        fill_string_value(out, out.attribute, lv_label_get_text(label));
        return true;
    }
#endif

    return false;
}

bool set_value_with_helpers(void* uiObject, int32_t value) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

#if LV_USE_SLIDER
    if (lv_obj_check_type(obj, &lv_slider_class)) {
        lv_slider_set_value(obj, value, LV_ANIM_OFF);
        return true;
    }
#endif

#if LV_USE_BAR
    if (lv_obj_check_type(obj, &lv_bar_class)) {
        lv_bar_set_value(obj, value, LV_ANIM_OFF);
        return true;
    }
#endif

#if LV_USE_ARC
    if (lv_obj_check_type(obj, &lv_arc_class)) {
        lv_arc_set_value(obj, value);
        return true;
    }
#endif

#if LV_USE_SPINBOX
    if (lv_obj_check_type(obj, &lv_spinbox_class)) {
        lv_spinbox_set_value(obj, value);
        return true;
    }
#endif

#if LV_USE_ROLLER
    if (lv_obj_check_type(obj, &lv_roller_class)) {
        lv_roller_set_selected(obj, static_cast<uint16_t>(value), LV_ANIM_OFF);
        return true;
    }
#endif

#if LV_USE_DROPDOWN
    if (lv_obj_check_type(obj, &lv_dropdown_class)) {
        lv_dropdown_set_selected(obj, static_cast<uint16_t>(value));
        return true;
    }
#endif

#if LV_USE_CHECKBOX
    if (lv_obj_check_type(obj, &lv_checkbox_class)) {
        if (value != 0) {
            lv_obj_add_state(obj, LV_STATE_CHECKED);
        } else {
            lv_obj_clear_state(obj, LV_STATE_CHECKED);
        }
        return true;
    }
#endif

#if LV_USE_SWITCH
    if (lv_obj_check_type(obj, &lv_switch_class)) {
        if (value != 0) {
            lv_obj_add_state(obj, LV_STATE_CHECKED);
        } else {
            lv_obj_clear_state(obj, LV_STATE_CHECKED);
        }
        return true;
    }
#endif

    char text[24] = {};
    snprintf(text, sizeof(text), "%ld", static_cast<long>(value));
    return set_text_with_helpers(uiObject, text);
}

bool read_value_with_helpers(void* uiObject, ElementAttributeValue& out) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

#if LV_USE_SLIDER
    if (lv_obj_check_type(obj, &lv_slider_class)) {
        fill_int_value(out, out.attribute, lv_slider_get_value(obj));
        return true;
    }
#endif

#if LV_USE_BAR
    if (lv_obj_check_type(obj, &lv_bar_class)) {
        fill_int_value(out, out.attribute, lv_bar_get_value(obj));
        return true;
    }
#endif

#if LV_USE_ARC
    if (lv_obj_check_type(obj, &lv_arc_class)) {
        fill_int_value(out, out.attribute, lv_arc_get_value(obj));
        return true;
    }
#endif

#if LV_USE_SPINBOX
    if (lv_obj_check_type(obj, &lv_spinbox_class)) {
        fill_int_value(out, out.attribute, lv_spinbox_get_value(obj));
        return true;
    }
#endif

#if LV_USE_ROLLER
    if (lv_obj_check_type(obj, &lv_roller_class)) {
        fill_int_value(out, out.attribute, lv_roller_get_selected(obj));
        return true;
    }
#endif

#if LV_USE_DROPDOWN
    if (lv_obj_check_type(obj, &lv_dropdown_class)) {
        fill_int_value(out, out.attribute, lv_dropdown_get_selected(obj));
        return true;
    }
#endif

#if LV_USE_CHECKBOX
    if (lv_obj_check_type(obj, &lv_checkbox_class)) {
        fill_int_value(out, out.attribute, lv_obj_has_state(obj, LV_STATE_CHECKED) ? 1 : 0);
        return true;
    }
#endif

#if LV_USE_SWITCH
    if (lv_obj_check_type(obj, &lv_switch_class)) {
        fill_int_value(out, out.attribute, lv_obj_has_state(obj, LV_STATE_CHECKED) ? 1 : 0);
        return true;
    }
#endif

    return false;
}

bool set_visible_with_helpers(void* uiObject, bool visible) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

    if (visible) {
        lv_obj_clear_flag(obj, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
    }
    return true;
}

bool read_attribute_with_helpers(void* uiObject,
                                 ElementAttribute attribute,
                                 ElementAttributeValue& out) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

    switch (attribute) {
        case ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_WIDTH:
            fill_int_value(out, attribute, lv_obj_get_width(obj));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_HEIGHT:
            fill_int_value(out, attribute, lv_obj_get_height(obj));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_X:
            fill_int_value(out, attribute, lv_obj_get_x(obj));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_Y:
            fill_int_value(out, attribute, lv_obj_get_y(obj));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BACKGROUND_COLOR:
            fill_color_value(
                out,
                attribute,
                lvgl_color_to_rgb888(lv_obj_get_style_bg_color(obj, LV_PART_MAIN))
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BORDER_COLOR:
            fill_color_value(
                out,
                attribute,
                lvgl_color_to_rgb888(lv_obj_get_style_border_color(obj, LV_PART_MAIN))
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BORDER_WIDTH:
            fill_int_value(out, attribute, lv_obj_get_style_border_width(obj, LV_PART_MAIN));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT_COLOR:
            fill_color_value(
                out,
                attribute,
                lvgl_color_to_rgb888(lv_obj_get_style_text_color(obj, LV_PART_MAIN))
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT_FONT:
            fill_font_value(
                out,
                attribute,
                map_lvgl_font(lv_obj_get_style_text_font(obj, LV_PART_MAIN))
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_VISIBLE:
            fill_bool_value(out, attribute, !lv_obj_has_flag(obj, LV_OBJ_FLAG_HIDDEN));
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT:
            reset_attribute_value(out, attribute);
            return read_text_with_helpers(uiObject, out);
        case ElementAttribute_ELEMENT_ATTRIBUTE_VALUE:
            reset_attribute_value(out, attribute);
            return read_value_with_helpers(uiObject, out);
        case ElementAttribute_ELEMENT_ATTRIBUTE_UNKNOWN:
        default:
            return false;
    }
}

bool set_element_attribute_with_helpers(void* uiObject, const SetElementAttribute& attr) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

    switch (attr.attribute) {
        case ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_WIDTH:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            lv_obj_set_width(obj, attr.value.int_value);
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_HEIGHT:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            lv_obj_set_height(obj, attr.value.int_value);
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_X:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            lv_obj_set_x(obj, attr.value.int_value);
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_Y:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            lv_obj_set_y(obj, attr.value.int_value);
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BACKGROUND_COLOR:
            if (attr.which_value != SetElementAttribute_color_value_tag) return false;
            lv_obj_set_style_bg_color(
                obj,
                lv_color_hex(normalize_rgb_color(attr.value.color_value)),
                LV_PART_MAIN | LV_STATE_DEFAULT
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BORDER_COLOR:
            if (attr.which_value != SetElementAttribute_color_value_tag) return false;
            lv_obj_set_style_border_color(
                obj,
                lv_color_hex(normalize_rgb_color(attr.value.color_value)),
                LV_PART_MAIN | LV_STATE_DEFAULT
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_BORDER_WIDTH:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            lv_obj_set_style_border_width(obj, attr.value.int_value, LV_PART_MAIN | LV_STATE_DEFAULT);
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT_COLOR:
            if (attr.which_value != SetElementAttribute_color_value_tag) return false;
            lv_obj_set_style_text_color(
                obj,
                lv_color_hex(normalize_rgb_color(attr.value.color_value)),
                LV_PART_MAIN | LV_STATE_DEFAULT
            );
            return true;
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT_FONT: {
            if (attr.which_value != SetElementAttribute_font_value_tag) return false;
            const lv_font_t* font = map_proto_font(attr.value.font_value);
            if (font == nullptr) {
                return false;
            }
            lv_obj_set_style_text_font(obj, font, LV_PART_MAIN | LV_STATE_DEFAULT);
            return true;
        }
        case ElementAttribute_ELEMENT_ATTRIBUTE_VISIBLE:
            if (attr.which_value != SetElementAttribute_bool_value_tag) return false;
            return set_visible_with_helpers(uiObject, attr.value.bool_value);
        case ElementAttribute_ELEMENT_ATTRIBUTE_TEXT:
            if (attr.which_value != SetElementAttribute_string_value_tag) return false;
            return set_text_with_helpers(uiObject, attr.value.string_value);
        case ElementAttribute_ELEMENT_ATTRIBUTE_VALUE:
            if (attr.which_value != SetElementAttribute_int_value_tag) return false;
            return set_value_with_helpers(uiObject, attr.value.int_value);
        case ElementAttribute_ELEMENT_ATTRIBUTE_UNKNOWN:
        default:
            return false;
    }
}

void on_lvgl_adapter_event(lv_event_t* e) {
    auto* self = static_cast<EezLvglAdapter*>(lv_event_get_user_data(e));
    if (self == nullptr) {
        return;
    }
    self->handleLvglEventObject(
        lv_event_get_current_target(e),
        static_cast<uint32_t>(lv_event_get_code(e))
    );
}
#else
bool read_attribute_with_helpers(void* uiObject,
                                 ElementAttribute attribute,
                                 ElementAttributeValue& out) {
    (void)uiObject;
    (void)attribute;
    (void)out;
    return false;
}

bool set_text_with_helpers(void* uiObject, const char* text) {
    (void)uiObject;
    (void)text;
    return false;
}

bool set_value_with_helpers(void* uiObject, int32_t value) {
    (void)uiObject;
    (void)value;
    return false;
}

bool set_visible_with_helpers(void* uiObject, bool visible) {
    (void)uiObject;
    (void)visible;
    return false;
}

bool set_element_attribute_with_helpers(void* uiObject, const SetElementAttribute& attr) {
    (void)uiObject;
    (void)attr;
    return false;
}
#endif

}  // namespace

EezLvglAdapter::EezLvglAdapter(UiObjectMap* objectMap,
                               const EezLvglHooks& hooks,
                               void* hookUserData)
    : _objectMap(objectMap), _hooks(hooks), _hookUserData(hookUserData) {}

void EezLvglAdapter::setObjectMap(UiObjectMap* objectMap) {
    _objectMap = objectMap;
}

void EezLvglAdapter::setHooks(const EezLvglHooks& hooks, void* hookUserData) {
    _hooks = hooks;
    _hookUserData = hookUserData;
}

bool EezLvglAdapter::showPage(uint32_t pageId) {
    if (_objectMap == nullptr || _hooks.showPage == nullptr) {
        return false;
    }

    void* pageTarget = _objectMap->findPage(pageId);
    if (pageTarget == nullptr) {
        return false;
    }

    return _hooks.showPage(_hookUserData, pageTarget);
}

bool EezLvglAdapter::setElementAttribute(const SetElementAttribute& attr) {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(attr.element_id);
    if (uiObject == nullptr) {
        return false;
    }

    if (_hooks.setElementAttribute != nullptr &&
        _hooks.setElementAttribute(_hookUserData, uiObject, attr)) {
        return true;
    }
    if (_hooks.enableLvglObjectHelpers) {
        return set_element_attribute_with_helpers(uiObject, attr);
    }
    return false;
}

bool EezLvglAdapter::buildPageSnapshot(uint32_t pageId, uint32_t sessionId, PageSnapshot& out) {
    memset(&out, 0, sizeof(out));
    out.page_id = pageId;
    out.session_id = sessionId;

    if (_objectMap == nullptr) {
        return false;
    }

    bool allOk = true;
    const size_t elementCapacity = array_count(out.elements);
    for (size_t i = 0; i < screen32_element_descriptor_count(); ++i) {
        const Screen32ElementDescriptor& desc = g_screen32_element_descriptors[i];
        if (desc.page_id != pageId || desc.synced_mask == 0u) {
            continue;
        }

        if (out.elements_count >= elementCapacity) {
            allOk = false;
            break;
        }

        ElementSnapshot& snapshot = out.elements[out.elements_count];
        memset(&snapshot, 0, sizeof(snapshot));
        snapshot.element_id = desc.element_id;

        for (uint32_t bit = 1; bit < 16; ++bit) {
            if ((desc.synced_mask & (1u << bit)) == 0u) {
                continue;
            }
            if (snapshot.attributes_count >= array_count(snapshot.attributes)) {
                allOk = false;
                break;
            }

            ElementAttributeValue value{};
            if (!readAttributeValue(desc.element_id, static_cast<ElementAttribute>(bit), value)) {
                allOk = false;
                continue;
            }

            snapshot.attributes[snapshot.attributes_count++] = value;
        }

        if (snapshot.attributes_count > 0) {
            out.elements_count++;
        }
    }

    return allOk;
}

bool EezLvglAdapter::applyAttributeValue(uint32_t elementId,
                                         const ElementAttributeValue& in,
                                         ElementAttributeValue& appliedOut) {
    SetElementAttribute cmd{};
    if (!copy_attribute_value_to_set_cmd(elementId, in, cmd)) {
        return false;
    }

    if (!setElementAttribute(cmd)) {
        return false;
    }

    return readAttributeValue(elementId, in.attribute, appliedOut);
}

void EezLvglAdapter::installChangeListeners(uint32_t pageId,
                                            AttributeChangeCb cb,
                                            void* userData) {
    _attributeChangeCb = cb;
    _attributeChangeUser = userData;
    _listenedPageId = pageId;
    memset(_pendingChanges, 0, sizeof(_pendingChanges));

#if SCREENUI_LVGL_HELPERS_AVAILABLE
    if (_objectMap == nullptr) {
        return;
    }

    for (size_t i = 0; i < screen32_element_descriptor_count(); ++i) {
        const Screen32ElementDescriptor& desc = g_screen32_element_descriptors[i];
        if (desc.page_id != pageId || desc.synced_mask == 0u) {
            continue;
        }

        lv_obj_t* obj = nullptr;
        if (!as_valid_lv_obj(_objectMap->findElement(desc.element_id), obj)) {
            continue;
        }

        lv_obj_add_event_cb(obj, on_lvgl_adapter_event, LV_EVENT_SIZE_CHANGED, this);
        lv_obj_add_event_cb(obj, on_lvgl_adapter_event, LV_EVENT_VALUE_CHANGED, this);
    }
#else
    (void)pageId;
    (void)cb;
    (void)userData;
#endif
}

void EezLvglAdapter::flushPendingChanges() {
    if (_attributeChangeCb == nullptr) {
        memset(_pendingChanges, 0, sizeof(_pendingChanges));
        return;
    }

    for (PendingAttributeChange& change : _pendingChanges) {
        if (!change.used) {
            continue;
        }
        _attributeChangeCb(change.elementId, change.value, change.reason, _attributeChangeUser);
        change.used = false;
    }
}

void EezLvglAdapter::setEventSink(EventSink sink, void* userData) {
    _sink = sink;
    _sinkUser = userData;
}

void EezLvglAdapter::tickInput() {
    if (_hooks.tickInput != nullptr) {
        _hooks.tickInput(_hookUserData, *this);
    }
}

Envelope& EezLvglAdapter::prepareEventEnvelope(pb_size_t payloadTag) {
    memset(&_eventEnvelope, 0, sizeof(_eventEnvelope));
    _eventEnvelope.which_payload = payloadTag;
    return _eventEnvelope;
}

bool EezLvglAdapter::emitButtonEvent(uint32_t elementId, uint32_t pageId, ButtonAction action) {
    Envelope& env = prepareEventEnvelope(Envelope_button_event_tag);
    env.payload.button_event.element_id = elementId;
    env.payload.button_event.page_id = pageId;
    env.payload.button_event.action = action;
    return emitEnvelope(env);
}

bool EezLvglAdapter::emitInputEventInt(uint32_t elementId, uint32_t pageId, int32_t value) {
    Envelope& env = prepareEventEnvelope(Envelope_input_event_tag);
    env.payload.input_event.element_id = elementId;
    env.payload.input_event.page_id = pageId;
    env.payload.input_event.which_value = InputEvent_int_value_tag;
    env.payload.input_event.value.int_value = value;
    return emitEnvelope(env);
}

bool EezLvglAdapter::emitInputEventString(uint32_t elementId, uint32_t pageId, const char* text) {
    Envelope& env = prepareEventEnvelope(Envelope_input_event_tag);
    env.payload.input_event.element_id = elementId;
    env.payload.input_event.page_id = pageId;
    env.payload.input_event.which_value = InputEvent_string_value_tag;
    copyTextSafe(env.payload.input_event.value.string_value,
                 sizeof(env.payload.input_event.value.string_value),
                 text);
    return emitEnvelope(env);
}

bool EezLvglAdapter::emitEnvelope(const Envelope& env) {
    if (_sink == nullptr) {
        return false;
    }
    return _sink(env, _sinkUser);
}

bool EezLvglAdapter::readAttributeValue(uint32_t elementId,
                                        ElementAttribute attribute,
                                        ElementAttributeValue& out) const {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(elementId);
    if (uiObject == nullptr) {
        return false;
    }

    return read_attribute_with_helpers(uiObject, attribute, out);
}

bool EezLvglAdapter::queuePendingChange(uint32_t elementId,
                                        const ElementAttributeValue& value,
                                        AttributeChangeReason reason) {
    for (PendingAttributeChange& change : _pendingChanges) {
        if (!change.used) {
            continue;
        }
        if (change.elementId == elementId && change.value.attribute == value.attribute) {
            change.value = value;
            change.reason = reason;
            return true;
        }
    }

    for (PendingAttributeChange& change : _pendingChanges) {
        if (change.used) {
            continue;
        }
        change.used = true;
        change.elementId = elementId;
        change.value = value;
        change.reason = reason;
        return true;
    }

    return false;
}

bool EezLvglAdapter::findElementIdByObject(void* uiObject,
                                           uint32_t pageId,
                                           uint32_t& elementIdOut) const {
    if (_objectMap == nullptr || uiObject == nullptr) {
        return false;
    }

    for (size_t i = 0; i < screen32_element_descriptor_count(); ++i) {
        const Screen32ElementDescriptor& desc = g_screen32_element_descriptors[i];
        if (desc.page_id != pageId) {
            continue;
        }
        if (_objectMap->findElement(desc.element_id) == uiObject) {
            elementIdOut = desc.element_id;
            return true;
        }
    }

    return false;
}

void EezLvglAdapter::handleLvglEventObject(void* uiObject, uint32_t eventCode) {
#if SCREENUI_LVGL_HELPERS_AVAILABLE
    if (_attributeChangeCb == nullptr || _listenedPageId == 0) {
        return;
    }

    uint32_t elementId = 0;
    if (!findElementIdByObject(uiObject, _listenedPageId, elementId)) {
        return;
    }

    const Screen32ElementDescriptor* desc = screen32_find_element_descriptor(elementId);
    if (desc == nullptr) {
        return;
    }

    if (eventCode == static_cast<uint32_t>(LV_EVENT_SIZE_CHANGED)) {
        const ElementAttribute layoutAttrs[] = {
            ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_WIDTH,
            ElementAttribute_ELEMENT_ATTRIBUTE_POSITION_HEIGHT,
            ElementAttribute_ELEMENT_ATTRIBUTE_X,
            ElementAttribute_ELEMENT_ATTRIBUTE_Y,
        };
        for (ElementAttribute attribute : layoutAttrs) {
            const uint32_t bit = static_cast<uint32_t>(attribute);
            if ((desc->synced_mask & (1u << bit)) == 0u) {
                continue;
            }

            ElementAttributeValue value{};
            if (readAttributeValue(elementId, attribute, value)) {
                queuePendingChange(elementId, value, AttributeChangeReason_REASON_LAYOUT);
            }
        }
    }

    if (eventCode == static_cast<uint32_t>(LV_EVENT_VALUE_CHANGED)) {
        const ElementAttribute valueAttrs[] = {
            ElementAttribute_ELEMENT_ATTRIBUTE_VALUE,
            ElementAttribute_ELEMENT_ATTRIBUTE_TEXT,
        };
        for (ElementAttribute attribute : valueAttrs) {
            const uint32_t bit = static_cast<uint32_t>(attribute);
            if ((desc->synced_mask & (1u << bit)) == 0u) {
                continue;
            }

            ElementAttributeValue value{};
            if (readAttributeValue(elementId, attribute, value)) {
                queuePendingChange(elementId, value, AttributeChangeReason_REASON_USER_INPUT);
            }
        }
    }
#else
    (void)uiObject;
    (void)eventCode;
#endif
}

void EezLvglAdapter::copyTextSafe(char* dst, size_t dstSize, const char* src) {
    copy_text_safe(dst, dstSize, src);
}

}  // namespace screenlib::adapter

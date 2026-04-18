#include "lvgl_eez/EezLvglAdapter.h"

#include <stdio.h>
#include <string.h>

#if defined(__has_include)
#if __has_include(<lvgl.h>)
#include <lvgl.h>
#define SCREENUI_LVGL_HELPERS_AVAILABLE 1
#endif
#endif

#ifndef SCREENUI_LVGL_HELPERS_AVAILABLE
#define SCREENUI_LVGL_HELPERS_AVAILABLE 0
#endif

namespace screenlib::adapter {

namespace {

#if SCREENUI_LVGL_HELPERS_AVAILABLE
bool as_valid_lv_obj(void* uiObject, lv_obj_t*& outObj) {
    outObj = static_cast<lv_obj_t*>(uiObject);
    return outObj != nullptr && lv_obj_is_valid(outObj);
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

#if LV_USE_LABEL
    // Common case for buttons: text is rendered by an inner label child.
    lv_obj_t* label = find_first_label_descendant(obj);
    if (label != nullptr) {
        lv_label_set_text(label, safeText);
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

    char text[24] = {};
    snprintf(text, sizeof(text), "%ld", static_cast<long>(value));
    return set_text_with_helpers(uiObject, text);
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

bool set_color_with_helpers(void* uiObject, uint32_t bgColor, uint32_t fgColor) {
    lv_obj_t* obj = nullptr;
    if (!as_valid_lv_obj(uiObject, obj)) {
        return false;
    }

    lv_obj_set_style_bg_color(obj, lv_color_hex(bgColor & 0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(obj, lv_color_hex(fgColor & 0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    return true;
}
#else
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

bool set_color_with_helpers(void* uiObject, uint32_t bgColor, uint32_t fgColor) {
    (void)uiObject;
    (void)bgColor;
    (void)fgColor;
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

bool EezLvglAdapter::setText(uint32_t elementId, const char* text) {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(elementId);
    if (uiObject == nullptr) {
        return false;
    }

    const char* safeText = (text != nullptr) ? text : "";
    if (_hooks.setText != nullptr && _hooks.setText(_hookUserData, uiObject, safeText)) {
        return true;
    }
    if (_hooks.enableLvglObjectHelpers) {
        return set_text_with_helpers(uiObject, safeText);
    }
    return false;
}

bool EezLvglAdapter::setValue(uint32_t elementId, int32_t value) {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(elementId);
    if (uiObject == nullptr) {
        return false;
    }

    if (_hooks.setValue != nullptr && _hooks.setValue(_hookUserData, uiObject, value)) {
        return true;
    }
    if (_hooks.enableLvglObjectHelpers) {
        return set_value_with_helpers(uiObject, value);
    }
    return false;
}

bool EezLvglAdapter::setVisible(uint32_t elementId, bool visible) {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(elementId);
    if (uiObject == nullptr) {
        return false;
    }

    if (_hooks.setVisible != nullptr && _hooks.setVisible(_hookUserData, uiObject, visible)) {
        return true;
    }
    if (_hooks.enableLvglObjectHelpers) {
        return set_visible_with_helpers(uiObject, visible);
    }
    return false;
}

bool EezLvglAdapter::setColor(uint32_t elementId, uint32_t bgColor, uint32_t fgColor) {
    if (_objectMap == nullptr) {
        return false;
    }

    void* uiObject = _objectMap->findElement(elementId);
    if (uiObject == nullptr) {
        return false;
    }

    if (_hooks.setColor != nullptr && _hooks.setColor(_hookUserData, uiObject, bgColor, fgColor)) {
        return true;
    }
    if (_hooks.enableLvglObjectHelpers) {
        return set_color_with_helpers(uiObject, bgColor, fgColor);
    }
    return false;
}

bool EezLvglAdapter::applyBatch(const SetBatch& batch) {
    bool allOk = true;

    for (pb_size_t i = 0; i < batch.texts_count; ++i) {
        if (!setText(batch.texts[i].element_id, batch.texts[i].text)) {
            allOk = false;
        }
    }

    for (pb_size_t i = 0; i < batch.values_count; ++i) {
        if (!setValue(batch.values[i].element_id, batch.values[i].value)) {
            allOk = false;
        }
    }

    for (pb_size_t i = 0; i < batch.visibles_count; ++i) {
        if (!setVisible(batch.visibles[i].element_id, batch.visibles[i].visible)) {
            allOk = false;
        }
    }

    for (pb_size_t i = 0; i < batch.colors_count; ++i) {
        if (!setColor(batch.colors[i].element_id,
                      batch.colors[i].bg_color,
                      batch.colors[i].fg_color)) {
            allOk = false;
        }
    }

    return allOk;
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

bool EezLvglAdapter::emitButtonEvent(uint32_t elementId, uint32_t pageId) {
    Envelope env{};
    env.which_payload = Envelope_button_event_tag;
    env.payload.button_event.element_id = elementId;
    env.payload.button_event.page_id = pageId;
    return emitEnvelope(env);
}

bool EezLvglAdapter::emitInputEventInt(uint32_t elementId, uint32_t pageId, int32_t value) {
    Envelope env{};
    env.which_payload = Envelope_input_event_tag;
    env.payload.input_event.element_id = elementId;
    env.payload.input_event.page_id = pageId;
    env.payload.input_event.which_value = InputEvent_int_value_tag;
    env.payload.input_event.value.int_value = value;
    return emitEnvelope(env);
}

bool EezLvglAdapter::emitInputEventString(uint32_t elementId, uint32_t pageId, const char* text) {
    Envelope env{};
    env.which_payload = Envelope_input_event_tag;
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

void EezLvglAdapter::copyTextSafe(char* dst, size_t dstSize, const char* src) {
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

}  // namespace screenlib::adapter

// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stdint.h>

#include "pages/Element.h"

namespace screenui::generated {

class TypeGeneric : public screenlib::ElementBase {
public:
    using screenlib::ElementBase::ElementBase;
};

class TypeButton : public screenlib::ElementBase {
public:
    TypeButton(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , text(page, id)
      , bgColor(page, id)
      , textColor(page, id)
    {}

    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Property<uint32_t, ELEMENT_ATTRIBUTE_BACKGROUND_COLOR> bgColor;
    screenlib::Property<uint32_t, ELEMENT_ATTRIBUTE_TEXT_COLOR> textColor;
    screenlib::Signal<> onClick;
    screenlib::Signal<> onPush;
    screenlib::Signal<> onPop;
    screenlib::Signal<> onRepeat;
    screenlib::Signal<const char*> onChange;
    void fireChanged() { onChange.emit(text); }
};

class TypeContainer : public screenlib::ElementBase {
public:
    TypeContainer(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , x(page, id)
      , y(page, id)
      , bgColor(page, id)
    {}

    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_X> x;
    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_Y> y;
    screenlib::Property<uint32_t, ELEMENT_ATTRIBUTE_BACKGROUND_COLOR> bgColor;
};

class TypeText : public screenlib::ElementBase {
public:
    TypeText(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , text(page, id)
      , textColor(page, id)
      , font(page, id)
    {}

    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Property<uint32_t, ELEMENT_ATTRIBUTE_TEXT_COLOR> textColor;
    screenlib::Property<ElementFont, ELEMENT_ATTRIBUTE_TEXT_FONT> font;
    screenlib::Signal<const char*> onChange;
    void fireChanged() { onChange.emit(text); }
};

class TypePanel : public screenlib::ElementBase {
public:
    TypePanel(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , x(page, id)
      , y(page, id)
      , bgColor(page, id)
      , text(page, id)
    {}

    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_X> x;
    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_Y> y;
    screenlib::Property<uint32_t, ELEMENT_ATTRIBUTE_BACKGROUND_COLOR> bgColor;
    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Signal<const char*> onChange;
    void fireChanged() { onChange.emit(text); }
};

class TypeTextarea : public screenlib::ElementBase {
public:
    TypeTextarea(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , text(page, id)
    {}

    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Signal<const char*> onChange;
    void fireChanged() { onChange.emit(text); }
};

class TypeCheckbox : public screenlib::ElementBase {
public:
    TypeCheckbox(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , value(page, id)
      , text(page, id)
    {}

    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_VALUE> value;
    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Signal<int32_t> onChange;
    void fireChanged() { onChange.emit(value); }
};

class TypeDropdown : public screenlib::ElementBase {
public:
    TypeDropdown(screenlib::IPage* page, uint32_t id)
      : ElementBase(page, id)
      , value(page, id)
      , text(page, id)
    {}

    screenlib::Property<int32_t, ELEMENT_ATTRIBUTE_VALUE> value;
    screenlib::Property<const char*, ELEMENT_ATTRIBUTE_TEXT> text;
    screenlib::Signal<int32_t> onChange;
    void fireChanged() { onChange.emit(value); }
};

class TypeKeyboard : public screenlib::ElementBase {
public:
    using screenlib::ElementBase::ElementBase;

    // Тип не имеет дополнительных synced-полей сверх ElementBase.
};

}  // namespace screenui::generated

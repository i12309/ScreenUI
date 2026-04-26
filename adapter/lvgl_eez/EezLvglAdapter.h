#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "IUiAdapter.h"
#include "lvgl_eez/UiObjectMap.h"

namespace screenlib::adapter {

class EezLvglAdapter;

struct SnapshotLongTextField {
    uint32_t elementId = 0;
    ElementAttribute attribute = ElementAttribute_ELEMENT_ATTRIBUTE_UNKNOWN;
    std::string text;
};

// Hooks для интеграции с реальным EEZ/LVGL generated UI.
// Библиотека не дублирует generated код, а вызывает переданные callbacks.
struct EezLvglHooks {
    bool (*showPage)(void* userData, void* pageTarget) = nullptr;
    bool (*setText)(void* userData, void* uiObject, const char* text) = nullptr;
    bool (*setValue)(void* userData, void* uiObject, int32_t value) = nullptr;
    bool (*setVisible)(void* userData, void* uiObject, bool visible) = nullptr;
    bool (*setColor)(void* userData, void* uiObject, uint32_t bgColor, uint32_t fgColor) = nullptr;
    bool (*setElementAttribute)(void* userData, void* uiObject, const SetElementAttribute& attr) = nullptr;
    // When hook is missing or returns false, allow built-in LVGL object helpers.
    bool enableLvglObjectHelpers = true;

    // Опциональный poll/flush входных событий UI.
    // Может быть no-op, если UI callbacks публикуют события сразу.
    void (*tickInput)(void* userData, EezLvglAdapter& adapter) = nullptr;
};

// Первая concrete реализация IUiAdapter для EEZ/LVGL.
class EezLvglAdapter : public IUiAdapter {
    friend bool send_adapter_envelope(const Envelope& env, void* userData);

public:
    EezLvglAdapter(UiObjectMap* objectMap = nullptr,
                   const EezLvglHooks& hooks = EezLvglHooks{},
                   void* hookUserData = nullptr);

    void setObjectMap(UiObjectMap* objectMap);
    void setHooks(const EezLvglHooks& hooks, void* hookUserData = nullptr);

    bool showPage(uint32_t pageId) override;
    bool setElementAttribute(const SetElementAttribute& attr) override;
    bool setTextAttribute(uint32_t elementId, const char* text) override;

    using AttributeChangeCb = void (*)(uint32_t elementId,
                                       const ElementAttributeValue& value,
                                       AttributeChangeReason reason,
                                       void* userData);

    // session_id - эпоха страницы из последнего полученного ShowPage от backend.
    // Поле session_id в snapshot должно совпадать с этой эпохой, иначе backend
    // отбросит snapshot как stale.
    bool buildPageSnapshot(uint32_t pageId, uint32_t sessionId, PageSnapshot& out);
    bool buildPageSnapshot(uint32_t pageId,
                           uint32_t sessionId,
                           PageSnapshot& out,
                           std::vector<SnapshotLongTextField>& longTextFields);
    bool applyAttributeValue(uint32_t elementId,
                             const ElementAttributeValue& in,
                             ElementAttributeValue& appliedOut);
    bool applyTextAttribute(uint32_t elementId,
                            const char* text,
                            ElementAttributeValue& appliedOut);
    void installChangeListeners(uint32_t pageId, AttributeChangeCb cb, void* userData);
    void flushPendingChanges();
    void handleLvglEventObject(void* uiObject, uint32_t eventCode);

    void setEventSink(EventSink sink, void* userData) override;
    void tickInput() override;

    // Методы для UI callback-ов (LVGL/EEZ -> protocol events).
    bool emitButtonEvent(uint32_t elementId,
                         uint32_t pageId,
                         ButtonAction action = ButtonAction_CLICK);
    bool emitInputEventInt(uint32_t elementId, uint32_t pageId, int32_t value);
    bool emitInputEventString(uint32_t elementId, uint32_t pageId, const char* text);

private:
    UiObjectMap* _objectMap = nullptr;
    EezLvglHooks _hooks{};
    void* _hookUserData = nullptr;

    EventSink _sink = nullptr;
    void* _sinkUser = nullptr;

    static constexpr size_t kMaxPendingChanges = 256;

    struct PendingAttributeChange {
        bool used = false;
        uint32_t elementId = 0;
        ElementAttributeValue value{};
        AttributeChangeReason reason = AttributeChangeReason_REASON_UNKNOWN;
    };

    AttributeChangeCb _attributeChangeCb = nullptr;
    void* _attributeChangeUser = nullptr;
    uint32_t _listenedPageId = 0;
    uint32_t _nextTransferId = 1;
    PendingAttributeChange _pendingChanges[kMaxPendingChanges]{};
    Envelope _eventEnvelope = {};

    Envelope& prepareEventEnvelope(pb_size_t payloadTag);
    bool emitEnvelope(const Envelope& env);
    bool buildPageSnapshotInternal(uint32_t pageId,
                                   uint32_t sessionId,
                                   PageSnapshot& out,
                                   std::vector<SnapshotLongTextField>* longTextFields);
    bool readAttributeValue(uint32_t elementId,
                            ElementAttribute attribute,
                            ElementAttributeValue& out) const;
    bool readAttributeValue(uint32_t elementId,
                            ElementAttribute attribute,
                            ElementAttributeValue& out,
                            std::vector<SnapshotLongTextField>* longTextFields) const;
    bool queuePendingChange(uint32_t elementId,
                            const ElementAttributeValue& value,
                            AttributeChangeReason reason);
    bool findElementIdByObject(void* uiObject, uint32_t pageId, uint32_t& elementIdOut) const;
    static void copyTextSafe(char* dst, size_t dstSize, const char* src);
};

}  // namespace screenlib::adapter

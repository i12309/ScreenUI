#pragma once

#include <cstddef>

#include "IUiAdapter.h"
#include "lvgl_eez/UiObjectMap.h"

namespace screenlib::adapter {

class EezLvglAdapter;

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
public:
    EezLvglAdapter(UiObjectMap* objectMap = nullptr,
                   const EezLvglHooks& hooks = EezLvglHooks{},
                   void* hookUserData = nullptr);

    void setObjectMap(UiObjectMap* objectMap);
    void setHooks(const EezLvglHooks& hooks, void* hookUserData = nullptr);

    bool showPage(uint32_t pageId) override;
    bool setText(uint32_t elementId, const char* text) override;
    bool setValue(uint32_t elementId, int32_t value) override;
    bool setVisible(uint32_t elementId, bool visible) override;
    bool setColor(uint32_t elementId, uint32_t bgColor, uint32_t fgColor) override;
    bool setElementAttribute(const SetElementAttribute& attr) override;
    bool applyBatch(const SetBatch& batch) override;

    using AttributeChangeCb = void (*)(uint32_t elementId,
                                       const ElementAttributeValue& value,
                                       AttributeChangeReason reason,
                                       void* userData);

    // session_id - эпоха страницы из последнего полученного ShowPage от backend.
    // Поле session_id в snapshot должно совпадать с этой эпохой, иначе backend
    // отбросит snapshot как stale.
    bool buildPageSnapshot(uint32_t pageId, uint32_t sessionId, PageSnapshot& out);
    bool applyAttributeValue(uint32_t elementId,
                             const ElementAttributeValue& in,
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
    PendingAttributeChange _pendingChanges[kMaxPendingChanges]{};
    Envelope _eventEnvelope = Envelope_init_zero;

    Envelope& prepareEventEnvelope(pb_size_t payloadTag);
    bool emitEnvelope(const Envelope& env);
    bool readAttributeValue(uint32_t elementId,
                            ElementAttribute attribute,
                            ElementAttributeValue& out) const;
    bool queuePendingChange(uint32_t elementId,
                            const ElementAttributeValue& value,
                            AttributeChangeReason reason);
    bool findElementIdByObject(void* uiObject, uint32_t pageId, uint32_t& elementIdOut) const;
    static void copyTextSafe(char* dst, size_t dstSize, const char* src);
};

}  // namespace screenlib::adapter

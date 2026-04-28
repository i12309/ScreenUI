// АВТОСГЕНЕРИРОВАННЫЙ ФАЙЛ.
// Источник: eez_project/src/ui/screens.h + eez_project/src/ui/screens.c
// НЕ РЕДАКТИРОВАТЬ ВРУЧНУЮ. Запуск: python tools/ui_meta_gen/generate_ui_meta.py

#pragma once

#include <stddef.h>
#include <stdint.h>

#include "page_ids.generated.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Screen32PageDescriptor {
    uint32_t page_id;
    const char* page_name;
    const char* object_name;
} Screen32PageDescriptor;

static const Screen32PageDescriptor g_screen32_page_descriptors[SCREEN32_PAGE_DESCRIPTOR_COUNT] = {
    {1u, "LOAD0", "load0"},
    {2u, "LOAD", "load"},
    {3u, "MAIN", "main"},
    {4u, "TASK_RUN", "task_run"},
    {5u, "TASK_PROCESS", "task_process"},
    {6u, "TASK", "task"},
    {7u, "PROFILE", "profile"},
    {8u, "LIST", "list"},
    {9u, "INFO", "info"},
    {10u, "INPUT", "input"},
    {11u, "INIT", "init"},
    {12u, "WAIT", "wait"},
    {13u, "SERVICE", "service"},
    {14u, "TABLE", "table"},
    {15u, "PAPER", "paper"},
    {16u, "GUILLOTINE", "guillotine"},
    {17u, "SERVICE2", "service2"},
    {18u, "THROW", "throw"},
    {19u, "BIGEL", "bigel"},
    {20u, "WIFI", "wifi"},
    {21u, "KEYBOARD", "keyboard"},
    {22u, "STATS", "stats"},
    {23u, "UPDATE", "update"},
    {24u, "CALIBRATION", "calibration"},
    {25u, "SLICE", "slice"},
    {26u, "PAGE", "page"},
};

static inline size_t screen32_page_descriptor_count(void) {
    return (size_t)SCREEN32_PAGE_DESCRIPTOR_COUNT;
}

static inline const Screen32PageDescriptor* screen32_find_page_descriptor(uint32_t page_id) {
    for (size_t i = 0; i < screen32_page_descriptor_count(); ++i) {
        if (g_screen32_page_descriptors[i].page_id == page_id) {
            return &g_screen32_page_descriptors[i];
        }
    }
    return 0;
}

#ifdef __cplusplus
}
#endif

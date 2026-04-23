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
    {6u, "INFO", "info"},
    {7u, "INPUT", "input"},
    {8u, "INIT", "init"},
    {9u, "WAIT", "wait"},
    {10u, "SERVICE", "service"},
    {11u, "SERVICE2", "service2"},
    {12u, "DEF_PAGE", "def_page"},
    {13u, "DEF_PAGE2", "def_page2"},
    {14u, "DEF_PAGE3", "def_page3"},
    {15u, "DEF_PAGE4", "def_page4"},
    {16u, "KEYBOARD_OLD", "keyboard_old"},
    {17u, "KEYBOARD", "keyboard"},
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

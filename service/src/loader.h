#ifndef _LOADER_H
#define _LOADER_H

#include <stdint.h>
#include "crypto.h"

#define MAX_PAGE_COUNT 0x1000

struct app_header {
    uint32_t magic;
    uint32_t pages;
    char name[0x20];
};

struct app_info {
    uint32_t entry;
    uint32_t ctx;
};

enum page_type {
    PAGE_READ = 1,
    PAGE_WRITE = 2,
    PAGE_EXEC = 4,
    PAGE_ALL = 7,
    PAGE_ENCRYPTED = 8,
    PAGE_SIGNED = 0x10,
};

struct app_page {
    uint32_t start;
    uint32_t size;
    uint32_t flags;
};

struct app_page_crypto {
    uint8_t mode;
    uint8_t key_id;
    uint8_t key[0x20];
    uint8_t iv[0x10];
};

struct app_page_sig {
};

struct app_region {
    uint64_t start;
    uint64_t end;
    uint64_t size;
};

#endif

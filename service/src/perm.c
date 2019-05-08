#include "app.h"
#include "crypto.h"
#include <stdio.h>
#include <string.h>

static int io_service;
static int echo_service;
static int crypto_service;

static char buf[0x1000];

#define DEBUG(...) do { \
    snprintf(&buf[0], sizeof(buf), __VA_ARGS__); \
    Xecho(buf); \
} while (0)

int app_main() {
    io_service = Xlookup("io");
    DEBUG("io service = %d\n", io_service);
    echo_service = Xlookup("echo");
    DEBUG("echo service = %d\n", echo_service);
    crypto_service = Xlookup("crypto");
    DEBUG("crypto service = %d\n", crypto_service);
    DEBUG("exec platform apps = %d\n", Xexec("echo.sys", CTX_UNTRUSTED_APP));
    DEBUG("open system file = %d\n", Xopen("root.key"));
    DEBUG("open platform file = %d\n", Xopen("untrusted.app"));
    DEBUG("open global file = %d\n", Xopen("hello.app"));
    DEBUG("open untrusted file = %d\n", Xopen("not exists"));
    return 0;
}
#include "header.h"

int mx_strlen(const char *s);
void mx_printstr(const char *s) {
    const char* str = s;

    write(1, str, mx_strlen(str));
}

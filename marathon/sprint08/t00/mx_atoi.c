#include "header.h"

int mx_atoi(const char *str) {
    int num = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        num = num * 10 + str[i] - '0';
    }

    return num;
}


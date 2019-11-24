#include "header.h"

char *to_char(const char *argv[]) {
    char *temp;
    char *res = (char *)malloc(sizeof(char) * 5);

    for (int i = 0; i < 5; i++) {
        temp = mx_strtrim(argv[i + 1]);
        res[i] = temp[mx_strlen(temp) - 1];
    }
    return res;
}

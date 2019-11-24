#include "header.h"

bool is_flesh (char *b) {
    int flash = 0;
    for (int i = 0; i < 4; ++i) {
        if (b[i] == b[i + 1]) {
            ++flash;
        }
    }
    return flash == 4;
}

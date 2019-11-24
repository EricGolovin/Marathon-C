#include "header.h"

bool is_kare (int *arr) {
    int kare = 0;
    for (int i = 0; i < 3; ++i) {
        if (arr[i] == arr[i + 1]) {
            ++kare;
        }

    }
    if (kare == 3) {
        return true;
    }
    kare = 0;
    for (int i = 1; i < 4; ++i) {
        if (arr[i] == arr[i + 1]) {
            ++kare;
        }

    }
    return kare == 3;
}

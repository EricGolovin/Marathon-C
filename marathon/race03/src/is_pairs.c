#include "header.h"

int  pairs(int *arr) {
    int pare = 0;
    for (int i = 0; i < 4; ++i) {
        if (arr[i] == arr[i + 1]) {
            ++pare;
        }
    }
    return pare;
}

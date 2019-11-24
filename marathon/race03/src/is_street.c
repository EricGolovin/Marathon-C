#include "header.h"

bool is_street(int *arr) {
    int street = 0;
    for (int i = 0; i  <  4; ++i) {
        if (arr[i] + 1 == arr[i + 1]) {
            ++street;
        }
    }
    return street == 4;
}

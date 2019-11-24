#include "header.h"

bool is_set(int *arr) {
    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        return true;
    }
    if (arr[1] == arr[2] && arr[2] == arr[3]) {
        return true;
    }
    if (arr[2] == arr[3] && arr[3] == arr[4]) {
        return true;
    }
    return false;
}

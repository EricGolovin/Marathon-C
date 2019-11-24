#include "header.h"

int mx_insertion_sort(char **arr, int size) {
    char *temp;
    int count = 0;

    for (int i = 1; i < size; ++i) {
        for(int j = i; j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j]); --j) {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            ++count;
        }
    }
    return count;
}

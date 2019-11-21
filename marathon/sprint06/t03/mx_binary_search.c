#include <unistd.h>
#include "mx_strcmp.c"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int counter = 0, middle;
    int firstIndex = 0; 
    int secondIndex = size - 1;
    while (1) {
        counter++;
        middle = (firstIndex + secondIndex) / 2;
        *count = counter;
        if (mx_strcmp(s, arr[middle]) < 0) {
            secondIndex = middle - 1;
        } else if (mx_strcmp(s, arr[middle]) > 0) {
            firstIndex = middle + 1;
        } else {
            return middle;
        }

        if (firstIndex > secondIndex) {
            *count = counter * 0;
            return -1;
        }
    }
}


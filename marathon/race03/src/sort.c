#include "header.h"

void sort (int *c , char *b) {
    int temp;
    char temp_c;

    for (int i = 1; i < 5; ++i) {
        for(int j = i; (j > 0 && c[j - 1] > c[j]); --j) {
            temp = c[j];
            temp_c = b[j];
            b[j] = b[j - 1];
            c[j] = c[j - 1];
            c[j - 1] = temp;
            b[j - 1]  = temp_c;
        }
    }
}

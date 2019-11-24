#include "header.h"

int *to_int(const char *argv[]) {
    int *res = (int *)malloc(sizeof(int) * 5);
    char *temp;
    int flag = 0;
    int position[5];

    for (int i = 0; i < 5; i++) {
        temp = mx_strtrim(argv[i + 1]);

        if(temp[0] == 'J') {
            res[i] = 11;
        }
        else if(temp[0] == 'Q') {
            res[i] = 12;
        }
        else if(temp[0] == 'K') {
            res[i] = 13;
        }
        else if(temp[0] == 'A' && flag == 0) {
            res[i] = 14;
            position[i] = 1;
        }
        else if (temp[0] == 'A' && flag) {
            res[i] = 1;
        }
        else {
            res[i] = mx_atoi(argv[i + 1]);
        }
        if (res[i] == 2) {
            flag = 1;
            for (int j = 0; j < 5; ++j) {
                if (position[j] == 1) {
                    res[j] = 1;
                }
            }
        }
    }
    return res;
}

#include "header.h"

bool is_duplicate(const char *argv[]){
    for (int i = 1; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if(mx_strcmp(argv[i], argv[j]) == 0) {
                 mx_printerr("Duplicate cards: ");
                 mx_printerr(argv[i]);
                 mx_printerr("\n");
                 return true;
            }
        }
    }
    return false;
}

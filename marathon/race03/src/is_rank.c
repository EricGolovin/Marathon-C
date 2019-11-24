#include "header.h"

bool is_rank(char c) {
    if (c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == 'J' || c == 'Q' || c == 'K' || c == 'A') {
        return true;
    }
    return false;
}

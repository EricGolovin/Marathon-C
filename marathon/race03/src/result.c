#include "header.h"

char *result(int *c, char *b) {
    char *res;

    if (is_street(c) && is_flesh(b) && c[0] == 10) {
        res = "Royal flush\n";
    }
    else if (is_street(c) && is_flesh(b) ) {
        res = "Straight flush\n";
    }
    else if (is_kare(c)) {
        res = "Four of a kind\n";
    }
    else if (pairs(c) == 3) {
        res = "Full house\n";
    }
    else if (is_flesh(b)) {
        res = "Flush\n";
    }
    else if (is_street(c)) {
        res = "Straight\n";
    }
    else if (is_set(c)) {
        res = "Three of a kind\n";
    }
    else if (pairs(c) == 2) {
        res = "Two pair\n";
    }
    else if (pairs(c) == 1) {
        res = "One pair\n";
    }
    else {
        res ="No pair\n";
    }
    return res;
}

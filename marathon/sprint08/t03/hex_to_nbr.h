#ifndef HEX
#define HEX

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mx_isalpha.c"
#include "mx_isdigit.c"

bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

#endif

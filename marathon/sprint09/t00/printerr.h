#ifndef ERR
#define ERR
#include <unistd.h>
#include "mx_strlen.c"
int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif

#ifndef ADDRESS
#define ADDRESS

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

#include "mx_nbr_to_hex.c"
#include "mx_strcpy.c"
#include "mx_strlen.c"
#include "mx_strnew.c"

char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

#endif

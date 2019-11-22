#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mx_atoi.c"
#include "mx_isdigit.c"
#include "mx_isspace.c"
#include "mx_printchar.c"
#include "mx_printint.c"
#include "mx_printstr.c"
#include "mx_strcmp.c"
#include "mx_strcpy.c"
#include "mx_strlen.c"

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

#endif

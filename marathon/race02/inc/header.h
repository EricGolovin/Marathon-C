#ifndef HEADER
#define HEADER

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int mx_atoi(const char *str);
void mx_findResult(int val1, int val2, char operation, int tenth);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_resultPrinting(int val1, int val2, char operation, int result);
int mx_strlen(const char *s);


#endif

#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int mx_atoi(const char *str);
int *to_int(const char *argv[]);
char *to_char(const char *argv[]);
int mx_insertion_sort(char **arr, int size);
bool mx_isdigit(int c);
bool is_duplicate(const char *argv[]);
bool mx_isspace(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
int mx_strlen(const char *s);
bool is_rank(char c);
bool is_suit(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_printerr(const char *s);
bool is_valid(const char *name[]);
bool is_flesh (char *b);
bool is_kare (int *arr);
int  pairs(int *arr);
bool is_set(int *arr);
bool is_street(int *arr);
void sort (int *c , char *b);
char *result(int *c, char *b);

#endif

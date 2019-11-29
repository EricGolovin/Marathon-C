#ifndef MAZE_H
#define MAZE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

#include <stdio.h>

char *mx_file_to_str(const char *filename);
int mx_strlen(const char *s);
char *mx_strWithoutComas(char *str);

#endif

#ifndef AGENT 
#define AGENT

#include <unistd.h>
#include <stdlib.h>

#include "mx_strcpy.c"
#include "mx_strdup.c"
#include "mx_strlen.c"
#include "mx_strnew.c"
#include "mx_create_agent.c"

t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

#endif

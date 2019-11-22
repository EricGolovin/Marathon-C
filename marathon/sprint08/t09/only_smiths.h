#ifndef SMITH
#define SMITH

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mx_create_agent.c"
#include "mx_exterminate_agents.c"
#include "mx_strcmp.c"
#include "mx_strcpy"
#include "mx_strdup.c"
#include "mx_strlen.c"
#include "mx_strnew.c"
#include "mx_exterminate_agents.c"

typedef struct s_agent {
	char *name;
	int power;
	int strength;
} t_agent;

#endif

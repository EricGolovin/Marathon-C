#include "create_new_agents.h"

typedef struct s_agent {
	char *name;
	int power;
	int strength;
} t_agent;

t_agent *mx_create_agent(char *name, int power, int strength) {
	int characterCounter = 0;
	while (*name != '\0') {
		characterCounter++;
		name++;
	}

	t_agent *dstAgent = (t_agent *) malloc(characterCounter * 1 + power * 4 + strength * 4);

	dstAgent->name = name;
	dstAgent->power = power;
	dstAgent->strength = strength;

	return dstAgent;
}


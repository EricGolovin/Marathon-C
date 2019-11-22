#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
	if (name == NULL) {
		return NULL;
	}
	int characterCounter = 0;
	while (*name != '\0') {
		characterCounter++;
		name++;
	}

	t_agent *dstAgent = (t_agent *) malloc(characterCounter * 1 + power * 4 + strength * 4);

	if (dstAgent == NULL) {
		return NULL;
	}

	dstAgent->name = name;
	dstAgent->power = power;
	dstAgent->strength = strength;

	return dstAgent;
}


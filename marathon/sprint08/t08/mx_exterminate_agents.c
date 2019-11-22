#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
	free(agents);
	agents = NULL;
}


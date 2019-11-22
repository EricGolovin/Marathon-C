#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
	int charCounter = 0;
	int totalBytes = 0;
	
	if (name == NULL || power == NULL || strength == NULL || count == NULL) {
		return NULL;
	}

	for (int i = 0; i < count; i++) {
		for (int j = 0; name[i][j] != '\0'; j++) {
			charCounter++;
		}
		totalBytes += power[i] * 4;
		totalBytes += strength[i] * 4;
	}
	totalBytes += charCounter;

	t_agent **dstArr = (t_agent **) malloc(totalBytes);
	
	if (dstArr == NULL) {
		return NULL;
	}
	
	for (int i = 0; i < count; i++) {
		dstArr[i] = mx_create_agent(name[i], power[i], strength[i]);
	}

	return dstArr;
}


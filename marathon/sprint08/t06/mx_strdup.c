#include "create_agent.h"
int mx_strlen(const char *s);
char *mx_strdup(const char *str) {
	char *dstString = (char *) malloc(mx_strlen(str));
	if (dstString == NULL) {
		return NULL;
	}
	mx_strcpy(dstString, str);
	return dstString;
}


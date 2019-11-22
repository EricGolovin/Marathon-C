#include "only_smiths.h"

char *mx_strdup(const char *str) {
	int mx_strlen(const char *s);
	char *dstString = (char *) malloc(mx_strlen(str));
	if (dstString == NULL) {
		return NULL;
	}
	mx_strcpy(dstString, str);
	return dstString;
}


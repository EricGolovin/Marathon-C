#include <unistd.h>
#include <stdlib.h>
#include "mx_strcpy.c"
#include "mx_strlen.c"

char *mx_strdup(const char *str) {
	char *dstString = (char *) malloc(mx_strlen(str));
	if (dstString == NULL) {
		return NULL;
	}
	mx_strcpy(dstString, str);
	return dstString;
}


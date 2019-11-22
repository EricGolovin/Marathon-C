#include <unistd.h>
#include <stdlib.h>
#include "mx_strdup.c"

char *mx_strjoin(char const *s1, char const *s2) {
	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}
	if (s1 == NULL) {
		return mx_strdup(s2);
	}
	if (s2 == NULL) {
		return mx_strdup(s1);
	}
	char *dst = (char *) malloc(mx_strlen(s1) + mx_strlen(s2));
	dst = mx_strcat(dst, s1);
	dst = mx_strcat(dst, s2);
	return dst;
}


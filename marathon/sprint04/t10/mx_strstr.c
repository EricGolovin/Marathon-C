#include <unistd.h>
#include "mx_strchr.c"
#include "mx_strcmp.c"
#include "mx_strlen.c"

char *mx_strstr(const char *s1, const char *s2) {
	char *mx_strchr(const char *s, int c);
	int mx_strcmp(const char *s1, const char *s2);
	int mx_strlen(const char *s);

	char firstElement = s2[0];

	char *sent = mx_strchr(s1, firstElement);

	return sent;
}


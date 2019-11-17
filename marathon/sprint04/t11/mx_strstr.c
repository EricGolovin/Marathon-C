#include <unistd.h>
#include "mx_strchr.c"

char *mx_strstr(const char *s1, const char *s2) {
	char *mx_strchr(const char *s, int c);

	char firstElement = s2[0];

	char *sent = mx_strchr(s1, firstElement);

	return sent;
}

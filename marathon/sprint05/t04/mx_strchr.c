#include <unistd.h>

char *mx_strchr(const char *s, int c) {
	
	char ch = c;

     	while (*s != '\0' && *s != ch) {
		s++;
	}

	if (*s == ch) {
		return (char *) s;
	} else {
		return NULL;
	}
}


#include <unistd.h>

char *mx_strcpy(char *dst, const char *src) {
	while(*src) {
		*dst = *src;
		src++;
		dst++;
	}
	return dst;
}


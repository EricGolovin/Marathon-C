#include <unistd.h>

char *mx_strncpy(char *dst, const char *src, int len) {
	int i = 0;

	while (i < len) {
		dst[i] = src[i];
		i++;
	}
	
	return dst;
}


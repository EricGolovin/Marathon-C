#include <unistd.h>
#include "mx_strlen.c"

void mx_printstr(const char *s) {
	int mx_strlen(const char *s);

	write(1, s, mx_strlen(s));
}

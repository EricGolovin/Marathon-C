#include <unistd.h>
#include "mx_printchar.c"

void mx_only_printable(void) {
	void mx_printchar(char c);
	for (char c = '~'; c >= '!'; --c) {
		mx_printchar(c);
	}
}


#include <unistd.h>
#include "mx_printchar.c"

void mx_isos_triangle(unsigned int length, char c) {
	void mx_printchar(char c);
	for (unsigned int i = 1; i <= length; ++i) {
		for (unsigned int j = 1; j <= i; ++j) {
			mx_printchar(c);
		}
		write(1, "\n", 1);
	}
}


#include <unistd.h>
#include "mx_printchar.c"

void mx_hexadecimal(void) {
	void mx_printchar(char c[]);
	char array[2];

        for (char c = '0'; c <= '9'; ++c) {
		array[0] = c;
		mx_printchar(array);
	}
	
	for (char c = 'A'; c <= 'F'; ++c) {
		array[0] = c;
		mx_printchar(array);
	}
}


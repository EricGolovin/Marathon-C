#include <unistd.h>

void mx_printchar(char c) {
	char writablChar[3];
	writablChar[0] = c;
	writablChar[1] = '\n';
	write(1, writablChar, 3);
}

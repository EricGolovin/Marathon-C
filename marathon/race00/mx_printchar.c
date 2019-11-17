#include <unistd.h>

void mx_printchar(char c) {
	char writableChar[2];
	writableChar[0] = c;
	write(1, writableChar, 2);
}



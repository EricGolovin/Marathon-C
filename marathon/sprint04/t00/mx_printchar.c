#include <unistd.h>

void mx_printchar(int c) {
	char i = c + '0';
	write(1, &i, 1); 
}


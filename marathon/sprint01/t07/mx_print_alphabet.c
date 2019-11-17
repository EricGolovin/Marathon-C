#include <unistd.h>
#include "mx_printchar.c"

void mx_print_alphabet(void) {
	void mx_printchar(char c);
	for (char c = 'A'; c <= 'Z'; c += 2) {
		mx_printchar(c);
		
		char smallLetter = c + 33;
		mx_printchar(smallLetter);
	}	
}


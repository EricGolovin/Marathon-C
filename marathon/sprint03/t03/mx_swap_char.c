#include <unistd.h>

void mx_swap_char(char *s1, char *s2) {
	char temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}


#include <unistd.h>
#include "mx_islower.c"
#include "mx_isupper.c"
#include "mx_tolower.c"
#include "mx_toupper.c"

void mx_reverse_case(char *s) {
	bool mx_islower(int c);
	bool mx_isupper(int c);
	int mx_tolower(int c);
	int mx_toupper(int c);
	
	while (*s != '\0') {
		if (mx_islower(*s)) {
			mx_toupper(*s);
		}
		else if (mx_isupper(*s)) {
			mx_tolower(*s);
		}
		++s;
	}
}


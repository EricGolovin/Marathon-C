#include <unistd.h>
#include "mx_strlen.c"
#include "mx_swap_char.c"

void mx_str_reverse(char *s) {
	int mx_strlen(const char *s);
	void mx_swap_char(char *s1, char *s2);

	int strLength = mx_strlen(s);
	char *strStart = s;
	char *strEnd = s;

	for (int i = 0; i < strLength - 1; ++i) {
		++strEnd;
	}

	for (int i = 0; i < strLength / 2; ++i) {
		mx_swap_char(strStart, strEnd);
		++strStart;
		--strEnd;
	}
}


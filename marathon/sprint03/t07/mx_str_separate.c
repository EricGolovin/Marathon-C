#include <unistd.h>
#include "mx_printchar.c"

void mx_str_separate(const char *str, char delim) {
	void mx_printchar(char c);

	int i, stepper;
	for (i = 0, stepper = 1; str[i] != '\0'; i++ ) {
		if (str[i] == delim && stepper) {
			mx_printchar('\n');
			stepper = 0;
		}
		else if (str[i] != delim) {
			mx_printchar(str[i]);
			stepper = 1;
		}
	}

	mx_printchar('\n');
}


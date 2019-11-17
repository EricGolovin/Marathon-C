#include <unistd.h>

void mx_matrix_voice(void) {
	char beep[] = "\a^G";
	write(1, beep, 3);
}


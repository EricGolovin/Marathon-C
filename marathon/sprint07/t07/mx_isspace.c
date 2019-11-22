#include <unistd.h>
#include <stdbool.h>

bool mx_isspace(char c) {
	char spaces[6] = {' ', '\t', '\n', '\v', '\f', '\r'};

	for (int i = 0; i <= 5; ++i) {
		if (c == spaces[i]) {
			return 1;
		}
	}

	return 0;
}


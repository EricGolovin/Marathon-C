#include <unistd.h>

int mx_count_words(const char *str, char delimiter) {
	int index = 0;
	int counter = 0;
	int checker = 1;

	while (str[index] != '\0') {
		if (str[index] == delimiter) {
			checker = 1;
		}
		if (checker && str[index + 1] != delimiter && str[index + 1] != '\0') {
			counter += 1;
			checker = 0;
		}

		index++;
	}
	return counter;
}


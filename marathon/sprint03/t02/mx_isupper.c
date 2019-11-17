#include <unistd.h>
#include <stdbool.h>

bool mx_isupper(int c) {
	for (char i = 'A'; i <= 'Z'; ++i) {
		if (i == c) {
			return 1;
		}
	}
	return 0;
}


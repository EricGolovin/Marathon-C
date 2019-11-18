#include <unistd.h>
#include <stdbool.h>

bool mx_isdigit(int c) {
	for (int i = '0'; i <= '9'; ++i) {
		if (c == i) {
			return 1;
		}
	}
	return 0;
}


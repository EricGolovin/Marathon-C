#include <unistd.h>

int mx_tolower(int c) {
	for (char i = 'A'; i <= 'Z'; ++i) {
		if (i == c) {
			return (int)(c + 32);
		}
	}

	return (int)c;
}


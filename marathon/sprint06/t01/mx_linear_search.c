#include <unistd.h>
#include "mx_strcmp.c"

int mx_linear_search(char **arr, const char *s) {
	for (int i = 0; arr != NULL; arr++, ++i) {
		if (mx_strcmp(*arr, s) == 0) {
			return i;
		}
	}

	return -1;
}


#include <unistd.h>

int mx_strncmp(const char *s1, const char *s2, int n) {
	int result;

	if (n == 0) {
		return 0;
	}


	for (int i = 0; i < n; i++) {
		if (s1[i] == s2[i]) {
			result = 0;
		} else if (s1[i] < s2[i]) {
			return 1;
		} else if (s1[i] > s2[i]) {
			return -1;
		}
	}

	return result;
}


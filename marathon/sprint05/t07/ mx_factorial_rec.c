#include <unistd.h>

int mx_factorial_rec(int n) {
	if (n < 0) {
		return 0;
	} else if (n >= 2147483647) {
		return 0;
	}

	if (n == 0) {
		return 1;
	}
	
	return n * mx_factorial_rec(n - 1);
}


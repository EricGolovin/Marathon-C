#include <unistd.h>

int mx_factorial_iter(int n) {
	int num = 1;
	if (n == 0) {
		return 0;
	}

	if (n >= 2147483647) {
		return 0;
	}

	for (int i = 1; i <= n; ++i) {
		num = num * i;
	}
	return num;	
}


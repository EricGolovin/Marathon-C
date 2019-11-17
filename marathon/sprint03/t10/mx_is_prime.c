#include <unistd.h>
#include <stdbool.h>

bool mx_is_prime(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i < num; i++) {
		if ((num % i) == 0) {
			return false;
		}
	}

	return true;
}


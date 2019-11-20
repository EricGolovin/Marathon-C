#include <unistd.h>
#include "mx_gcd.c"

int mx_lcm(int a, int b) {
	int lmcCalculated = a * b / mx_gcd(a, b);
	if (lmcCalculated < 0) {
		return -lmcCalculated;
	}

	return lmcCalculated;
}


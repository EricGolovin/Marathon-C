#include <unistd.h>

double mx_pow_rec(double n, unsigned int pow) {
	if (pow != 0) {
		return n * mx_pow_rec(n, pow - 1);
	} else {
		return 1;
	}
}

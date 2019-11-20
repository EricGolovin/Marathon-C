#include <unistd.h>

int mx_gcd(int a, int b) {
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	if (a == 0) {
		return b;
	} else if (b == 0) {
		return a;
	} else if (a > b) {
		return mx_gcd(a - b, b);
	} else {
		return mx_gcd(a, b - a);
	}
}


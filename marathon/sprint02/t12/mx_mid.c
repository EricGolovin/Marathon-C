#include <unistd.h>

int mx_mid(int a, int b, int c) {
	if ((a <= c && a >= b) || (a >= c && a <= b)) {
		return a;
	}
	else if ((b <= a && b >= c) || (b >= a && b <= c)) {
		return b;
	}
	else if ((c <= a && c >= b) || (c >= a && c <= b)) {
		return c;
	}
	return 0;
}


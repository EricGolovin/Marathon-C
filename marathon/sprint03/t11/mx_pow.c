#include <unistd.h>

int mx_pow(int n, unsigned int pow) {
	int returnValue = n;
	for (unsigned int i = 1; i < pow; i++) {
		returnValue *= n;
	}
	
	if (pow == 0) {
		return 1;
	}

	return returnValue;
}


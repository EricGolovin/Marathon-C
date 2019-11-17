#include <unistd.h>

double mx_pow(double n, unsigned int pow) {
	double returnValue = n;
	for (unsigned int i = 1; i < pow; i++) {
		returnValue *= n;
	}
	
	if (pow == 0) {
		return 1;
	}

	return returnValue;
}


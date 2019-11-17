#include <unistd.h>

int mx_sqrt(int x) {
	int n = x;
    	int nOne = 1;
	if (x == 1) {	
		return 1;
	}

    	while (n > nOne) {
        	n = (n + nOne) / 2;
        	nOne = x / n;
    	}

	if (n == 1) {
		return 0;
	}

    	return n;
}


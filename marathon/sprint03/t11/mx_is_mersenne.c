#include <unistd.h>
#include <stdbool.h>
#include "mx_is_prime.c"
#include "mx_pow.c"

bool mx_is_mersenne(int n) {
	bool mx_is_prime(int num);
	int mx_pow(int n, unsigned int pow);

	int counter = 0;

	for (int i = 0; i != 1;) {
		if (mx_is_prime(counter)) {
			if ((mx_pow(2, counter) - 1) == n) {
				i = 1;
				return 1;
			}
		} 
		counter++;
		

		if (counter == 2147483647) {
			return 0;
			i = 1;
		}
	}

	return 0;
}


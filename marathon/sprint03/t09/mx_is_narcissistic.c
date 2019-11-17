#include <unistd.h>
#include <stdbool.h>
#include "mx_pow.c"

bool mx_is_narcissistic(int num) {
	int mx_pow(int n, unsigned int pow);
	
	if (num < 0) {
		return 0;
	}

	int sum = 0, counter = 0, n = num;
	
	while (n != 0)
	{
		counter++;
		n = n / 10;

	}

	n = num;
	while (n != 0)
        {
                sum = mx_pow(n % 10, counter);
                n = n / 10;

        }

	return (sum == num);
}


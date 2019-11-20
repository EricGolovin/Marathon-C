#include <unistd.h>
#include "mx_printchar.c"

void mx_printint(int n) {
	int check = n;
	int negChecker = 0;
	if (check < 0) {
		negChecker = 1;
		check = -check;
	}
	int num = check;
	int number;
	int index = 0;

	while (num > 0)
        {
		number = num % 10;
		++index;
		num /= 10;
        }

	num = check;
	int array[index];
	int i = 0;

	while (num > 0)
        {
                number = num % 10;
                array[i] = number;
		i++;
                num /= 10;
        }
	
	if (negChecker) {
		negChecker = 0;
		write(1, "-", 1);
	}

	for (i = index - 1; i >= 0; --i) { 
		mx_printchar(array[i] + '0');
	}
}


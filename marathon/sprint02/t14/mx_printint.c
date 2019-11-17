#include <unistd.h>
#include "mx_printchar.c"

void mx_printint(int n) {
	void mx_printchar(int c);
	
	int num = n;
	int number;
	int index = 0;

	while (num > 0)
        {
		number = num % 10;
		++index;
		num /= 10;
        }

	num = n;
	int array[index];
	int i = 0;

	while (num > 0)
        {
                number = num % 10;
                array[i] = number;
		i++;
                num /= 10;
        }

	for (i = index - 1; i >= 0; --i) {
		mx_printchar(array[i]);
	}
}


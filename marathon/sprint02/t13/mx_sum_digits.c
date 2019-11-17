#include <unistd.h>

int mx_sum_digits(int num) {
	int digitSum = 0;
	
	while (num != 0) 
	{
		digitSum = digitSum + num % 10;
		num = num / 10;
	}

	if (digitSum < 0) {
		return -digitSum;
	}

	return digitSum;
}


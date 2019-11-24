#include "../inc/header.h"
void mx_findResult(int val1, int val2, char operation, int tenth) {
	int result = 0;
	switch (operation) {
		case '+':
		result = val1 + val2;
		break;
		case '-':
		result = val1 - val2;
		break;
		case '*':
		result = val1 * val2;
		break;
		case '/':
		result = val1 / val2;
		break;
		default:
		break;
	}
	int checkResult = result;
	int tenthResult = 0;
	while (checkResult != 0) {
		checkResult /= 10;
		tenthResult++;
	}
	if (tenthResult == tenth) {
		mx_resultPrinting(val1, val2, operation, result);
	}
}

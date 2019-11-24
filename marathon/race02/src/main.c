#include "../inc/header.h"

int checkForTenth(char *array) {
	int counter = 0;
	char question = '?';

	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] == question) {
			counter += 1;
		}
	}

	return counter;
}

char checkForOperation(char *array) {
	char dstOpr = ' ';

	for (int i = 0; array[i] != '\0'; i++) {
		switch (array[i]) {
			case '+':
			case '-':
			case '*':
			case '/':
			dstOpr = array[i];
			break;
			default:
			break;
		}
	}

	if (dstOpr == ' ') {
		return ' ';
	}

	return dstOpr;
}


int main(int argc, char *argv[])
{
	argc++;
	argc--;
	int questionOp1 = checkForTenth(argv[1]);
	int questionOp2 = checkForTenth(argv[3]);
	int questionRes = checkForTenth(argv[4]);

	int valueOp1 = 0;
	int valueOp2 = 0;
	int valueResult = 0;

	char operation = ' ';

	if (questionOp1 == 0) {
		valueOp1 = mx_atoi(argv[1]);
	}
	if (questionOp2 == 0) {
		valueOp2 = mx_atoi(argv[3]);
	}
	if (questionRes == 0) {
		valueResult = mx_atoi(argv[4]);
	}

	operation = checkForOperation(argv[2]);

	mx_findResult(valueOp1, valueOp2, operation, questionRes);
	
	return 0;
}

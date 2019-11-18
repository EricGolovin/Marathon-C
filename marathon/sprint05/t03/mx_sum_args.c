#include <unistd.h>
#include "mx_isspace.c"
#include "mx_isdigit.c"
#include "mx_atoi.c"

#include <stdio.h>

int main(int argc, char* argv[]) {
	int sum = 0;
	char foundNumber[32];
	for (int i = 1; i < argc; i++) { // looping through all parameters
		printf("Lap #%i -----------------------------------------------------------\n", i);
		int index = 0;
		char *parameter = argv[i];
		int checkerNeg = 0;
		int checkerNum = 1;
		int deshCounter = 0;
		int plusCounter = 0;
		int afterNum = 0;
		int spaceCounter = 0;
		while (*parameter != '\0') {
			printf("parameter whileBegin = %c\n", *parameter);
			while (mx_isspace(*parameter)) {
				parameter++;
				spaceCounter++;
				printf("parameter After_isSpace = %c\n", *parameter);
			}

			if (spaceCounter > 0) {
				checkerNum = 0;
				break;
			}

			if (*parameter == '-' && deshCounter == 0) {
				parameter++;
				deshCounter++;
				checkerNeg = 1;
				printf("parameter After_Dash = %c\n", *parameter);
			}
			if (*parameter == '+' && plusCounter == 0) {
				parameter++;
				plusCounter++;
				printf("parameter After_Plus = %c\n", *parameter);
			}
			while (mx_isdigit(*parameter)) {
				foundNumber[index] = *parameter;
				index++;
				parameter++;
				if (*parameter == '\0') {
					afterNum = 1;
				}
				printf("parameter After_isDigit = %c afterNum = %i\n", *parameter, afterNum);
			}
			if (afterNum) {
				printf("1st brake\n");
				break;
			}
			if (!(mx_isdigit(*parameter)) && *parameter != '\0') {
				checkerNum = 0;
				printf("2nd break\n");
				break;
			}
			printf("parameter = %c\n", *parameter);
			parameter++;
		}
		
		for (int j = 0; foundNumber[j] != '\0'; j++) {
			printf("foundNumber[%i] = %c \n", j, foundNumber[j]);
		}
		printf("CheckerNum = %i\n", checkerNum);
		if (checkerNum) {
			if (checkerNeg) {
				int numToAdd = mx_atoi(foundNumber);	
				printf("Lap #%i NumToAdd = %i+_+_+_+_+_+_+_+_+\n", i, -numToAdd);
				sum = sum - numToAdd;
			} else {
				int numToAdd = mx_atoi(foundNumber);
				printf("Lap #%i NumToAdd = %i ++++++++++++++++\n", i, numToAdd);
				sum += numToAdd;			
			}
		}
		printf("_______sum________ = %i\n", sum);
		for (int j = 0; j < 32; j++) {
			foundNumber[j] = '\0';
		}
	}
	
	printf("sum = %i\n", sum);
	return 0;
}

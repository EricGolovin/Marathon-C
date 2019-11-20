#include <unistd.h>
#include "mx_isspace.c"
#include "mx_isdigit.c"
#include "mx_atoi.c"
#include "mx_printint.c"

int main(int argc, char* argv[]) {
	int sum = 0;
	char foundNumber[32];
	for (int i = 1; i < argc; i++) {	
		int index = 0;
		char *parameter = argv[i];
		int checkerNeg = 0, checkerNum = 1, deshCounter = 0;
		int plusCounter = 0, afterNum = 0, spaceCounter = 0;
		while (*parameter != '\0') {	
			while (mx_isspace(*parameter)) {
				parameter++;
				spaceCounter++;	
			}

			if (spaceCounter > 0) {
				checkerNum = 0;
				break;
			}

			if (*parameter == '-' && deshCounter == 0) {
				parameter++;
				deshCounter++;
				checkerNeg = 1;	
			}
			if (*parameter == '+' && plusCounter == 0) {
				parameter++;
				plusCounter++;	
			}
			while (mx_isdigit(*parameter)) {
				foundNumber[index] = *parameter;
				index++;
				parameter++;
				if (*parameter == '\0') {
					afterNum = 1;
				}
			}
			if (afterNum) {
				break;
			}
			if (!(mx_isdigit(*parameter)) && *parameter != '\0') {
				checkerNum = 0;	
				break;
			}
			parameter++;
		}
		
		if (checkerNum) {
			if (checkerNeg) {
				int numToAdd = mx_atoi(foundNumber);	
				sum = sum - numToAdd;
			} else {
				int numToAdd = mx_atoi(foundNumber);
				sum += numToAdd;			
			}
		}
		for (int j = 0; j < 32; j++) {
			foundNumber[j] = '\0';
		}
	}
	mx_printint(sum);
	return 0;
}


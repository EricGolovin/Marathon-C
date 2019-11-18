#include <unistd.h>
#include "mx_isdigit.c"
#include "mx_atoi.c"
#include "mx_isspace.c"
#include <stdio.h>

void printBinary(int n) {
	int binaryNumber[32];
	int initialN = n;
	int index = 0;
	int maxNum = 32;

	if (n < 0) {
		n = -n;
	} 

	while (index < maxNum) {
		binaryNumber[index] = n % 2;
		n = n / 2;
		index++;
	}

	if (initialN < 0) {
		for (int i = 0; i < 32; ++i) {
			if (binaryNumber[i] == 0) {
				binaryNumber[i] = 1;
			} 
			else if (binaryNumber[i] == 1) {
				binaryNumber[i] = 0;
			}
		}
	}
	for (int i = index - 1; i >= 0; --i) {
		char ch[2];
		ch[0] = binaryNumber[i] + '0';
		write(1, &ch, 1);
	}
	write(1, "\n", 1);
}

int main(int argc, char const *argv[])
{ 

	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	
	for (int i = 1, index = 0; i < argc; ++i) {
		printf("New loop = %i\n", i);
		char array[32];
		// adding numbers from argv to array

		// for (int j = 0; argv[i][j] != '\0'; ++j) {
		// 	if (mx_isdigit(argv[i][j])) {
		// 		array[index] = argv[i][j] - '0';
		// 		index++;
		// 	} else {
		// 		for (int q = 0ome; q < 32; q++) {
		// 			array[q] = '\0';
		// 		}
		// 		i = 0;
		// 		break;
		// 	}
		// }

		char const *firstElement = argv[i];
		//printf("B firstElement = %c\n", *firstElement);

		while (*firstElement != '\0') {
			if (mx_isdigit(*firstElement)) {
				array[index] = *firstElement;
				index++;
				printf("firstElement = %c\n", *firstElement);
				firstElement++;
			} else if (mx_isspace(*firstElement)) {
				firstElement++;
			} else {
				break;
			}
			while (mx_isspace(*firstElement)) {
				firstElement++;
			}
			if (*firstElement == '-') {
				firstElement++;
			}
		}
		
		//printf("A firstElement = %c\n", *firstElement);

		if (*firstElement == '\0') {
			printf("array = %s\n", array);
			printBinary(mx_atoi(array));
		}


		// for (int sm = 0; sm < 32; sm++) {
		// 	printf("array[%i] = %i\n", sm, array[sm]);
		// }
		// printf("arrayNumber = %i\n", mx_atoi(array));
		// if (index > 0) {
		// 	printBinary(mx_atoi(array));
		// }

		for (int i = index; i > 0; i--) {
			array[i] = '\0';
		}
	}

	return 0;
}

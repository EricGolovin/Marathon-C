#include <unistd.h>
#include "mx_atoi.c"
#include "mx_isdigit.c"
#include "mx_printint.c"

int main(int argc, char *argv[]) {
	// checking if all parameters are digits 
	int checkerForDigit = 0;
	for (int i = 1; i < argc; ++i) {
		if (mx_isdigit(argv[i][0])) {
			checkerForDigit = 1;
		} else {
			checkerForDigit = 0;
		}
	}

	if (checkerForDigit) {
		int theFirstParameter = argv[1][0] - '0';
		int theLastParameter = argv[argc - 1][0] - '0';
		char integers[theLastParameter][theLastParameter];
		
		// adding numbers to the first line
		for (int i = 0, j = theFirstParameter; i < theLastParameter; ++i, ++j) {
			integers[0][i] = j;
			
			char numToPrint = j + '0';
			write(1, &numToPrint, 1);
			write(1, "\t", 1);
		}

		write(1, "\n", 1);

		for (int iFirst = 0, i = 1; i < theLastParameter; ++iFirst, ++i) {
			int num = 0;
			integers[i][iFirst] = integers[0][i];
			for (int j = 0; j < theLastParameter; ++j) {
				num = integers[0][i];
				integers[i][j] = num;
				if (j > 0 ) {
					integers[i][j] += integers[i][j - 1];
				}
				mx_printint(integers[i][j]);
				write(1, "\t", 1);
			}
			write(1, "\n", 1);
		}
	}


	return 0;
}

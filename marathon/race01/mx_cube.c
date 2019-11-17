#include "mx_printchar.c"

void mx_cube(int n) {
	void mx_printchar(char c); 

	int twoNumbercounter = 0;
	int leftSpaceCounter = 0;
	int rightSpaceCounter = 0;

	for (int i = n; i > 1; i -= 2) {
		twoNumbercounter++;
	}

	leftSpaceCounter = twoNumbercounter;

	if (n > 1) {
		// first line
		for (int i = 1; i <= twoNumbercounter + 1; ++i) {
			mx_printchar(' ');
		}

		mx_printchar('+');
		for (int i = 1; i <= n * 2; ++i) {
			mx_printchar('-');
		}
		mx_printchar('+');
		mx_printchar('\n');

		// second lineS
		for (int i = 1, index = 0; i <= twoNumbercounter; ++i, ++index) {
			if (i == 1) {
				rightSpaceCounter = leftSpaceCounter;
			} else {
				rightSpaceCounter = leftSpaceCounter - i + 1;
			}
			for (int j = 1; j <= rightSpaceCounter; ++j) {
				mx_printchar(' ');
			}

			mx_printchar('/');
			for (int j = 1; j <= n * 2; ++j) {
				mx_printchar(' ');
			}
			mx_printchar('/');

			if (i == 1) {
				mx_printchar('|');
			} else {
				for (int j = 1; j <= index; ++j) {
					mx_printchar(' ');
				}
				mx_printchar('|');
			}
			rightSpaceCounter--;
			mx_printchar('\n');
		}

		// third line
		mx_printchar('+');
		for (int i = 1; i <= n * 2; ++i) {
			mx_printchar('-');
		}
		mx_printchar('+');
		for (int i = 1; i <= twoNumbercounter; ++i) {
			mx_printchar(' ');
		}
		mx_printchar('|');
		mx_printchar('\n');

		// fourth lineS
		for (int i = twoNumbercounter + 2; i < n + 1; ++i) {
			mx_printchar('|');
			for (int j = 1; j <= n * 2; ++j) {
				mx_printchar(' ');
			}
			mx_printchar('|');

			for (int j = 1; j <= twoNumbercounter; ++j) {
				mx_printchar(' ');
			}
			mx_printchar('|');
			mx_printchar('\n');
		}
		mx_printchar('|');
		for (int j = 1; j <= n * 2; ++j) {
			mx_printchar(' ');
		}
		mx_printchar('|');
		for (int j = 1; j <= twoNumbercounter; ++j) {
			mx_printchar(' ');
		}
		mx_printchar('+');
		mx_printchar('\n');

		// fifth line
		for (int i = 1; i <= twoNumbercounter; ++i) {
			if (i != twoNumbercounter) {
				mx_printchar('|');
				for (int j = 1; j <= n * 2; ++j) {
					mx_printchar(' ');
				}
				mx_printchar('|');

				for (int j = 1; j <= twoNumbercounter - i; ++j) {
					mx_printchar(' ');
				}
				mx_printchar('/');
				mx_printchar('\n');
			} else {
				mx_printchar('|');
				for (int j = 1; j <= n * 2; ++j) {
					mx_printchar(' ');
				}
				mx_printchar('|');
				mx_printchar('/');
				mx_printchar('\n');
			}
		}

		// sixth line
		mx_printchar('+');
		for (int i = 1; i <= n * 2; ++i) {
			mx_printchar('-');
		}
		mx_printchar('+');
	}
}

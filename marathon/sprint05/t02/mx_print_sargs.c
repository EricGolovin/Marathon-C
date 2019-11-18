#include <unistd.h>
#include "mx_printstr.c"

int main(int argc, char const *argv[]) {
	if (argc > 1) {
		int elements[argc - 1];

		for (int i = 0, j = 1; i < argc - 1; ++i, ++j) {
			elements[i] = argv[j][0];
		}

		for (int i = 0; i < argc - 2; i++) {
			for (int j = 0; j < argc - 2 - i; j++) {
				if (elements[j] > elements[j + 1]) {
					int temp = elements[j];
					elements[j] = elements[j + 1];
					elements[j + 1] = temp;
				}
			}
		}

		for (int i = 0, l = 0; i < argc - 1; ++i, l++) {
			for (int j = 1; j < argc; ++j) {
				if (elements[l] == (int) argv[j][0]) {
					mx_printstr(argv[j]);
					mx_printstr("\n");
				}
			}
		}
	}

	return 0;
}

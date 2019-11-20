#include <unistd.h>
#include "mx_printchar.c"

int main(int argc, char const *argv[]) {
	int counter = argc * 0;
	for (int i = 0; argv[0][i] != '\0'; ++i) {
		counter = i;
	}
		
	char arr[counter];
	int arrC = counter - 1;
	for (int i = counter; argv[0][i] != '/'; i--) {
		arr[arrC] = argv[0][i];
		if (argv[0][i] != '/') {
			arrC--;
		}
	}
	arrC++;
	while (arrC != counter - 1) {
		write(1, &arr[arrC], 1);
		arrC++;
	}
	write(1, &arr[arrC], 1);
	write(1, "\n", 1);
	
	return 0;
}


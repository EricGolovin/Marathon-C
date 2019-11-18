#include <unistd.h>
#include "mx_printstr.c"

int main(int argc, char const *argv[])
{
	int counter = 0;

	mx_printstr(argv[0]);
	mx_printstr("\n");

	if (argc > 1) {
		for (int i = 0; i < argc; ++i) {
			counter++;
		}
	}

	char toPrint = counter + '0';
	char arr[3];
	arr[0] = toPrint;

	mx_printstr(arr);
	mx_printstr("\n");

	return 0;
}

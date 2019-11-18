#include <unistd.h>
#include "mx_printstr.c"

int main(int argc, char const *argv[])
{
	if (argc > 1) {
		for (int i = 2; argv[0][i] != '\0'; i++) {
			char arr[2];
			arr[0] = argv[0][i];
			write(1, &arr, 1);
		}
		write(1, "\n", 1);
	}
	
	return 0;
}

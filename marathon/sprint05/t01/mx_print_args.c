#include <unistd.h>
#include "mx_printstr.c"

int main(int argc, char const *argv[])
{
	if (argc > 1) {
		for (int i = 1; i <= argc - 1; ++i) {
			mx_printstr(argv[i]);
			mx_printstr("\n");
		}
	}

	return 0;
}


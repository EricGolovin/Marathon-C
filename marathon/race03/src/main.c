#include "header.h"

int main(int argc, char const *argv[]) 
{
 	if (argc != 6 ) {
		mx_printerr("usage: ./race03 [card1] [card2] [card3] [card4] card5\n");
		return 0;
	}
	if (!is_valid(argv)) {
		return 0;
	}
	int *m = to_int(argv);
	char *x = to_char(argv);
		sort(m, x);
		if (is_duplicate(argv)) {
			return 0;
		} 
	mx_printstr(result(m, x));
	return 0;
}

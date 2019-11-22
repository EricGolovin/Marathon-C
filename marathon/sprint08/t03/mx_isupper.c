#include "hex_to_nbr.h"

bool mx_isupper(int c) {
	for (char i = 'A'; i <= 'Z'; ++i) {
		if (i == c) {
			return 1;
		}
	}
	return 0;
}


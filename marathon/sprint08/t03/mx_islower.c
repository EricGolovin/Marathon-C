#include "hex_to_nbr.h"

bool mx_islower(int c) {
	for (char i = 'a'; i <= 'z'; ++i) {
		if (i == c) {
			return 1;
		}
	}
	
	return 0;
}


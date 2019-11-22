#include "hex_to_nbr.h"

bool mx_isalpha(int c) {
	for (char i = 'a'; i <= 'z'; ++i) {
		if (c == i) {
			return 1;
		}
	}

	for (char i = 'A'; i <= 'Z'; ++i) {
		if (c == i) {
			return 1;
		}
	}

	return 0;
}


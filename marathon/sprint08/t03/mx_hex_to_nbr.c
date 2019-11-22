#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	int index = 0;
	while (hex[index] != '\0') {
		if (mx_isalpha(hex[index]) || mx_isdigit(hex[index])) {
		} else { 
			return 0;
		}
		index++;
	}

	int length = index - 1, base = 1, dstValue = 0;

	for (int i = length; i >= 0; i--) {
		if (mx_isdigit(hex[i])) {
			dstValue += (hex[i] - 48) * base;
			base *= 16;
		} else if (mx_isalpha(hex[i])) {
			dstValue += (hex[i] - 55) * base;
			base *= 16;
		}
	}

	return dstValue;
}


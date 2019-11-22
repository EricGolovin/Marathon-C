#include <unistd.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
	char *newString;
	newString = (char *) malloc(size + 1);
	
	if (newString == NULL) {
		return NULL;
	}

	for (char *p = newString; p < newString + size; ++p) {
		*p = '\0';
	}
	newString[size] = '\0';

	return newString;
}


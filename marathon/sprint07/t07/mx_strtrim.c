#include <unistd.h>
#include <stdlib.h>
#include "mx_isspace.c"
#include "mx_strlen.c"
#include "mx_strncpy.c"
#include "mx_strnew.c"

char *mx_strtrim(const char *str) {
	int counter = 0;	
	while (mx_isspace(*str)) {
		str++;
	}
	while (*str != '\0') {
		counter++;
		str++;
	}
	str--;
	while (mx_isspace(*str)) {
		str--;
		counter--;
	}
	char *dstString = (char *) malloc(counter);

	for (int i = 0; i < counter - 1; i++) {
		str--;
	}
	for (int i = 0; i < counter; i++) {
		dstString[i] = *str;	
		str++;
	}
	dstString[counter] = '\0';
	
	free(dstString);
	return dstString;
}


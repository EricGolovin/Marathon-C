#include <unistd.h>
#include <stdlib.h>
#include "mx_strtrim.c"
#include <stdio.h>
char *mx_del_extra_whitespaces(const char *str) {
	char *dst = mx_strtrim(str);
	
	int index = 0, counter;
	while (dst[index] != '\0') {
		index++;
	}
	counter = index;
	for (int i = 0; i < 17; i++) {
                printf("%c", dst[i]);
        
	int spaceChecker = 1;
	char *dstString = (char *) malloc(counter);
	for (int i = 0; i <= counter; i++) {
		if (mx_isspace(str[i]) && spaceChecker) {
			dstString[i] = str[i];
			spaceChecker = 0;
		} else if (!(mx_isspace(str[i]))) {
			dstString[i] = str[i];
			spaceChecker = 1;
		}
	}

	return dstString;
}


int main() {
	char name[] = "\f  My name...     is  \r Neo  \t\n ";
	char *dst = mx_del_extra_whitespaces(name);

	for (int i = 0; i < 17; i++) {
		printf("%c", dst[i]);
	}
	return 0;
}

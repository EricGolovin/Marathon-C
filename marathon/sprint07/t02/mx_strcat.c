#include <stdio.h>
#include <stdlib.h>
#include "mx_strlen.c"

char *mx_strcat(char *s1, const char *s2) {
	while (*s1 != '\0') {
		s1++;
	}

	while ((*s1++ = *s2++) != '\0');

	return s1;
}

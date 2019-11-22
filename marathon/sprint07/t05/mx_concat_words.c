#include <unistd.h>
#include <stdlib.h>
#include "mx_strcat.c"
#include "mx_strdel.c"
#include "mx_strnew.c"

char *mx_concat_words(char **words) {
	if (words == NULL) {
		return NULL;
	}

	int characterCount = 0;
	int wordCounter = 0;
	
	for (int i = 0; words[i] != NULL; i++) {
		wordCounter++;
		for (int j = 0; words[i][j] != '\0'; j++) {
			characterCount++;
		}
	}

	char *dstString = (char *) malloc(characterCount + wordCounter);

	for (int i = 0; words[i] != '\0'; i++) {
		if (i > 0) {
			char *s1 = dstString;
			while (*s1 != '\0') {
				s1++;
			}
			*s1 = ' '; 
		}
		mx_strcat(dstString, words[i]);
		
	}
	
	free(dstString);
	return dstString;
}


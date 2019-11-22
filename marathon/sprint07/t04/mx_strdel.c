#include <unistd.h>
#include <stdlib.h>

void mx_strdel(char **str) {
	if (str == NULL) {
	
	} else {
		free(*str);
		*str = NULL;
	}
}


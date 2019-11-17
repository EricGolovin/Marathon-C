#include <unistd.h>
#include "mx_strlen.c"
#include "mx_strstr.c"

int mx_count_substr(const char *str, const char *sub) {
	int mx_strlen(const char *s);
	char *mx_strstr(const char *s1, const char *s2);

	int counter = 0;
	//int subLength = mx_strlen(sub);

	const char *c = str;

	for (int i = 0; str[i] != '\0'; ++i) {
		if (mx_strstr(c, sub) != NULL) {
			c = mx_strstr(c, sub);
			c++;
			counter++;
		}
	}

	return counter;
}


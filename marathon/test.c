#include <unistd.h>

int main(void) {
        if () {
		write(1, "true\n", 5);
        }
        
        if () {
        	write(1, "false\n", 6);
	}

        return 0;
}

bool mx_isupper(int c) {
        for (char i = 'a'; i <= 'z'; ++i) {
                if (i == c) {
                        return 1;
                }
        }
        return 0;
}

int main() {
	return 0;
}


#include <unistd.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
        int i;
        for (i = 0; src[i] != '\0'; ++i) {
                dst[i] = src[i];
        }

        dst[i] = '\0';
        return dst;
}

int main() {
        char c01[10];
        char c02[10] = "123456789\0";

        mx_strcpy(c01, c02);

        for (int i = 0; i < 9; i++) {
                printf("%c", c01[i]);
        }
        return 0;
}


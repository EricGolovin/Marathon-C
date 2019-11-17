#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
	char sent01[] = "Follow the white rabbit.$\nKnock, knock, Neo.$\n";
	write(1, sent01, strlen(sent01));
}


#include <unistd.h>
#include "mx_printstr.c"

void mx_is_positive(int i) 
{
	void mx_printstr(const char *s);
	if (i > 0) 
	{
		mx_printstr("positive\n");
	} 
	else if (i < 0) {
		mx_printstr("negative\n");
	}
	else if (i == 0) 
	{
		mx_printstr("zero\n");
	}
}


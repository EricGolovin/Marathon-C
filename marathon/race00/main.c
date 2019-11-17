#include <unistd.h>
#include "race00.c"

int main()
{
	race00(5, 4, 1, 1);
	race00(4, 1, 3, 0);
	race00(1, 4, 0, 0);
	race00(3, 0, 19, 91);
	race00(1, 1, 1, 1);
	return 0;
}

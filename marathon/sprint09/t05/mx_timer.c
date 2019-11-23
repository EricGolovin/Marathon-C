#include <unistd.h>
#include <time.h>

double mx_timer(void (*f)()) {
	double startTime = clock();
	f();
	double endTime = clock();

	if (startTime < 0 || endTime < 0) {
		return -1;
	}

	return endTime - startTime;
}

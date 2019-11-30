#include "matrix.h"

int prob(int percentage) {

	int num = random() % 100;

	if (num < percentage)
		return 1;


 	return 0;
}

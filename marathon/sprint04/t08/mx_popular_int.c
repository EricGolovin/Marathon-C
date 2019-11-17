#include <unistd.h>

int mx_popular_int(const int *arr, int size) {

	char arrayCop[size];

	int currentCounter = 0;
	int maxCounter = 1;
	int popular = 0;

	for (int i = 0; i < size; i++) {
		arrayCop[i]	= arr[i];
	}

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arrayCop[j] > arrayCop[j + 1]) {
				int temp = arrayCop[j];
				arrayCop[j] = arrayCop[j + 1];
				arrayCop[j + 1] = temp;
			}
		}
	}

	for (int i = 1; i < size; i++) {
		if (arrayCop[i] == arrayCop[i - 1]) {
			currentCounter++;
		} else {
			if (currentCounter > maxCounter) {
				maxCounter = currentCounter;
				popular = arrayCop[i - 1];
			} else
			currentCounter = 1;
		}
	}

	if (popular == 0) {
		return arr[0];
	} else {
		return popular;
	}
}


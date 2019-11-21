#include <unistd.h>

void mx_arr_rotate(int *arr, int size, int shift) {
	int byShift = shift;
	if (shift < 0) {
		byShift = -byShift;
	}
	
	if (shift < 0) {
		for (int i = 0; i < byShift; i++) { 
			int temp = arr[0], j;
			for (j = 0; j < size - 1; j++) {
				arr[j] = arr[j + 1];
			}
			arr[j] = temp;
		}
	} else {
		for (int i = 0; i < byShift; ++i) { 
			int last = arr[size - 1];
			for (int j = size - 1; j > 0; --j) {
				arr[j] = arr[j - 1];
			}
			arr[0] = last;
		}	
	}
}


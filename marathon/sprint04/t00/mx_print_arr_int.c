#include <unistd.h>
#include "mx_printint.c"

void mx_print_arr_int(const int *arr, int size) {
	void mx_printint(int n);
	for (int i = 0; i < size; i++) {
		mx_printint(arr[i]);
	}
}


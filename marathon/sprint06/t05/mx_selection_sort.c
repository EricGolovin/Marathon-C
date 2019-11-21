#include <unistd.h>
#include "mx_strlen.c"
#include "mx_strcmp.c"

int mx_selection_sort(char **arr, int size) {
	int minIndex, swapCounter = 0;
	for (int i = 0; i < size - 1; i++) {
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (mx_strlen(arr[j]) == mx_strlen(arr[minIndex])) {
				if (mx_strcmp(arr[j], arr[minIndex]) < 0) {
					minIndex = j;
				}
			} else {
				if (mx_strlen(arr[j]) < mx_strlen(arr[minIndex])) {
					minIndex = j;
				}
			}
		}
		swapCounter++;
		char *temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	return swapCounter;
}


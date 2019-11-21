#include <unistd.h>
#include "mx_strlen.c"

int mx_insertion_sort(char **arr, int size) {
	int charToNumArray[size];
	int numberOfShifts = 0;

	for (int i = 0; i < size; i++) {
		charToNumArray[i] = mx_strlen(arr[i]);
	}


	int key, j; 
	for (int i = 1; i < size; i++) { 
		key = charToNumArray[i]; 
		j = i - 1;
		
		while (j >= 0 && charToNumArray[j] > key) { 
			charToNumArray[j + 1] = charToNumArray[j];
			numberOfShifts++;
			j = j - 1; 
		} 
		
		charToNumArray[j + 1] = key; 
	}

	return numberOfShifts;
}


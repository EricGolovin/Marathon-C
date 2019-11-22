#include "dublicate.h"
#include <stdio.h>
t_intarr *mx_del_dup_sarr(t_intarr *src) {
	int size = src->size;
	printf("size = %i\n", size);
//	int *array = src->arr;
	int counter = 0;
//	int sortedArr[size];
	/*
	for (int i = 0; i < size; i++) {
		sortedArr[i] = array[i];
		printf("sortedArr[%i] = %i\n", i, sortedArr[i]);
	}
	*/
	/*
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; j++) {
			if (sortedArr[j] > sortedArr[j + 1]) {
				int temp = sortedArr[i];
				sortedArr[i] = sortedArr[i + 1];
				sortedArr[i + 1] = temp;
			}
		}
	}
	*/
	/*
	for (int i = 1; i < size; i++) {
		if (sortedArr[i] != sortedArr[i - 1]) {
			counter++;
		}
	}
	*/
	int *dstArr = (int *) malloc(counter);

	t_intarr *dstArray = NULL;

	dstArray->arr = dstArr;
	dstArray->size = counter;

	return dstArray;
}

int main() {
	int nums[6] = {2, 2, 1, 1, 4, 4};
	t_intarr s; 
	s.arr = nums;
	s.size = 6;
	mx_del_dup_sarr(&s);
	return 0;
}


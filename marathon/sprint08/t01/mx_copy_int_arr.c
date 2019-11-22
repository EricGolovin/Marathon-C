#include "dublicate.h"

int *mx_copy_int_arr(const int *src, int size) {
	int *dstArray; 
	dstArray = (int *) malloc(size);
	
	if (dstArray == NULL || src == NULL) {
		return NULL;
	}
	for (int i = 0; i < size; i++) {
		dstArray[i] = src[i];
	}
	return dstArray;
}


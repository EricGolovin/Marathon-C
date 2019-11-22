#ifndef DUBLICATE
#define DUBLICATE 

#include <unistd.h>
#include <stdlib.h>

#include "mx_copy_int_arr.c"

int *mx_copy_int_arr(const int *src, int size);

typedef struct s_intarrr {
	int *arr;
	int size;
} t_intarr;

#endif 

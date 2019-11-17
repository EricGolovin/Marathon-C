#include <unistd.h>

void mx_ref_pointer(int i, int ******ptr) {
	int someT = i;
	int *one = &someT;
        int **two = &one;
        int ***three = &two;
        int ****four = &three;
        int *****five = &four;
        int ******six = &five;

	******six = ******ptr;
}


#include "../inc/header.h"
void mx_resultPrinting(int val1, int val2, char operation, int result) {
	mx_printint(val1);
	mx_printchar(' ');
	mx_printchar(operation);
	mx_printchar(' ');
	mx_printint(val2);
	mx_printchar(' ');
	mx_printint(result);
	mx_printchar('\n');
}

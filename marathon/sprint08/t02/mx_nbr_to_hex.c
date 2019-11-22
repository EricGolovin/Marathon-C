#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char hexaDeciNum[100]; 
    int i = 0; 
    int num = nbr;
    while (num != 0) {
    	int temp  = 0;
    	temp = num % 16;
    	if (temp < 10) { 
    		hexaDeciNum[i] = temp + 48;
    		i++; 
    	} else { 
    		hexaDeciNum[i] = temp + 55; 
    		i++;
    	} 
    	num /= 16;
    }

    char *dstArray = mx_strnew(i);

    for (int j = i - 1, index = 0; j >= 0; j--, index++) {
    	dstArray[index] = hexaDeciNum[j];
    }

    return dstArray; 
}


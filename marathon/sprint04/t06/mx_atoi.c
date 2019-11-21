#include <stdio.h>
#include "mx_isdigit.c"
#include "mx_isspace.c"

int mx_atoi(const char *str) {
	bool mx_isdigit(int c);
	bool mx_isspace(char c);

	int number = 0;
    int i = 0;

    while(str[i] != '\0')
    {

    	if (((int) str[i]) <= 99) {
    		if (mx_isspace(str[i])) {
    			number = number * 10 + 32;
    		}
    		number = number * 10 + ((int) str[i]);
    	} else if (((int) str[i]) >= 100) {
    		number = number * 100 + ((int) str[i]);
    	} 
        
        i++;
    } 

    return number;
}


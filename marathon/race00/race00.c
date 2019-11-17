#include <unistd.h>
#include "mx_printchar.c"
#include "mx_printstr.c"

void race00(int map_length, int map_width, int one_y, int one_x) {
	void mx_printchar(char c);
	void mx_printstr(const char *s);

	int counter = 1;
	
	if ((map_length == one_y && map_width == one_x) || (map_length <= one_y && map_width <= one_x)) {
	} else if (map_width == 1 && (one_y <= map_length && one_x <= map_width)) {
		mx_printstr("<=>\n");
	} else if (map_width == 2 && (one_y <= map_length && one_x <= map_width)) {
		mx_printstr("<==>\n");
	} else {
		mx_printstr("<=");
		for (int i = 1; i < map_width - 1; i++) {
			mx_printstr("-");
		}
		mx_printstr("=>\n");
	}
	
	for (int i = 0; i < map_length; i++) {
		if ((map_length <= one_y) || (map_width <= one_x)) {
			break;
		} 
		if (counter) {
			mx_printstr("*");
		} else {
			mx_printstr("+");
		}
		for (int j = 0; j < map_width; j++) {
			if ((i == one_y) && (j == one_x)) {
				mx_printstr("1");
			} else {
				mx_printstr("0");
			}
		}
		if (counter) {
			mx_printstr("*");
			counter = 0;
		} else {
			mx_printstr("+");
			counter = 1;
		}
		mx_printstr("\n");
	}

	if ((map_length == one_y && map_width == one_x) || (map_length <= one_y && map_width <= one_x)) {
	} else if (map_width == 1 && (one_y <= map_length && one_x <= map_width)) {
		mx_printstr("<=>\n");
	} else if (map_width == 2 && (one_y <= map_length && one_x <= map_width)) {
		mx_printstr("<==>\n");
	} else {
		mx_printstr("<=");
		for (int i = 1; i < map_width - 1; i++) {
			mx_printstr("-");
		}
		mx_printstr("=>\n");
	}
}

int main()
{
	race00(5, 4, 1, 1);
	race00(4, 1, 3, 0);
	race00(1, 4, 0, 0);
	race00(3, 0, 19, 91);
	race00(1, 1, 1, 1);
	return 0;
}

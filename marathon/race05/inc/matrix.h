#ifndef MATRIX_H
#define MATRIX_H

#include <string.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

struct column {
	char *rows;
};


int prob(int percentage);
char get_random_num();
int kbhit(void);
void matrix(WINDOW *mainwin);

#endif

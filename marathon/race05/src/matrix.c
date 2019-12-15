#include "matrix.h"

void matrix(WINDOW *mainwin) {

	int r, c, i, j;
	struct column *cols;
	getmaxyx(stdscr, r, c);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);

	wbkgd(mainwin, COLOR_PAIR(1));
	cols = malloc(sizeof(struct column) * c / 2);
	memset(cols, 0, sizeof(struct column) * c / 2);

	nodelay(stdscr, TRUE);
	while (1) {
		wclear(mainwin);
		for(i = 0; i < c/2; i++) {
			int flag;
			struct column *col = &cols[i];
			if(!col->rows) {
				col->rows = (char *)malloc(r * sizeof(char));
				memset(col->rows, 0, r * sizeof(char));

			}
			memmove(col->rows + 1, col->rows, r - 1);
			if(col->rows[1] == 0) {
				if(prob(2)) {
					col->rows[0] = get_random_num();
				}
			} else {
				if(prob(10)) {
					col->rows[0] = 0;
				} else {
					col->rows[0] = get_random_num();
				}
			}
			flag = 0;
			attron(COLOR_PAIR(2));
			for(j = r - 1; j >= 0; j--) {
				if(col->rows[j] != 0) {

					if(prob(10))
					col->rows[j]++;

					if(flag && prob(40))
					col->rows[j]++;

					mvwaddch(mainwin, j, i * 2, col->rows[j]);
					if(flag) {
						attroff(COLOR_PAIR(1));
						flag = 0;
						attron(COLOR_PAIR(2));
					}
				} else {
					flag = 1;
					attroff(COLOR_PAIR(2));
					attron(COLOR_PAIR(1));
				}
			}
		}
		refresh();
		usleep(100000);
		if (getch() == 'q') {
			break;
		}
	}
}

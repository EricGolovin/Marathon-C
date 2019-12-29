#include "hero.h"

void mx_centerStr(WINDOW *win, int row, char *title) {
  int len, indent, y, x;

  getmaxyx(win, y, x);

  len = strlen(title);
  indent = x - len;
  indent /= 2;

  mvwaddstr(win, row, indent, title);
  wrefresh(win);
}

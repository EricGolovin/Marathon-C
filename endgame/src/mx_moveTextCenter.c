#include "hero.h"

void mx_moveTextCenter(WINDOW *win, int row, char *title) {
  int len, indent, y, x;
  getmaxyx(win, y, x);

  len = strlen(title);
  indent = x - len;
  indent /= 2;

  wmove(win, row, indent);
  wrefresh(win);
}

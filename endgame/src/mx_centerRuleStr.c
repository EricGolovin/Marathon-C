#include "hero.h"

void mx_centerRuleStr(WINDOW *win, char *title) {
  int len, indent, y, x;
  getmaxyx(win, y, x);

  len = strlen(title);
  indent = x - len;
  indent /= 2;
  int num = y / 9;
  int number = num * 8;
  mvwaddstr(win, number, indent, title);
  wrefresh(win);
}

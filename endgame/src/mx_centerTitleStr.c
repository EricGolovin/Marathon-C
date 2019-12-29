#include "hero.h"

void mx_centerTitleStr(WINDOW *win, char *title) {
  int len, indent, y, x;
  getmaxyx(win, y, x);

  len = strlen(title);
  indent = x - len;
  indent /= 2;

  int row = y / 4;
  char *ch = title;

  while (*ch) {
    wattrset(win, A_BOLD | A_UNDERLINE);
    mvwaddch(win, row, indent, *ch);
    napms(100);
    indent++;
    ch++;
    wrefresh(win);
    wattroff(win, A_BOLD | A_UNDERLINE);
  }
  beep();
}

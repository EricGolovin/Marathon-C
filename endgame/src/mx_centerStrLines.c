#include "hero.h"

int newLineCounter(char *title);

int mx_centerStrLines(WINDOW *win, char *title, bool fastPrint) {
  char *ch = title;
  int len, indent, y, x;
  int newLines = newLineCounter(title);
  getmaxyx(win, y, x);

  int row = (y / 2) - (newLines / 2);
  while (*ch) {
    len = mx_getStrlen(ch);
    indent = x - len;
    indent /= 2;
    while (*ch != '\n') {
      wattrset(win, A_BOLD);
      mvwaddch(win, row, indent, *ch);
      if (fastPrint) {
        napms(1);
      } else {
        napms(25);
      }
      indent++;
      ch++;
      wrefresh(win);
      wattroff(win, A_BOLD);
    }
    row++;
    ch++;
  }
  waddch(win, '\n');
  return row;
}

int newLineCounter(char *title) {
  int counter = 0;
  for (int i = 0; title[i] != '\0'; i++) {
    if (title[i] == '\n') {
      counter++;
    }
  }
  return counter;
}

#include "hero.h"

void mx_initHealth(WINDOW *parentWin, int y, int counter) {
  wclear(parentWin);
  WINDOW *heartArr[counter];
  int pY, pX;
  getmaxyx(parentWin, pY, pX);
  for (int i = 0, color = 3, row = 0; i < counter; i++, color++, row += y / 20) {
    heartArr[i] = derwin(parentWin, y / 20, pX, row, 0);
    if (color == 9) {
      color = 3;
    }
    wbkgd(heartArr[i], COLOR_PAIR(color));
    box(heartArr[i], 0, 0);
    touchwin(heartArr[i]);
    mx_centerTitleStr(heartArr[i], "HEART#");
    wprintw(heartArr[i], "%i", i + 1);
    touchwin(heartArr[i]);
    wrefresh(heartArr[i]);
  }
}

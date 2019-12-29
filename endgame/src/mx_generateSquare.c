#include "hero.h"

WINDOW *mx_generateSquare(WINDOW *raft, int y, int x, int checker) {
  WINDOW *squareWin = derwin(raft, 7, 12, y, x);
  if (checker) {
    wbkgd(squareWin, COLOR_PAIR(3));
  } else {
    wbkgd(squareWin, COLOR_PAIR(2));
    for (int i = 0, j = 1; i < 12; i++, j++) {
      mvwaddch(squareWin, 0, i, '-');
      mvwaddch(squareWin, 6, i, '-');
    }

    mvwaddstr(squareWin, 1, 5, "WC");
    mvwaddstr(squareWin, 3, 5, "is");
    mvwaddstr(squareWin, 5, 2, "waiting!");
    for (int i = 0; i < 7; i++) {
      mvwaddch(squareWin, i, 0, '|');
      mvwaddch(squareWin, i, 11, '|');
    }
  }

  touchwin(raft);
  wrefresh(raft);

  return squareWin;
}

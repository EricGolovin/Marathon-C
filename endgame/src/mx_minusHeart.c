#include "hero.h"

void mx_minusHeart(WINDOW *raft, WINDOW *heart, int *counter, int *hCounter) {
  int maxY, maxX;
  getmaxyx(stdscr, maxY, maxX);
  wrefresh(raft);
    *counter -= 1;
    mx_initHealth(heart, maxY, *counter);
  touchwin(heart);
  wrefresh(heart);
  *hCounter += 1;
  maxX++;
}

#include "hero.h"

void mx_createColors() {
  start_color();
  init_pair(1, 68, 218);
  init_pair(2, COLOR_WHITE, 130);
  init_pair(3, COLOR_BLACK, COLOR_YELLOW);
  init_pair(4, COLOR_WHITE, COLOR_BLUE);
  init_pair(5, COLOR_WHITE, COLOR_MAGENTA);
  init_pair(6, COLOR_BLACK, COLOR_CYAN);
  init_pair(7, COLOR_BLACK, COLOR_WHITE);
  init_pair(8, COLOR_WHITE, COLOR_RED);
  init_pair(9, COLOR_WHITE, COLOR_GREEN);
}

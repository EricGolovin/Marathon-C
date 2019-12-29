#include "hero.h"

WINDOW *mx_createCharacter(int y_org, int x_org) {
  WINDOW *character = newwin(3, 5, y_org, x_org);
  wbkgd(character, COLOR_PAIR(2));
  mx_centerStr(character, 0, "@");
  mx_centerStr(character, 1, "*-#-*");
  mx_centerStr(character, 2, "_/'\\_");
  wmove(character, 0, 1);
  wrefresh(character);

  return character;
}

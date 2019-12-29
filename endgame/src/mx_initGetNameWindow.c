#include "hero.h"

void *mx_initGetNameWindow(char *name, int maxY, int maxX) {
  WINDOW *nameWindow;
  int winMaxX, winMaxY;
  char enterString[] = "Please, enter your name down below:\n";
  char errorString[] = "Press, <ENTER> when your are done";

  getmaxyx(stdscr, maxY, maxX);

  for (int x = 0; x <= maxX; x++) {
    for (int y = 0; y <= maxY; y++) {
      mvaddch(y, x, '!');
      napms(0);
      refresh();
    }
  }

  nameWindow = mx_createCenterWin(maxY, maxX, false);
  wbkgd(nameWindow, COLOR_PAIR(1));
  mx_centerTitleStr(nameWindow, enterString);
  mx_centerRuleStr(nameWindow, errorString);

  getmaxyx(nameWindow, winMaxY, winMaxX);

  wmove(nameWindow, winMaxY / 2, winMaxX / 4);

  char ch = '\0';
  int i = 0;
  while ((ch = wgetch(nameWindow)) != '\n' && i < 32) {
    name[i] = ch;
    i++;
  }
  name[i] = '\0';

  wmove(nameWindow, winMaxY / 2 + 2, winMaxX / 4 + 2);
  mx_moveTextCenter(nameWindow, winMaxY / 9 * 8, errorString);
  wclrtoeol(nameWindow);
  wprintw(nameWindow, "Your name is %s (Press <Enter> if YES)", name);
  wgetch(nameWindow);

  return name;
}

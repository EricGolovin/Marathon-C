#include "hero.h"

void mx_initRules() {
  WINDOW *nameWindow;
  int maxX = 0, maxY = 0;

  char enterString[] = "Rules of the game:\n\
1.Follow the instructions in the game.\n\
2.Do not try to break the program, since every bug is a feature.\n\
3.Enjoy the game.\n\
4.Know that this is the best ncurses game.\n\
5.Do not repeat this in real life, because mutual love itself will find you!\n\
6.Perform the actions of the character carefully, as if it were you.\n\
\n \nPlease, press <Any Key> to continue\n";
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
  mx_centerStrLines(nameWindow, enterString, false);

  wgetch(nameWindow);
}

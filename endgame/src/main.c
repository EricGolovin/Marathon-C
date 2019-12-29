#include "hero.h"

int main() {
  char characterName[32];
  int maxY, maxX;

  initscr();

  mx_createColors();
  getmaxyx(stdscr, maxY, maxX);

  mx_initEnterScreen();
  clear();
  refresh();

  mx_initGetNameWindow(characterName, maxY, maxX);
  clear();
  refresh();

  mx_initStory();
  clear();
  refresh();

  mx_initRules();
  clear();
  refresh();

  mx_startTheGame(maxY, maxX, characterName);
  clear();
  refresh();

  endwin();
  return 0;
}

#include "hero.h"

WINDOW *mx_activateCharacter(WINDOW *raft, int *yCh, int *xCh) {
  int y = 0, x = 0;
  getmaxyx(stdscr, y, x);
  int rY = (y / (y / 4)) * ((y / 4) - 1);
  int rX = (x / 4) * 3;
  WINDOW *characterWin = mx_createCharacter(*yCh, *xCh);
  int ch;
  while (1) {
    ch = wgetch(raft);
    switch (ch) {
      case KEY_RIGHT:
      *xCh += STEPS;
      *xCh = *xCh > rX - 6 ? 1 : *xCh;
      delwin(characterWin);
      characterWin = mx_createCharacter(*yCh, *xCh);
      mx_updateRaftCharacter(raft , characterWin);
      break;
      case KEY_LEFT:
      *xCh -= STEPS;
      *xCh = *xCh < 1 ? rX - 6 : *xCh;
      delwin(characterWin);
      characterWin = mx_createCharacter(*yCh, *xCh);
      mx_updateRaftCharacter(raft , characterWin);
      break;
      case KEY_UP:
      *yCh -= STEPS;
      *yCh = *yCh < y - rY ? rY + 1 : *yCh;
      delwin(characterWin);
      characterWin = mx_createCharacter(*yCh, *xCh);
      mx_updateRaftCharacter(raft , characterWin);
      break;
      case KEY_DOWN:
      *yCh += STEPS;
      *yCh = *yCh > rY ? y - rY + 1 : *yCh;
      delwin(characterWin);
      characterWin = mx_createCharacter(*yCh, *xCh);
      mx_updateRaftCharacter(raft , characterWin);
      break;
      default:
      break;
    }
    if (ch == ' ') {
      x++;
      break;
    }
  }
  return characterWin;
}

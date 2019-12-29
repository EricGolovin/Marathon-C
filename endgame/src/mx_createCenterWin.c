#include "hero.h"

WINDOW *mx_createCenterWin(int column, int row, bool widthFull) {
  int secondSizeX;
  if (widthFull) {
    secondSizeX = row / 1;
  } else {
    secondSizeX = row / 2;
  }

  int secondSizeY = column / 2;

  int indentX = row - secondSizeX;
  int indentY = column - secondSizeY;

  indentX /= 2;
  indentY /= 2;

  return newwin(secondSizeY, secondSizeX, indentY, indentX);
}

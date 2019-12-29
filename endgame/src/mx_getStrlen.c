#include "hero.h"

int mx_getStrlen(char *text) {
  int counter = 0;
  while (*text != '\n') {
    text++;
    counter++;
  }
  return counter;
}

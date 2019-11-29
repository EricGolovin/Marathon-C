#include "maze.h"

char *mx_strWithoutComas(char *str) {
  int counter = mx_strlen(str);

  char *dstStr = (char *) malloc(counter + 1);

  int j = 0;
  for (int i = 0; i < counter; i++) {
    if (str[i] != ',') {
      dstStr[j] = str[i];
      j++;
    }
  }

  return dstStr;
}

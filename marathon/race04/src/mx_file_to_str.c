#include "maze.h"

char *mx_file_to_str(const char *filename) {
  char character = '\0';
  int file = open(filename, O_RDONLY), counter = 0;
  while ((read(file, &character, 1))) {
    counter++;
  }
  close(file);
  char *dstString = (char *) malloc(counter);
  int fileToCopy = open(filename, O_RDONLY);
  int i = 0;
  while ((read(fileToCopy, &character, 1))) {
    dstString[i] = character;
    i++;
  }
  close(fileToCopy);
  return dstString;
}

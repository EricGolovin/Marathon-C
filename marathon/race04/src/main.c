#include "maze.h"

static int mx_lineCharCounter(char *str) {
  int dstCounter = 0;
  while (*str != '\n') {
    dstCounter++;
    str++;
  }
  return dstCounter;
}

static int mx_lineCounter(char *str) {
  int dstCounter = 0;
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == '\n') {
      dstCounter++;
    }
    i++;
  }
  return dstCounter;
}

static void mx_addElementToArray(int chars, char arr[][chars], char *str) {
  int j = 0;
  int q = 0;
  while (str[j] != '\0') {
    int i = 0;
    while (str[j] != '\n') {
      arr[q][i] = str[j];
      j++;
      i++;
    }
    q++;
    j++;
  }
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    char *mazeCSVContent = mx_file_to_str(argv[1]);
    char *mazeWithoutComas = mx_strWithoutComas(mazeCSVContent);

    int charsPerLine = mx_lineCharCounter(mazeWithoutComas);
    int lines = mx_lineCounter(mazeWithoutComas);

    char mazeArray[lines][charsPerLine];
    mx_addElementToArray(charsPerLine, mazeArray, mazeWithoutComas);

    printf("charsPerLine = %i\n lines = %i\n", charsPerLine, lines);
  }
  return 0;
}

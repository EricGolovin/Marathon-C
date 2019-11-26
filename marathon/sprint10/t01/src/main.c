#include "header.h"

extern int errno;

static void printError(char const *arr, char *err) {
  write(2, arr, mx_strlen(arr));
  write(2, ": ", 2);
  write(2, err, mx_strlen(err));
  write(2, "\n", 1);
}

int main(int argc, char const *argv[]) {
  if (argc > 1) {
    char content;
    int sourceFile = open(argv[1], O_RDONLY);
    int dstFile = open(argv[2], O_CREAT | O_RDWR | O_EXCL, S_IRUSR | S_IWUSR);

    if (dstFile == -1) {
      char *error = strerror(errno);
      printError(argv[2], error);
    }

    while (read(sourceFile, &content, 1)) {
      write(dstFile, &content, 1);
    }
    close(sourceFile);
    close(dstFile);
  } else {
    char text[] = "usage: ./mx_cp [source_file] [target_file]\n";
    write(1, &text, mx_strlen(text));
  }
  return 0;
}

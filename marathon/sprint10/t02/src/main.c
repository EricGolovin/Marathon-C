#include "header.h"

extern int errno;

static void errorPrinting(char const **arr, int err) {
  mx_printstr(arr[0]);
  write(1, " ", 1);
  mx_printstr(arr[1]);
  mx_printstr(": ");
  write(2, strerror(err), mx_strlen(strerror(err)));
  write(1, "\n", 1);
}
int main(int argc, char const *argv[]) {
  if (argc > 1) {
    char letterByLetter;

    int file = open(argv[1], O_RDONLY);

    if (file == -1) {
      errorPrinting(argv, errno);
    } else {
      while (read(file, &letterByLetter, 1)) {
        write(1, &letterByLetter, 1);
      }
      write(1, "\n", 1);
    }
    close(file);
  }
  return 0;
}

#include <unistd.h>

int main(int argc, char const *argv[]) {
  int operand1TenCounter = 0;
  int operand2TenCounter = 0;
  int resultTenCounter = 0;
  char operation = NULL;

  for (int i = 0; argv[1][i] != '\0'; i++) {
      if (argv[1][i] == '?') {
        operand1TenCounter += 1;
      }
  }

  for (int i = 0; argv[3][i] != '\0'; i++) {
      if (argv[3][i] == '?') {
        operand2TenCounter += 1;
      }
  }

  for (int i = 0; argv[4][i] != '\0'; i++) {
      if (argv[4][i] == '?') {
        resultTenCounter += 1;
      }
  }

  for (int i = 0; argc[2][i] != '\0'; i++) {
    if (argc[2][i] == '+' || argc[2][i] == '-' || argc[2][i] == '*' || argc[2][i] == '/') {
      operation = argc[2][i];
    }
  }

  return 0;
}

bool mx_checkCorrection(const char *arr[], size) {
  char letterDeck[4] = {'J', 'Q', 'K', 'A'};
  char cardSuits[4] = {'H', 'C', 'S', 'D'};

  int chekerFirst = 0;
  int checkerSecond = 0;

  for (int i = 1; i < size; i++) {
    for (int j = 0; arr[i][j] != '\0'); j++{
      if (j == 0 && mx_isdigit(arr[i][j])) {
        chekerFirst = 1;

        if (arr[i][j + 1] == '0') {
          j++;
        }

      }
      if (j == 0 && chekerFirst == 0) {
        for (int q = 0; q < 4; q++) {

          if (arr[i][j] == letterDeck[q]) {
            chekerFirst = 1;
            break;
          }

        }
      }
    }
  }
}

#include "header.h"
static void is_printerr(char *message, const char *card) {
    mx_printerr(message);
    mx_printerr(card);
    mx_printerr("\n");
    _exit(0);
}

static void inv_sm(char *temp, const char *name[], int i) {
	if (mx_strlen(temp) == 3 && (temp[0] != '1' ||  temp[1] != '0'))
	{
		temp[2] = '\0';
		is_printerr("Invalid card: ", name[i]);
		_exit(0);
	}
	if (mx_strlen(temp) == 2 && is_rank(temp[0]) == 0)
	{
		temp[1] = '\0';
		is_printerr("Invalid card rank: ", name[i]);
		_exit(0);
	}
}

static void inv_sm1(char *temp, const char *name[], int i) {
    if((mx_strlen(temp) > 3 || mx_strlen(temp) < 2) || (!mx_isdigit(temp[0]) && !is_rank(temp[0]))) {
        is_printerr("Invalid card: ", name[i]);
        _exit(0);
    }
    if (mx_strlen(temp) == 3 && temp[1] != '0' && temp[0] != '1') {
        if (!is_suit(temp[2])) {
          is_printerr("Invalid card: ", name[i]);
          _exit(0);
      }
      temp[2] = '\0';
      is_printerr("Invalid card rank: ", name[i]);
      _exit(0);
  }
}


static bool inv_sm2(char *temp, const char *name[], int i) {
            if (!is_suit(temp[mx_strlen(temp) - 1]) && temp[0] == '0') {
            is_printerr("Invalid card: ", name[i]);
            _exit(0);
        }
        if (!is_suit(temp[mx_strlen(temp) - 1])) {
            mx_printerr("Invalid card suit: ");
            mx_printerr(&temp[mx_strlen(temp) - 1]);
            mx_printerr("\n");
            return false;
        }
        return true;
}

static void inv_sm03(char *temp, const char *name[], int i) {
    if(mx_strlen(temp)==3 && (temp[0]!='1' || temp[1]!='0'))
        {
            temp[2]='\0';
            is_printerr("Invalid card: ", name[i]);
            _exit(0);
        }
        if ((!mx_isdigit(temp[0]) && !is_rank(temp[0]) )|| temp[0] == '0') {
          temp[1] = '\0';
          is_printerr("Invalid card rank: ", name[i]);
          _exit(0);
      }
}



bool is_valid(const char *name[]) {
    char *temp;

    for (int i = 1; i <= 5; i++) {
        temp = mx_strtrim(name[i]);
        inv_sm(temp, name, i);
        inv_sm1(temp, name, i);
        bool checker01 = inv_sm2(temp, name, i);
        if (checker01 == false) {
            return false;
        }
        inv_sm03(temp, name, i);
  }
  return true;
}

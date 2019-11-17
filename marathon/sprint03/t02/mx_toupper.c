#include <unistd.h>
  
int mx_toupper(int c) {
        for (char i = 'a'; i <= 'z'; ++i) {
                if (i == c) {
                        return (int)(c - 32);
                }
        }

        return (int)c;
}


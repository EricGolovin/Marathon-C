#include <ncurses.h>

int main() {

  char ch;
  initscr();

  addstr("Enter a few lines of text\n");;
  addstr("Press ~ to quit\n");
  refresh();

  while ((ch = getch()) != '~')
    ;
    
  endwin();
  return 0;
}

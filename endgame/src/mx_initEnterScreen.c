#include "hero.h"

void mx_initEnterScreen() {
  WINDOW *nameWindow;
  int maxX = 0, maxY = 0;
  char enterString[]= "8888888888888\\     8888\\  888888\\        888888\\                       8888888888888\\     8888\\  888888\\         888888\\      \n\
88888888888888\\\\   8888\\\\ 888888\\\\       888888\\\\                      88888888888888\\\\   8888\\\\ 888888\\\\        888888\\\\     \n\
8888\\     888888\\\\ \\\\\\\\\\\\ 888888\\\\       888888\\\\\\                     8888\\    888888\\\\  \\\\\\\\\\\\ 888888\\\\        888888\\\\\\    \n\
8888\\\\    888888\\\\        888888\\\\       888888\\\\\\                     8888\\\\   888888\\\\         888888\\\\        888888\\\\\\    \n\
88888888888888\\\\\\  8888\\  888888\\\\       888888\\\\\\                     8888888888888\\\\\\   8888\\  888888\\\\        888888\\\\\\    \n\
888888888888\\\\\\    8888\\\\ 888888\\\\\\      888888\\\\\\      888888888\\     88888888888\\\\\\     8888\\\\ 888888\\\\\\       888888\\\\\\    \n\
8888\\\\\\\\\\\\\\        8888\\\\  88888\\\\\\\\    888888\\\\\\\\      888888888\\\\    8888\\\\\\\\\\\\\\\\       8888\\\\  88888\\\\\\\\     888888\\\\\\\\    \n\
8888\\\\             8888\\\\   888888\\\\\\\\\\888888\\\\\\\\       \\\\\\\\\\\\\\\\\\\\\\    8888\\\\             8888\\\\   888888\\\\\\\\\\888888\\\\\\\\\\     \n\
8888\\\\             8888\\\\     8888888888888\\\\\\\\\\                       8888\\\\             8888\\\\     8888888888888\\\\\\\\\\\\      \n\
8888\\\\             8888\\\\       88888888\\\\\\\\\\\\\\                        8888\\\\             8888\\\\       88888888\\\\\\\\\\\\\\        \n\
 \\\\\\\\\\\\             \\\\\\\\\\\\        \\\\\\\\\\\\\\\\\\\\\\                           \\\\\\\\\\\\             \\\\\\\\\\\\         \\\\\\\\\\\\\\\\\\\\\\          \n\
 \n\
                     88888\\        88888\\    888888888888\\    88888888888\\             888888888\\                      \n\
                    88888\\\\       88888\\\\   888888888888\\\\   88888888888888\\        8888888888888\\\\                   \n\
                    88888\\\\\\      88888\\\\\\  888888888888\\\\\\  88888888888888\\\\     88888888888888888\\\\\\                \n\
                    88888\\\\\\      88888\\\\\\  8888\\            88888\\    88888\\\\   88888\\        88888\\\\\\               \n\
                    8888888888888888888\\\\\\  888888888888\\\\\\  88888888888888\\\\\\  88888\\\\         88888\\\\\\\\             \n\
                    8888888888888888888\\\\\\  888888888888\\\\\\  88888888888888\\\\\\  88888\\\\\\        88888\\\\\\\\             \n\
                    8888888888888888888\\\\\\  888888888888\\\\\\  88888888888\\\\      88888\\\\\\\\\\      88888\\\\\\\\             \n\
                    88888\\\\\\\\\\\\\\\\\\88888\\\\\\  8888\\            88888\\ 88888\\\\\\     88888\\\\\\\\\\\\\\\\\\88888\\\\\\\\\\             \n\
                    88888\\\\\\      88888\\\\\\  888888888888\\\\\\  88888\\   8888\\\\\\\\     8888888888888888\\\\\\\\\\              \n\
                    88888\\\\\\      88888\\\\\\  888888888888\\\\\\  88888\\   8888888\\\\\\    88888888888888\\\\\\\\\\               \n\
                    88888\\\\\\      88888\\\\\\  888888888888\\\\\\  88888\\   8888888\\\\\\      8888888888\\\\\\\\\\\\                \n\
                    \\\\\\\\\\\\\\\\      \\\\\\\\\\\\\\\\  \\\\\\\\\\\\\\\\\\\\\\\\\\\\   \\\\\\\\\\\\   \\\\\\\\\\\\\\\\\\\\         \\\\\\\\\\\\\\\\\\\\                   \n\
\n \nPlease, press <Any Key> to continue\n";

  getmaxyx(stdscr, maxY, maxX);

  for (int x = 0; x <= maxX; x++) {
    for (int y = 0; y <= maxY; y++) {
      mvaddch(y, x, '!');
      napms(0);
      refresh();
    }
  }

  nameWindow = mx_createCenterWin(maxY, maxX, true);
  wbkgd(nameWindow, COLOR_PAIR(1));
  mx_centerStrLines(nameWindow, enterString, true);

  wgetch(stdscr);

}

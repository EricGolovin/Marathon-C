#include "hero.h"

void mx_initStory() {
  WINDOW *centerWin;
  int maxX = 0, maxY = 0;

  char enterString[] = "OUR STORY BEGINS\n\nWell, we are going to start our story from the very beginning.\n\
Ones upon a time a good boy was so bothered about doing his routing things,\n\
that he decided to travel abroad in order to find a beautiful and\n\
very ambitious woman and get married to her.\n\
After a long jorney on the see throught different countries and cities\n\
he finally stopped in a country named Ucodia.\n\
Where he found his love whose name was Oraclina.\n\
They fell in love immediately and decided to get married.\n\
However, before their marriage, HERO had to fight for his love.\n\
So, HERO had to overcome challanges in order have a happy future life.\n\
He will pee into the toilets until they are full in order to get to Oraclina on the raft.\n\
The processes will be reapiting until all toilets will be full.\n\
Right after that raft will be pulled out by the water substance\n\
and our couple will be together forever.\n\
\n \n Press, <Any Key> when your are readed\n";

  getmaxyx(stdscr, maxY, maxX);
  for (int x = 0; x <= maxX; x++) {
    for (int y = 0; y <= maxY; y++) {
      mvaddch(y, x, '8');
      napms(0);
      refresh();
    }
  }


  centerWin = mx_createCenterWin(maxY, maxX, false);
  wbkgd(centerWin, COLOR_PAIR(1));
  mx_centerStrLines(centerWin, enterString, false);

  wgetch(centerWin);

}

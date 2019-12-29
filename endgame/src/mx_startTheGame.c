#include "hero.h"

void initScore(WINDOW *up, WINDOW *down, int race, int level);

void mx_startTheGame(int maxY, int maxX, char *name) {
  WINDOW *raftWin, *characterWin;
  WINDOW *heartWin, *squareWin;
  WINDOW *scoreWinUp, *scoreWinDown;
  int healthCounter = HEALTH, ch = 0, counter = 0, allowedTiming = 10; // change time to 20 sec
  clock_t t;
  double time_taken;

  int raftWinMaxY = (maxY / (maxY / 4)) * ((maxY / 4) - 1);
  int raftWinMaxX = (maxX / 4) * 3;
  int heartWinMaxY = (maxY / 2);
  int heartWinMaxX = (maxX / 4);

  // creating health cells
  heartWin = newwin(heartWinMaxY, heartWinMaxX, maxY / 2, heartWinMaxX * 3);
  mx_initHealth(heartWin, maxY, healthCounter);

  // creating score win
  scoreWinUp = newwin(heartWinMaxY / 2, heartWinMaxX, 0, heartWinMaxX * 3);
  scoreWinDown = newwin(heartWinMaxY / 2, heartWinMaxX, heartWinMaxY / 2, heartWinMaxX * 3);
  wbkgd(scoreWinUp, COLOR_PAIR(3));
  wbkgd(scoreWinDown, COLOR_PAIR(5));
  initScore(scoreWinUp, scoreWinDown, 1, 1);
  touchwin(scoreWinUp);
  touchwin(scoreWinDown);
  wrefresh(scoreWinUp);
  wrefresh(scoreWinDown);

  // creating raft win
  raftWin = newwin(raftWinMaxY, raftWinMaxX, maxY - raftWinMaxY, 0);
  wbkgd(raftWin, COLOR_PAIR(2) | '+');
  wrefresh(raftWin);
  noecho();
  keypad(raftWin, TRUE);
  // activating character movements
  while (counter < 5 && ch != HEALTH) {
    int levelCounter = 0;
    while (levelCounter < 10) {
     // mvwprintw(stdscr, 0, 0, "%s have %i HEARTS -> Your race is %i -> Your LEVEL is %i -> You have %i seconds to complete)", name, healthCounter, counter + 1, levelCounter + 1, allowedTiming);
      mvwprintw(stdscr, 0, 0, "%s follow to the toilet and Press <Space> when you want to Piu\nYou have %i seconds to complete)", name, allowedTiming);
      wrefresh(stdscr);
      touchwin(raftWin);
      wrefresh(raftWin);
      // generating square
      int squareY = rand() % raftWinMaxY - 6;
      int squareX = rand() % raftWinMaxX - 10;
      squareY = squareY < 0 ? -squareY : squareY;
      squareX = squareX < 0 ? -squareX : squareX;
      squareWin = mx_generateSquare(raftWin, squareY, squareX, 0);
      // generating character movements
      int yCh = 20, xCh = 20;
      t = clock();
      nodelay(raftWin, TRUE);
      characterWin = mx_activateCharacter(raftWin, &yCh, &xCh);
      nodelay(raftWin, FALSE);
      t = clock() - t;
      time_taken = ((double)t)/CLOCKS_PER_SEC;
      wrefresh(raftWin);
      delwin(squareWin);
      wclear(raftWin);
      touchwin(raftWin);
      wrefresh(raftWin);
      if ((xCh >= squareX && xCh <= squareX + 10) && (yCh >= squareY && yCh <= squareY + 6)) {
        squareWin = mx_generateSquare(raftWin, squareY, squareX, 1);
        wrefresh(raftWin);
      } else {
        mx_minusHeart(raftWin, heartWin, &healthCounter, &ch);
      }
      if ((int) time_taken > allowedTiming) {
        mx_minusHeart(raftWin, heartWin, &healthCounter, &ch);
      }
      levelCounter++;
      touchwin(scoreWinUp);
      touchwin(scoreWinDown);
      wclear(scoreWinUp);
      wclear(scoreWinDown);
      wrefresh(scoreWinUp);
      wrefresh(scoreWinDown);
      initScore(scoreWinUp, scoreWinDown, counter + 1, levelCounter + 1);
      touchwin(scoreWinUp);
      touchwin(scoreWinDown);
      wrefresh(scoreWinUp);
      wrefresh(scoreWinDown);
    }
    counter++;
    allowedTiming -= 5;
    if (allowedTiming == 0) {
      break;
    }
  }
}

void initScore(WINDOW *up, WINDOW *down, int race, int level) {
  char numOne[] = "\
   01  \n\
 1010  \n\
10 10  \n\
   01  \n\
 010101\n";

  char numTwo[] = "\
 0101   \n\
10  10  \n\
   01   \n\
 101     \n\
1010101 \n";

  char numThree[] = "\
010100 \n\
   010 \n\
  110   \n\
   010 \n\
010100 \n";

  char numFour[] = "\
10  10 \n\
01  01 \n\
101010 \n\
    01 \n\
    10 \n";

  char numFive[] = "\
1010101 \n\
01      \n\
1010101 \n\
     10 \n\
0101010 \n";

  char numSix[] = "\
101010 \n\
10     \n\
101010 \n\
01   01\n\
101010 \n";

  char numSeven[] = "\
 1010010\n\
     01 \n\
    10  \n\
   01   \n\
  10    \n";

  char numEight[] = "\
 010101 \n\
01    01\n\
 010101 \n\
01    01\n\
 010101 \n";

  char numNine[] = "\
101010\n\
01  10\n\
010101\n\
    01\n\
101010 \n";


  mx_centerStr(up, 1, "Race");
  mx_centerStr(up, 2, "----");
  mx_centerStr(up, 3, "\\/");
  switch (race) {
    case 1:
    mx_centerStrLines(up, numOne, false);
    break;
    case 2:
    mx_centerStrLines(up, numTwo, false);
    break;
    case 3:
    mx_centerStrLines(up, numThree, false);
    break;
    case 4:
    mx_centerStrLines(up, numFour, false);
    break;
    case 5:
    mx_centerStrLines(up, numFive, false);
    break;
    case 6:
    mx_centerStrLines(up, numSix, false);
    break;
    case 7:
    mx_centerStrLines(up, numSeven, false);
    break;
    case 8:
    mx_centerStrLines(up, numEight, false);
    break;
    case 9:
    mx_centerStrLines(up, numNine, false);
    break;
    default:
    break;
  }
  mx_centerStr(down, 1, "Level");
  mx_centerStr(down, 2, "-----");
  mx_centerStr(down, 3, " \\/ ");
  switch (level) {
    case 1:
    mx_centerStrLines(down, numOne, false);
    break;
    case 2:
    mx_centerStrLines(down, numTwo, false);
    break;
    case 3:
    mx_centerStrLines(down, numThree, false);
    break;
    case 4:
    mx_centerStrLines(down, numFour, false);
    break;
    case 5:
    mx_centerStrLines(down, numFive, false);
    break;
    case 6:
    mx_centerStrLines(down, numSix, false);
    break;
    case 7:
    mx_centerStrLines(down, numSeven, false);
    break;
    case 8:
    mx_centerStrLines(down, numEight, false);
    break;
    case 9:
    mx_centerStrLines(down, numNine, false);
    break;
    default:
    break;
  }

}

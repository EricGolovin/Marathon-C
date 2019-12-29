#ifndef HERO_H
#define HERO_H

#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <ncurses.h>
#include <time.h>
#include <stdlib.h>

#define STEPS 2
#define HEALTH 10

WINDOW *mx_createCenterWin(int column, int row, bool widthFull);
void mx_centerTitleStr(WINDOW *win, char *title);
void mx_centerRuleStr(WINDOW *win, char *title);
void mx_moveTextCenter(WINDOW *win, int row, char *title);
void *mx_initGetNameWindow(char *name, int maxY, int maxX);
void mx_updateRaftCharacter(WINDOW *raft, WINDOW *character);
void mx_createColors();
WINDOW *mx_createCharacter(int y_org, int x_org);
void mx_initHealth(WINDOW *parentWin, int y, int counter);
void mx_startTheGame(int maxY, int maxX, char *name);
WINDOW *mx_activateCharacter(WINDOW *raft, int *yCh, int *xCh);
WINDOW *mx_generateSquare(WINDOW *raft, int y, int x, int checker);
void mx_minusHeart(WINDOW *raft, WINDOW *heart, int *counter, int *hCounter);
int mx_centerStrLines(WINDOW *win, char *title, bool fastPrint);
int mx_getStrlen(char *text);
void mx_initEnterScreen();
void mx_initStory();

void mx_initRules();
void mx_centerStr(WINDOW *win, int row, char *title);

#endif

#include "hero.h"

void mx_updateRaftCharacter(WINDOW *raft, WINDOW *character) {
  touchwin(raft);
  touchwin(character);
  wrefresh(raft);
  wrefresh(character);
}

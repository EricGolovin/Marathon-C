NAME = endgame

INCLUDES = ./inc/hero.h
SRC = ./src/main.c ./src/mx_activateCharacter.c ./src/mx_centerRuleStr.c ./src/mx_centerStr.c ./src/mx_centerStrLines.c ./src/mx_centerTitleStr.c ./src/mx_createCenterWin.c ./src/mx_createCharacter.c ./src/mx_createColors.c ./src/mx_generateSquare.c ./src/mx_getStrlen.c ./src/mx_initEnterScreen.c ./src/mx_initGetNameWindow.c ./src/mx_initHealth.c ./src/mx_initRules.c ./src/mx_minusHeart.c ./src/mx_moveTextCenter.c ./src/mx_startTheGame.c ./src/mx_updateRaftCharacter.c ./src/mx_initStory.c

INCL = hero.h
OUT = main.c mx_activateCharacter.c mx_centerRuleStr.c mx_centerStr.c mx_centerStrLines.c mx_centerTitleStr.c mx_createCenterWin.c mx_createCharacter.c mx_createColors.c mx_generateSquare.c mx_getStrlen.c mx_initEnterScreen.c mx_initGetNameWindow.c mx_initHealth.c mx_initRules.c mx_minusHeart.c mx_moveTextCenter.c mx_startTheGame.c mx_updateRaftCharacter.c mx_initStory.c

all: install clean 

install:
	@cp $(INCLUDES) .
	@cp $(SRC) .
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o $(NAME) $(OUT) -I $(INCL) -lncurses

uninstall: clean
	@rm -rf $(NAME)

clean: 
	@rm -rf $(INCL)
	@rm -rf $(OUT)

reinstall: uninstall install



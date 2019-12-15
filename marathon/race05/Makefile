SRCS = src/get_random_num.c src/matrix.c src/prob.c src/main.c
SRCSOB = get_random_num.c matrix.c prob.c main.c

INC = inc/matrix.h
INCOB = matrix.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang -o matrix_rain $(SRCSOB) -lncurses 
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all

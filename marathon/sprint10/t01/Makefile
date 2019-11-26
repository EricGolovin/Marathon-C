SRC_S = ./src/main.c\
	./src/mx_strlen.c\
	
INC = ./inc/header.h

all: install clean

install:
	cp $(INC) .
	cp $(SRC_S) .
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o mx_cp *.c

uninstall:
	rm mx_cp

clean:
	rm *.h
	rm *.c

reinstall: uninstall clean

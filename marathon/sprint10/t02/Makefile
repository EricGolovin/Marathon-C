SRC_S = ./src/main.c\
	./src/mx_printstr.c\
	./src/mx_strlen.c

INC_S = ./inc/header.h

all: install clean

install: 
	cp $(INC_S) .
	cp $(SRC_S) .
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o mx_cat *.c

uninstall:
	rm mx_cat

clean:
	rm *.h
	rm *.c

reinstall: uninstall clean 


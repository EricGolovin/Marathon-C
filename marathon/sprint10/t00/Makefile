INC = ./inc/header.h
SRC_S = ./src/main.c\
./src/mx_printerr.c\
./src/mx_printstr.c\
./src/mx_strlen.c\

all: install clean

install:
	cp $(INC) .
	cp $(SRC_S) .
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o read_file *.c

uninstall:
	rm read_file

clean: 
	rm *.h
	rm *.c

reinstall: uninstall clean 

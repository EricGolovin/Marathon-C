SRC_S = ./src/main.c\
	./src/mx_file_to_str.c\
	./src/mx_strlen.c\
	./src/mx_strWithoutComas.c

INC_S = ./inc/maze.h

SRCS = main.c\
	mx_file_to_str.c\
	mx_strlen.c\
	mx_strWithoutComas.c

INCS = maze.h

all: install clean 

install:
	cp $(SRC_S) .
	cp $(INC_S) .
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o race04 $(SRCS)

uninstall:
	rm race04

clean:
	rm $(SRCS)
	rm $(INCS)

reinstall: uninstall install

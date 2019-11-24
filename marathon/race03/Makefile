all: install clean
install:
	cp ./src/*.c .
	cp ./inc/header.h .
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o race03 -o race03 *.c
uninstall: clean
	rm -rf race03
clean:
	rm -rf *.h
	rm -rf *.c
reinstall: uninstall clean all
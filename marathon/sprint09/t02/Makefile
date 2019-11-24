INC_S = src/*.c
SRC_S = inc/*.h
OBJ_S = ./*.o

all: build create clean 

build: $(INC_S)
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include $(SRC_S) -c $(INC_S)

create:
	ar r minilibmx.a $(OBJ_S)

clean: 
	rm *.o

uninstall: 
	rm -rf minilibmx.a

reinstall: uninstall all

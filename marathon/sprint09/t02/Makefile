INC_S = src/*.c
SRC_S = inc/*.h

all: build create clean 

build: $(INC_S)
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include $(SRC_S) -c $(INC_S)

OBJ_S = *.o

create: $(OBJ_S)
	ar rc minilibmx.a $(OBJ_S)

clean: 
	rm *.o

unistall: 
	rm -rf minilibmx.a

reinstall: clean all

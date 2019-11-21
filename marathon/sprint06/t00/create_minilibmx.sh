clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c *.c
ar r minilibmx.a *.o
rm *.o

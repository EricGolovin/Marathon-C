#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "minilibmx.h"

int mx_add(int a, int b);
int mx_sub(int a, int b);
int mx_mul(int a, int b);
int mx_div(int a, int b);
int mx_mod(int a, int b);

typedef struct s_operation {
    char op;
    int (*f)(int a, int b);
} t_operation;

enum e_operation {
    SUB,
    ADD,
    MUL,
    DIV,
    MOD
};

enum e_error {
    INCORRECT_OPERAND,
    INCORRECT_OPERATION,
    DIV_BY_ZERO
};
#endif
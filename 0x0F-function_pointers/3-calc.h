#ifndef CALC_H
#define CALC_H
#include <stdio.h>

/**
 * struct - A structure data type
 */
typedef struct
{
	char *optn;
	int (*func)(int, int);
} op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* CALC_H */

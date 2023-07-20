#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - A funtion that selects the operation function
 * @s: An input
 * Return: returns a pointer function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].optn != NULL)
	{
		if (strcmp(ops[i].optn, s) == 0)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}

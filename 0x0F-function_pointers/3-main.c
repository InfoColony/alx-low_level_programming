#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @cnt: Argument count
 * @arg: Arguments
 * Return: 0
 */

int main(int cnt, char *arg[])
{
	int n1 = atoi(arg[1]);
	int n2 = atoi(arg[3]);
	int (*res)(int, int);

	if (cnt != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(arg[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(arg[2]);
	if (res == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", res(n1, n2));
	return (0);
}

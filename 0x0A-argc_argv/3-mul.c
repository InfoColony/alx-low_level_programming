#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @c: an input to the function
 * @arg: an input to the function
 * Return: return 0 on success an 1 on failure
 */

int main(int c, char *arg[])
{
	int i1, i2, re;

	if (c == 3)
	{
		i1 = atoi(arg[1]);
		i2 = atoi(arg[2]);
		re = i1 * i2;
		printf("%d\n", re);
		return (0);
	}
	printf("Error\n");
	return (1);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 * @c: an input to the function
 * @arg: an input to the function
 * Return: return 0 on success
 */

int main(int c, char *arg[])
{
	int i = 0;

	for (; i < c; i++)
	{
		printf("%s\n", arg[i]);
	}
	return (0);
}

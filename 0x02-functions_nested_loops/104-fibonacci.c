#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0
 */
void fib(void);

int main(void)
{
	fib();
	putchar('\n');
	return (0);
}

/**
 * fib - A function that prints fibonacci sequence
 */

void fib(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;

	printf("%lu, %lu, ", i, j);
	for (int k = 3; k <= 98; k++)
	{
		unsigned long int l = i + j;

		if (k < 98)
			printf("%lu, ", l);
		else
			printf("%lu", l);
		i = j;
		j = l;
	}
}

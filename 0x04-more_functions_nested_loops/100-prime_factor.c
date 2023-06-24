#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 * @int: an integer input
 */



void recurs(unsigned long int);

int main(void)
{
	recurs(612852475143);
	return (0);
}

/**
 * recurs - A recursive function
 * @c: the number to be recursed on
 */

void recurs(unsigned long int c)
{
	unsigned long int i = 2;

	for (; i <= c; i++)
	{
		if (c % i ==  0 && i < c)
		{
			c = c / i;
			recurs(c);
			return;
		}
	}
	printf("%ld\n", c);
}

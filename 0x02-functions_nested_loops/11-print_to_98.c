#include <stdio.h>

/**
 * print_to_98 - A funtion that prints natural numbers upto 98
 * @n: The starting point of the function
 */



void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else
		printf("%d\n", n);
}

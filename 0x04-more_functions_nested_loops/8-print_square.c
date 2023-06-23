#include "main.h"

/**
 * print_square - A function that prints square (#) to the terminal
 * @n: the input to the function
 */


void print_square(int n)
{
	if (n > 0)
	{
		int i = 1;

		for (; i <= n; i++)
		{
			int j = 0;

			for (; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}

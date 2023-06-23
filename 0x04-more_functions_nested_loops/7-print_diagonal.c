#include "main.h"

/**
 * print_diagonal - A function that prints a diagonal line to the terminal
 * @n: the input to the function
 */


void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		for (; i <= n; i++)
		{
			int j = 1;

			for (; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}

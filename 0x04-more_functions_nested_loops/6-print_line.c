#include "main.h"

/**
 * print_line - A function that prints a line to the terminal
 * @n: the input to the function
 */


void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
		_putchar('\n');
}

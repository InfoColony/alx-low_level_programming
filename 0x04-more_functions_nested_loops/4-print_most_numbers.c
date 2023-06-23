#include "main.h"

/**
 * print_most_numbers - A function that prints 0 - 9 omitting 2 and 4
 */




void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);
	}
	_putchar('\n');
}

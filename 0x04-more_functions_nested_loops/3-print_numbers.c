#include "main.h"

/**
 * print_numbers - A function that prints from 0 - 9
 */


void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}

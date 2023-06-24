#include "main.h"


/**
 * print_number - a function that prints the given input
 * @n: the input
 */



void print_number(int n)
{
	unsigned int j = n;

	if (j < 0)
	{
		_putchar('-');
		j = -j;
	}
	if (j >= 10)
		print_number(j / 10);
	_putchar('0' + j % 10);
}

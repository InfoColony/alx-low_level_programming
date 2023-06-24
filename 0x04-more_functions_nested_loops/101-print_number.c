#include "main.h"


/**
 * print_number - a function that prints the given input
 * @n: the input
 */



void print_number(int n)
{
	if (n <= 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	print_number('0' + n % 10);
}

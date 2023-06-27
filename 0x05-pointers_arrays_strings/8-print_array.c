#include "main.h"


/**
 * print_array - A function that prints all the element in an array
 * @a: an input to the function
 * @n: an input to the function
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('0' + *(a[i]));
		if (i + 1 != n)
		{
			_putchar(',');
			_putchar(' ');
			i++;
		}
	}
	_putchar('\n');
}

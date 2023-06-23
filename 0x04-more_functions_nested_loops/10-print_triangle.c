#include "main.h"


/**
 * print_triangle - A function that prints triangle to the terminal
 * @size: the input of the function
 */




void print_triangle(int size)
{
	int i, r, s, h;

	if (size > 0)
	{
		i = 1;
		h = size;
		for (; i <= size; i++)
		{
			s = 1;
			r = h;
			for (; r >= 2; r--)
				_putchar(' ');
			for (; s <= i; s++)
				_putchar('#');
			_putchar('\n');
			h--;
		}
	} else
		_putchar('\n');
}

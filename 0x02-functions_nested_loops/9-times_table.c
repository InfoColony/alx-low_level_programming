#include "main.h"

/**
 * times_table - A function that prints the times table into 9x
 */



void times_table(void)
{
	int i = 0;
	int j;
	int k;

	for (; i <= 9; i++)
	{
		j = 0;

		for (; j <= 9; j++)
		{
			k = i * j;
			write(1, &k, 5);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

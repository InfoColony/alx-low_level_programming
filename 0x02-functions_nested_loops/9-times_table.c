#include "main.h"
#include <unistd.h>

/**
 * times_table - A function that prints the times table into 9x
 */



void times_table(void)
{
	int i =0, j, k;

	for (; i <= 9; i++)
	{
		j = 0;

		for (; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar('0' + k);
				if (j < 9 && 9 >= ((j + 1) * i))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (k >= 10)
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				if (j < 9 || 9 >= ((j - 1) * i))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

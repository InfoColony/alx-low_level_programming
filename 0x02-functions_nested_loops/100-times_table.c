#include "main.h"

/**
 * print_times_table - A function that prints n times table
 * @n: the number of the times table the function would print
 */


void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int i = 0, j, k;

		for (; i <= n; i++)
		{
			j = 0;
			for (; j <= n; j++)
			{
				k = i * j;
				if (k <= 9)
				{
					_putchar('0' + k);
					if (j <= 9 && 9 >= ((j + 1) * i))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (k > 9)
				{
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
					if (j <= 8 || 9 >= ((j - 1) * i))
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
}

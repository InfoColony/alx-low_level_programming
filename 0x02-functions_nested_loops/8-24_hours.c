#include "main.h"

/**
 * jack_bauer - A function that prints every minute of jack bauer's day
 * Return: Always void
 */


void jack_bauer(void)
{
	int i = 0;
	int l;

	for (; i <= 9; i++)
	{
		int j = 0;

		for (; j <= 9; j++)
		{
			int k = i;

			for (; k <= 9; k++)
			{
				l = (k == i) ? j + 1 : 0;
				for (; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
	return (0);
}

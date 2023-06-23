#include "main.h"

/**
 * more_numbers - A function that prints 0 - 14 10x
 */



void more_numbers(void)
{
	int i = 0, j;

	for (; i < 10; i++)
	{
		j = 0;
		for (; j <= 14; j++)
		{
			if (j <= 9)
			{
				/**
				 * write(1, &j, 1);
				 */
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
		}
	} _putchar('\n');
}

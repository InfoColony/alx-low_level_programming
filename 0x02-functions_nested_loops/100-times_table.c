#include "main.h"

/**
 * print_times_table - A function that prints n times table
 * @n: the number of the times table the function would print
 * above_100 - A function to print numbers above 99
 * @z: the input of the function above_100
 */


void above_100(int z);


void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int i = 0, j, k;

		if (n == 0)
		{
			_putchar('0' + n);
			_putchar('\n');
		}
		else
		{
			for (; i <= n; i++)
			{
				j = 0;
				for (; j <= n; j++)
				{
					k = i * j;
					if (k <= 9)
					{
						_putchar('0' + k);
						if (j < n && 9 >= ((j + 1) * i))
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
						}
						else if (j < n && 9 < ((j + 1) * i))
						{
							_putchar(',');
                            _putchar(' ');
                            _putchar(' ');
						}
					}
					else if (k > 9 && k < 100)
					{
						_putchar('0' + (k / 10));
						_putchar('0' + (k % 10));
						if (j < n)
						{
							if (j == n)
								continue;
							else if (j < n && ((j + 1) * i) > 99)
							{
								_putchar(',');
								_putchar(' ');
							}
							else
							{
								_putchar(',');
								_putchar(' ');
								_putchar(' ');
							}
						}
					}
					else if (k > 99)
					{
						above_100(k);
                        if (j < n || 9 >= ((j - 1) * i))
                        {
                            _putchar(',');
                            _putchar(' ');
						}
					}
				}
				_putchar('\n');
			}
		}
	}
}


/**
 * above_100 - A function to print numbers above 99                                                                                                  
 * @z: the input of the function above_100
 */

void above_100(int z)
{
	int f, s, t, h;

	f = z / 100;
	h = z / 10;
	s = h % 10;
	t = (z % 10) % 10;
	_putchar('0' + f);
	_putchar('0' + s);
	_putchar('0' + t);
}

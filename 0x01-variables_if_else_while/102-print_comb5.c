#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
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
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

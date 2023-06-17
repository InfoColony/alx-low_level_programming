#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int cnt = 0;

	for (; cnt <= 9; cnt++)
	{
		int i = 1;

		for (; i <= 9; i++)
		{
			int a = 2;

			for (; a <= 9; a++)
			{
				if (a > i && i > cnt)
				{
					putchar('0' + cnt);
					putchar('0' + i);
					putchar('0' + a);
					if (cnt < 7)
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

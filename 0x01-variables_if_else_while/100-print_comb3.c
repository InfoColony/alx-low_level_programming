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
			if (i > cnt)
			{
				putchar('0' + cnt);
				putchar('0' + i);
				if (cnt < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

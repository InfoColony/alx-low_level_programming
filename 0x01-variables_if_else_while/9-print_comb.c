#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int cnt = 0;

	for (; cnt < 10; cnt++)
	{
		putchar('0' + cnt);
		if (cnt < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

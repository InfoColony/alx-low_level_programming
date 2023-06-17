#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int cnt = 0;
	char n = '\n';

	do {
		if (cnt < 10)
		{
			putchar('0' + cnt);
			cnt++;
		}
		else
		{
			putchar(a);
			a++;
		}
	} while (cnt < 10 || a <= 'f');
	putchar(n);
	return (0);
}

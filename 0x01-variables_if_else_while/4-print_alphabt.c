#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char n = '\n';

	for (; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		else
			putchar(a);
	}
	putchar(n);
	return (0);
}

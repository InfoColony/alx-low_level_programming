#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'z';
	char n = '\n';

	for (; z >= 'a'; z--)
		putchar(z);
	putchar(n);
	return (0);
}

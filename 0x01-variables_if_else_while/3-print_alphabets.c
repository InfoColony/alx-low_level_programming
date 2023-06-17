#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';
	char n = '\n';

	do {
		if (a <= 'z')
			putchar(a);
		else
			putchar(A);

	} while (a < 'z' || A <= 'Z');
	putchar(n);
	return (0);
}

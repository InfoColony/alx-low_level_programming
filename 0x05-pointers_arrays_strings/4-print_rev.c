#include "main.h"


/**
 * print_rev - a function that prints input string in reverse
 * @s: the function input
 */


void print_rev(char *s)
{
	char *i = s;
	int j = 0;

	while (i[j] != '\0')
	{
		j++;
	}
	while (j > 0)
	{
		_putchar(i[j]);
		j--;
	}
	_putchar('\n');
}

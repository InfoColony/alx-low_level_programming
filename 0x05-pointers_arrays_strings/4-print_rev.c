#include "main.h"


/**
 * print_rev - a function that prints input string in reverse
 * @s: the function input
 */


void print_rev(char *s)
{
	char *i = s;
	int j = 0;
	int k = 0;

	while (i[j] != '\0')
	{
		j++;
	}
	char l[j];

	while (j >= 0)
	{
		l[k] = i[j];
		_putchar(l[k]);
		k++;
		j--;
	}
	_putchar('\n');
}

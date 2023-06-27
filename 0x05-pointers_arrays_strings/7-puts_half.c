#include "main.h"


/**
 * puts_half - A function that prints half of a string
 * @str: an iput to the function
 */

void puts_half(char *str)
{
	char *i = str;
	int j = 0;

	while (*i != '\0')
	{
		j++;
	}
	j--;
	j = j / 2;
	while (j >= 0)
	{
		_putchar(*i);
		j--;
		i++;
	}
	_putchar('\n');
}

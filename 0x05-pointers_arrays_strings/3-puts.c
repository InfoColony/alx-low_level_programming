#include "main.h"

/**
 * _puts - a function that prints an input string
 * @str: the input of the function
 */



void _puts(char *str)
{
	char *i = str;
	int j = 0;

	while (i[j] != '\0')
	{
		_putchar(i[j]);
		j++;
	}
	_putchar('\n');
}

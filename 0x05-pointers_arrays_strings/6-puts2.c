#include "main.h"

/**
 * puts - A function that prints odd character in a string
 * @str: the input to the string
 */




void puts2(char *str)
{
	char *i = str;
	int j = 0;

	while (*i != '\0')
	{
		if (j == 0 || j % 2 == 0)
			_putchar(*i);
		j++;
		i++;
	}
	_putchar('\n');
}

#include "main.h"






void puts2(char *str)
{
	char *i = str;
	int j = 0;

	while (*i != '\0')
	{
		if (j == 0 || j % 2 == 0)
			_putchar(*i);
		_putchar('\n');
		j++;
		i++;
	}
}

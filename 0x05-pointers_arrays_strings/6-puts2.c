#include "main.h"






void puts2(char *str)
{
	char *i = str;
	while (*i != '\0')
	{
		_putchar(*i);
		_putchar('\n');
		i++;
	}
}

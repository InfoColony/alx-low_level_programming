#include "main.h"

/**
 * _puts_recursion - A function that prints a string recursively
 * @s: an input to the function
 */


void _puts_recursion(char *s)
{
	char *i = s;

	if (*i == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*i);
	_puts_recursion(i + 1);
}

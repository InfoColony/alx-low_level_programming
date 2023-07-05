#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: an input to the function
 */

void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*p);
}

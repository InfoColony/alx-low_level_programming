#include "main.h"

/**
 * _strlen_recursion - A function that calculates the length of a string
 * @s: an input to the function
 * Return: return (0)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

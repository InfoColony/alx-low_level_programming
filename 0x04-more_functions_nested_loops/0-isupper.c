#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: the character to check upon
 * Return: return 0 or 1
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

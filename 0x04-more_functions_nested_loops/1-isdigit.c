#include "main.h"

/**
 * _isdigit - A function that checks if an input is digit
 * @c: the input to be checked
 * Return: return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

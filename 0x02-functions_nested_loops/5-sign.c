#include "main.h"


/**
 * print_sign - A function that checks if a character is negetive or positive
 * @n: the character to be checked on
 * Return: returns 0, 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

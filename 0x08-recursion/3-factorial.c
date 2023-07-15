#include "main.h"

/**
 * factorial - A function that returns the factorial of a system
 * @n: an input to the function
 * Return: reurn the factor
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

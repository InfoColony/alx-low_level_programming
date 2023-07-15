#include "main.h"

/**
 * _pow_recursion - A function that returns the power of an input
 * @x: an input to the function
 * @y: an input to the function
 * Return: returns the power of the input
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

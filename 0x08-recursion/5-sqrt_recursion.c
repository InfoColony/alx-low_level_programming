#include "main.h"

/**
 * _sqrt_recursion - A function that returns the squareroot of an input
 * @int: ant input
 * Return: returns the squareroot
 */

int rec(int, int, int);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (rec(n, 1, n));
}

/**
 * rec - A function that calculates squareroot
 * @i: an input to the function
 * @j: an input to the function
 * @k: an input to the function
 * Return: returns the calculated squareroot
 */

int rec(int i, int j, int k)
{
	int av = (j + k) / 2;

	if (av * av == i)
		return (av);
	if (j == k || j == k - 1)
		return (-1);
	if (av * av > i)
		return (rec(i, j, av - 1));
	return (rec(i, av, k));
}

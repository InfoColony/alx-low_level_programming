#include "main.h"

/**
 * _sqrt - A function that returns the squareroot of an input
 * @n: an input to the function
 * Return: returns the squareroot
 */

int rec(int, int, int);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (rec(n, 1, n));
}

int rec(int i,int j,int k)
{
	int av = (j + k) / 2;

	if (av * av == i)
		return (av);
	if (j == k || j == k - 1)
		return (-1);
	if (av * av > i)
		return (rec(i, j, av -1));
	return (rec(i, av, k));
}

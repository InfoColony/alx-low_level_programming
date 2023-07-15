#include "main.h"

/**
 * is_prime_number - A function that chaecks if a number is prime
 * @int: An input to the function
 * Return: 0
 */

int is_rec(int, int);

int is_prime_number(int n)
{
	int a = n - 1;

	return (is_rec(n, a));
}
/**
 * is_rec - A function that calculates a prime number
 * @i: an input to the function
 * @j: an input to the function
 * Return: 0
 */

int is_rec(int i, int j)
{
	if (i <= 1)
		return (0);
	if (j == 1)
		return (1);
	if (i % j == 0)
		return (0);
	return (is_rec(i, j - 1));
}

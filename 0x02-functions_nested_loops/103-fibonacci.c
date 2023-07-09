#include <stdio.h>

/**
 * main - Entry point of the program
 * @c: an input
 * Return: always 0
 */

long int fib(int c);

int main(void)
{
	int i = 0;
	long int t;
	long int maxv = 4000000;
	long int v = 0;

	while (v < maxv)
	{
		t = fib(i);
		if (t % 2 == 0)
			v = v + t;
		i++;
	}
	printf("%ld\n", v);
	return (0);
}
/**
 * fib - a function that prints fibonacci sequence
 * @a: an input
 * Return: return the value of fib
 */

long int fib(int a)
{
	if (a <= 1)
		return (1);
	return (fib(a - 1) + fib(a - 2));
}

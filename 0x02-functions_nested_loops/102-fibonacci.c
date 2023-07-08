#include <stdio.h>


/**
 * main - Entry point
 * fibonacci - A function that prints the fibonacci sequence
 * @n: an input to the function
 * Return: return 0
 */

long int arr[50];
long int fibonacci(int n);

int main(void)
{
	int i = 0;

	for (; i < 50; i++)
	{
		printf("%ld", fibonacci(i));
		if (i < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}

/**
 * fibonacci - A function that prints the fibonacci sequence
 * Return: return a long int
 * @a: an input to the function
 */

long int fibonacci(int a)
{
	if (a <= 1)
	{
		arr[a] = a;
		return (1);
	}
	if (arr[a])
		return (arr[a]);
	arr[a] = (fibonacci(a - 1) + fibonacci(a - 2));
	return (arr[a]);
}

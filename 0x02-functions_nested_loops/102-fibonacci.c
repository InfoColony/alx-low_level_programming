#include <stdio.h>


/**
 * main - Entry point
 * fibonacci - A function that prints the fibonacci sequence
 * @n: an input to the function
 * Return: return 0
 * @arr: an input to the function
 */


long int fibonacci(int n, long int *arr);

int main(void)
{
	int i = 1;
	long int arr[50] = {0};

	for (; i <= 50; i++)
	{
		printf("%ld", fibonacci(i, arr));
		if (i < 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}

/**
 * fibonacci - A function that prints the fibonacci sequence
 * Return: return a long int
 * @a: an input to the function
 * @arr: an input to the function
 */

long int fibonacci(int a, long *arr)
{
	if (a <= 2)
	{
		arr[a] = a;
		return (a);
	}
	if (arr[a])
		return (arr[a]);
	arr[a] = (fibonacci(a - 1, arr) + fibonacci(a - 2, arr));
	return (arr[a]);
}

#include "main.h"


/**
 * print_array - A function that prints all the element in an array
 * @a: an input to the function
 * @n: an input to the function
 */


void print_array(int *a, int n)
{
	int i = 0;
	int *j = a;

	while (i < n)
	{
		printf("%d", *j);
		if (i + 1 != n)
		{
			printf(", ");
		}
		i++;
		j++;
	}
	printf("\n");
}

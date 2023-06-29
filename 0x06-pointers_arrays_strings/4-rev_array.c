#include "main.h"

/**
 * reverse_array - A function that prints array in reverse
 * @a: an input to the function
 * @n: an input to the function
 */


void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;
	int t;

	while (s < e)
	{
		t = a[s];
		a[s] = a[e];
		a[e] = t;
		s++;
		e--;
	}
}

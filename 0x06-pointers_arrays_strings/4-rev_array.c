#include "main.h"

/**
 * 
 *
 *
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

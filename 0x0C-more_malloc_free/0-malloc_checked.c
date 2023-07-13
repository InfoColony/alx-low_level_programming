#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that assign memory manually
 * @b: An input to the string
 * Return: returned a void pointer on success and 98 on failure
 */

void *malloc_checked (unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}

#include "main.h"

/**
 * _memset - A function that fillls a memory space
 * @s: an input to the function
 * @b: an input to the function
 * @n: an input to the function
 * Return: returns a pointer to s
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *j = s;
	char **k = &s;
	char **t = k;

	while (i < n)
	{
		*j = b;
		j++;
		i++;
	}
	return (*t);
}

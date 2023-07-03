#include "main.h"


/**
 * _memcpy - A function that copy's a var data to another
 * @dest: an input to the function
 * @src: an input to the function
 * @n: an input to the function
 * Return: return a pointer to an input
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char i = 0;
	char *p = dest;
	char r = dest;

	while (i < n)
	{
		/* *p = *(src + i);*/
		i++;
		p++;
	}
	return (r);
}

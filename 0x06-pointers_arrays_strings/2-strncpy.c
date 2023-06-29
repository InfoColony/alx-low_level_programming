#include "main"

/**
 * _strncpy - A function that copies a string
 * @dest: an input to the function
 * @src: an input to the function
 * @n: an input to the function
 * Return: returns a pointer to a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *d = dest;

	while (*src != '\0' && i < n)
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	return (dest);
}

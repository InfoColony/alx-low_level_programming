#include "main.h"

/**
 * _strncat - A function that concatinate two strings in nth
 * @dest: An input to the function
 * @src: An input to the function
 * @n: an input to the function
 * Return: return a string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	char *j = dest;
	char *k = src;
	int l = 0;
	int m = 0;

	while (*j != '\0')
	{
		j++;
		l++;
	}
	while (*k != '\0' && m < n)
	{
		*(i + l) = *k;
		k++;
		l++;
	}
	return (i);
}

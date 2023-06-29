#include "main.h"


/**
 * _strcat - A function that adds two strings together
 * @dest: an input to the function
 * @src: an input to the function
 * Return: return a string
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;
	char *j = dest;
	char *k = src;
	int l = 0;

	while (*j != '\0')
	{
		j++;
		l++;
	}
	while (*k != '\0')
	{
		*(i + l) = *k;
		k++;
		l++;
	}
	return (i);
}

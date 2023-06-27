#include "main.h"


/**
 * _strcpy - A funtion that copy a pointer
 * @dest: an input to function
 * @src: an input to function
 * Return: char input
 */


char *_strcpy(char *dest, char *src)
{

	char *i = src;
	char *j = dest;

	while (*i != '\0')
	{
		*dest = *i;
		dest++;
		i++;
	}
	return (j);
}

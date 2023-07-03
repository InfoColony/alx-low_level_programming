#include "main.h"

/**
 * _strspn - A function that locate's a character in a string
 * @s: an input to the string
 * @c: an input to the function
 *Return: returns the first seen character
 */


char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
			break;
		}
		p++;
	}
}

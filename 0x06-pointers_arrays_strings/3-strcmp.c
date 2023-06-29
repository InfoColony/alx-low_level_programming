#include "main.h"

/**
 * _strcmp - A function that compares two string
 * @s1: An input to the function
 * @s2: an input to the function
 * Return: return an int
 */



int _strcmp(char *s1, char *s2)
{
	int r;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			r = *s1 - *s2;
			break;
		}
		else
			r = 0;
		s1++;
		s2++;
	}
	return (r);
}

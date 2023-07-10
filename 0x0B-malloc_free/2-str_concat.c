#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concatinates two strings
 * @s1: An input to the function
 * @s2: An input to the function
 * Return: return the concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	char *i = s1;
	char *i2 = s2;
	int len = 0;
	char *cst;
	int j = 0;

	while (*i != '\0')
	{
		len++;
		i++;
	}
	while (*i2 != '\0')
	{
		len++;
		i2++;
	}
	i = s1;
	i2 = s2;
	cst = malloc(len);
	if (cst == NULL)
		return (NULL);
	for (; j < len; j++)
	{
		if (*i != '\0')
		{
			cst[j] = *i;
			i++;
		} else
		{
			if (*i2 != '\0')
			{
				cst[j] = *i2;
				i2++;
			}
		}
	}
	cst[j] = '\0';
	return (cst);
}

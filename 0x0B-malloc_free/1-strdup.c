#include <stdlib.h>
#include "main.h"


/**
 * _strdup - A function that duplicate a string
 * @str: an input to the function
 * Return: return a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s1 = str;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	if (i >= 0)
	{
		char *s2 = str;
		int j = 0;
		char *du;

		du = malloc(i + 1);
		if (du == NULL)
			return (NULL);
		while (j < i)
		{
			du[j] = *s2;
			j++;
			s2++;
		}
		du[j] = '\0';
		return (du);
	}
	return (NULL);
}
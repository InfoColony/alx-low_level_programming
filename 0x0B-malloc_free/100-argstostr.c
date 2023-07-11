#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatinate all arguments as strings
 * @ac: An input to the function
 * @av: An input to the function
 * Return: returns the concatinated strings as array
 */

char *argstostr(int ac, char **av)
{
	int l;
	int i = 0;
	char *s;
	char *j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;
	for (; k < ac; k++)
	{
		j = av[k];
		while (*j != '\0')
		{
			i++;
			j++;
		}
		i++;
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	k = 0;
	l = 0;
	for (; k < ac; k++)
	{
		j = av[k];
		while (*j != '\0')
		{
			s[l] = *j;
			j++;
			l++;
		}
		_putchar('\n');
	}
	s[i] = '\0';
	return (s);
}

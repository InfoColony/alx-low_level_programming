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
	int i = 0;
	char *s;
	char *j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(ac * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		k = 0;
		j = *av[i];
		while (*j != '\0')
		{
			j++;
			k++;
		}
		j = *av[i];
		s[i] = malloc(k * sizeof(char));
		k = 0;
		while (*j != '\0')
		{
			s[i][k] = *j;
			k++;
			j++;
		}
		s[i][k] = '\0';
		putchar('\n');
	}
	return (s);
}

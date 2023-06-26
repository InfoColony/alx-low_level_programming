#include "main.h"

/**
 * _strlen - A function that prints the length of a string
 * @s: the input length to print
 * Return: 0
 */


int _strlen(char *s)
{
	int j = 0;
	char *i = s;

	while (i[j] != '\0')
	{
		j++;
	}
	return (j);
}

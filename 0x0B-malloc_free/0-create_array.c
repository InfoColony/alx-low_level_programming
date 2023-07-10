#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: an input to the function
 * @c: An input to the function
 * Return: returns a pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;

	str = malloc(size * sizeof(c));
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

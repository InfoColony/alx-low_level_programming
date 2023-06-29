#include "main.h"


/**
 * string_toupper - A function that change a string to uppercase
 * @r: an input to the function
 * Return: return the modified string
 */


char *string_toupper(char *r)
{
	char *p = r;

	while (*p != '\0')
	{
		char i = 'A';

		for (; i <= 'Z'; i++)
		{
			if (*p - i == 32)
			{
				*p = i;
			}
		}
		p++;
	}
	return (r);
}

#include "main.h"


/**
 * rev_string - A function that reverse a an iput string
 * @s: the function input
 */

void rev_string(char *s)
{
	char *i = s;
	char *j = s;

	while (*j != '\0')
	{
		j++;
	}
	j--;
	while (i < j)
	{
		char k = *i;
		*i = *j;
		*j = k;
		i++;
		j--;
	}
}


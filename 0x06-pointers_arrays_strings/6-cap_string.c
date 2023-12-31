#include "main.h"

/**
 * cap_string - A function that make all words cap in a string
 * @r: an input to the function
 * Return: returned the modified string
 */

char *cap_string(char *r)
{
	char sep[] = "\t\n,; .?\"(){}";
	char *sp = sep;
	char *p;
	char *fl = r;

	if (*fl >= 'a' && *fl <= 'z')
	{
		char f = 'A';

		for (; f <= 'Z'; f++)
		{
			if (*fl - f == 32)
				*fl = f;
		}
	}
	while (*sp != '\0')
	{
		p = r;
		while (*p != '\0')
		{
			if (*p == *sp && *(p + 1) >= 'a' && *(p + 1) <= 'z')
			{
				char a = 'A';

				for (; a <= 'Z'; a++)
				{
					if (*(p + 1) - a == 32)
						*(p + 1) = a;
				}
			}
			p++;
		}
		sp++;
	}
	return (r);
}

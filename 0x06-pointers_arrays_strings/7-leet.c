#include "main.h"

/**
 * leet - A function that encode a string int 1337
 * @r: an input to the string
 * Return: return a pointer
 */


char *leet(char *r)
{
	char *p = r;

	while (*p != '\0')
	{
		char a = "aeotl";
		char b = "AEOTL";
		char c = "43071";
		int j = 0;

		while (a[j] != '\0')
		{
			if (*p == a[j] || a[j] - (*p) == 32)
				*p = c[j];
			j++;
		}
		p++;
	}
	return (r);
}

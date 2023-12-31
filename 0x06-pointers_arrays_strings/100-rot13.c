#include "main.h"


/**
 * rot13 - A function that creates a code
 * @r: an input to the function
 * Return: return the created code
 */

char *rot13(char *r)
{
	char *p = r;

	while (*p != '\0')
	{
		char a = 'a';

		while (((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) && a <= 'z')
		{
			char t = *p;

			t = t - 13;
			if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
			{
				t = *p;
				t = t + 13;
			}
			*p = t;
			a++;
			break;
		}
		p++;
	}
	return (r);
}

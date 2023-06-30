#include <main.h>


/**
 * rot13 - A function that creates a code 
 * @r: an input to the function
 * return: return the created code
 */

char *rot13(char *r)
{
	char *p = r;

	while (*p != '\0')
	{
		char a = 'a';

		while (((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) && a <= 'z')
		{
			if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
			{
				char t = *p;
				t = t + 13;
				*p = t;
				break;
			}
			else
			{
				char t1 = *p;
				t1 = t1 - 13;
				*p = t1;
				break;
			}
			a++;
		}
		p++;
	}
	
	return (r);
}

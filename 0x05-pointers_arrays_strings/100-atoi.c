#include "main.h"


/**
 * _atoi - A function that converts string to int
 * @s: the input of the function
 * Return: if no int return 0 else return input int
 */

int _atoi(char *s)
{
	int i = 0;
	int m = 0;
	int p = 0;
	int t = 0;
	int d = 0;
	int si = 1;

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			d = *s - '0';
			t = (t * 10) + d;
			i++;
		}
		if (i > 0 && (*s < 48 || *s > 57))
			break;
		m = (*s == 45) ? m++ : ;
		p = (*s == 43) ? p++ : ;
	}
	si = (p >= m) ? : -1;
	if (i > 0)
		return (t * si);
	else
		return (0);
}

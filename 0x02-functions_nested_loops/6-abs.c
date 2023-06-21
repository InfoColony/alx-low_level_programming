#include "main.h"

/**
 * _abs - A function that return the absolute value of an input
 * @i: the input to be returned
 * Return: Always 0
 */


int _abs(int i)
{
	if (i < 0)
	{
		int j = 0;
		int c = 0;

		while (j >= i)
		{
			c++;
			j--;
		}
		return (c);
	} else
		return (i);
	return (0);
}

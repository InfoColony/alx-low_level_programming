#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of an input
 * @i: the input to be printed
 * Return: Always 0
 */




int print_last_digit(int i)
{
	if (i < 0)
	{
		int j = 0;
		int k = 0;
		int r;

		while (j > i)
		{
			k++;
			j--;
		}
		j = j + 100;
		r = j % 10;
		return (r);
	}
	else
	{
		int l = i % 10;

		return (l);
	}
}

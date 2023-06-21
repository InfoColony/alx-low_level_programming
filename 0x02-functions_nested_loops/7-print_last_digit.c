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
		int j = i % 10;

		while (j < 0)
		{
			j++;
		}
		_putchar('0' + j);
		return (j);
	}
	else
	{
		int l = i % 10;

		_putchar('0' + l);
		return (l);
	}
}

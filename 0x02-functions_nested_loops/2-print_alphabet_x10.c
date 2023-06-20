#include "main.h"

/**
 * print_alphabet_x10 - main function
 * A function to print all alphabets 10x
 *
 * Return: Always 0 (Successful)
 */


void print_alphabet_x10(void)
{
	char a = 'a';

	int i = 0;

	char = '\n';

	for (; i < 10; i++)
	{
		for (; a <= 'z'; a++)
		{
			write(1, &a, 1);
		}
		write('\n');
	}
}

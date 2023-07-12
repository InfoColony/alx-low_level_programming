#include <stdio.h>


/**
 * main - Entry point of thie program
 * @c: an input to the program
 * @arg: an input to the program
 * Return: return 0
 */

int main(int c, char *arg[])
{
	char *p;

	p = arg[c - 1];
	printf("%s\n", p);
	return (0);
}

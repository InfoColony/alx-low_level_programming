#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @cnt: argument count
 * @arg: arguments.
 * Return:0.
 */
int main(int cnt, char *arg[])
{
	char *opcd = (char *) main;
	int i, nbyte;

	if (cnt != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbyte = atoi(arg[1]);
	if (nbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbyte; i++)
	{
		printf("%02x", opcd[i] & 0xFF);
		if (i != nbyte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @c: an input to the program
 * @arg: an input to the program
 * Return: return 0 on success and 1 on failure
 */

int main(int c, char *arg[])
{
	int j, i = 1;
	int sum = 0;
	char *s = "0";

	if (c <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < c; i++)
	{
		j = atoi(arg[i]);
		if (j == 0 && *(arg[i]) != *s)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}

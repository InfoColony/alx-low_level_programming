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

    if (c <= 1)
    {
        printf("0\n");
        return (0);
    }
    for (; i < c; i++)
    {
		char *s = arg[i];
        j = 0;
        for (; s[j] != '\0'; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(s);
    }
    printf("%d\n", sum);
    return (0);
}

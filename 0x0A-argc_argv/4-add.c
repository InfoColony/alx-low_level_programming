#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @c: an input to the program
 * @arg: an input to the program
 * Return: return 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
    int sum = 0;
	int i;
	int number;

    if (argc <= 1)
    {
        printf("0\n");
        return 0;
    }

	i = 1;
    for (; i < argc; i++)
    {
        char *arg = argv[i];

        
		int j = 0;
        for (; arg[j] != '\0'; j++)
        {
            if (arg[j] < '0' || arg[j] > '9')
            {
                printf("Error\n");
                return 1;
            }
        }

        number = atoi(arg);
        sum += number;
    }

    printf("%d\n", sum);
    return 0;
}

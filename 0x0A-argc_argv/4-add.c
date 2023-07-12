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

    if (argc <= 1)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        char *arg = argv[i];

        // Check if the argument contains non-digit characters
        for (int j = 0; arg[j] != '\0'; j++)
        {
            if (arg[j] < '0' || arg[j] > '9')
            {
                printf("Error\n");
                return 1;
            }
        }

        int number = atoi(arg);
        sum += number;
    }

    printf("%d\n", sum);
    return 0;
}

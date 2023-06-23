#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */



int main(void)
{
	int i = 1, f, b, fb;

	for (; i <= 100; i++)
	{
		if (i > 2)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				if (i % 3 == 0 && i % 5 != 0)
					printf("Fizz ");
				else if (i % 5 == 0 && i % 3 != 0)
					printf("Buzz ");
				else
					printf("FizzBuzz ");
			} else
				printf("%d ", i);
		} else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}

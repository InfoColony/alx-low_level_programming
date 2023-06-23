#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */



int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		char r;

		if (i > 2)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				if (i % 3 == 0 && i % 5 != 0)
					printf("Fizz");
				else if (i % 5 == 0 && i % 3 != 0)
					printf("Buzz");
				else
					printf("FizzBuzz");
			} else
				printf("%d", i);
		} else
			printf("%d", i);
		r = (i < 100) ? ' ' : '\n';
		putchar(r);
	}
	return (0);
}

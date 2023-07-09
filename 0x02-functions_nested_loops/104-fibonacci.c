#include <stdio.h>
/**
 * main - Entry point of the grogram
 * Return: return 0
 */

void fib(void);

int main(void)
{
	fib();
	putchar('\n');
	return (0);
}

/**
 * fib - A function that prints fibonacci sequence upto 98
 */
void fib(void)
{
	unsigned long int j, k, jd, jr, kd, kr;
	int i = 1;

	j = 1;
	k = 2;

	printf("%lu", j);
	for (; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	jd = j / 1000000000;
	jr = j % 1000000000;
	kd = k / 1000000000;
	kr = k % 1000000000;
	for (; i < 98; ++i)
	{
		printf(", %lu", kd + (kr / 1000000000));
		printf("%lu", kr % 1000000000);
		kd = kd + jd;
		jd = kd - jd;
		kr = kr + jr;
		jr = kr - jr;
	}
}

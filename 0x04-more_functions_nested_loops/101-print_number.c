#include "main.h"


/**
 * print_number - a function that prints the given input
 *  the input
 * signedint - input is signed
 * unsint - input is unsigned
 * @int: input
 */


void signedint(int);

void unsint(unsigned int);


void print_number(int n)
{
	if (n < 0)
		signedint(n);
	else
		unsint(n);
}

/**
 * signedint - input is signed
 * @s: input
 */
void signedint(int s)
{
	if (s < 0)
	{
		_putchar('-');
		s = -s;
	}
	if (s >= 10)
		signedint(s / 10);
	_putchar('0' + s % 10);
}

/**
 * unsint - input is unsigned
 * @us: input
 */

void unsint(unsigned int us)
{
	if (us >= 10)
		unsint(us / 10);
	_putchar('0' + us % 10);
}

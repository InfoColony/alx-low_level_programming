#include "main.h"

/**
 *
 *
 *
 */

int is_prime_number(int n)
{
	int i = 1;

	
	for (; i < 10; i++)
	{
		if (i % n == 0)
			return (0);
	}
	return (1);
}

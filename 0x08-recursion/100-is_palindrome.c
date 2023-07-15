#include "main.h"

/**
 * is_palindrome - a function that checkes if a string is palindrom
 * @int: an input
 * @char: an input
 * Return: return 0 or 1
 */

int rec(int, int, char *);
int strl(char *);

int is_palindrome(char *s)
{
	int len = strl(s);

	return (rec(0, len, s);
}
/**
 * strl - A function that returns the length of a string
 * @st: an input to the function
 * Return: return the length of the input string
 */
		
int strl(char *st)
{
	if (*st == '\0')
		return (0);
	return (1 + strl(st + 1));
}
/**
 * rec - A function that that recursively chack if a string is palindrome
 * @j: an input to the function
 * @k: an input to the function
 * @a: an input to the function
 * Return: returns 0 or 1
 */

int rec(int j, int k, char *a)
{
	if (j >= k)
		return (1);
	if (a[j] != a[k])
		return (0);
	return (rec(j + 1, k - 1, a));
}

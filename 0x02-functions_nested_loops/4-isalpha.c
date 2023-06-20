#include "main.h"

/**
 * _isalpha - A function that checks if a character is alphabe
 * @c: the character to check on
 * Return: 0 or 1
 */


int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

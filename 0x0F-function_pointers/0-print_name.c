#include "function_pointers.h"

/**
 * print_name - A function the prints a string
 * @name: An input to the function
 * @f: A pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}

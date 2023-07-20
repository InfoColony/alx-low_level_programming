#include "function_pointers.h"

/**
 * int_intex - A function that returns the index of a matched number
 * @array: An input to the function
 * @size: The size of an array
 * @cmp: A pointer to a function
 * Return: returns the index of the matched number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !size || size <= 0 || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i] == 1)
			return (i);
	}
	return (-1);
}

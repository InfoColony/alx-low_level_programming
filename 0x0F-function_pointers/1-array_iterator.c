#include "function_pointers.h"

/**
 *
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	int i = 0;

	for (; i < size; i++)
		action(array[i]);
}

#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iteration - A function that sprints all element of a array
 * @array: An input to the function
 * @size: An input to the function
 * @action: An input to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	for (; i < size; i++)
		action(array[i]);
}

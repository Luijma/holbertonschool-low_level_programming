#include "function_pointers.h"
/**
 * array_iterator - executes on each element of a given array
 * @array: array with elements
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "search_algos.h"

/**
 * linear_search - searches values in int array with linear search
 * @array: pointer to first element of array to search in
 * @size: size of the array passed
 * @value: value being searched
 *
 * Return: index of first occurrence of value, or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

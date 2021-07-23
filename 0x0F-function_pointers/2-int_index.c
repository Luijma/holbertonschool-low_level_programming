#include "function_pointers.h"
/**
 * int_index - searches for an integer with pointer to function
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function that searches for int
 * Return: index of first instance of cmp returning 1, -1 on fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

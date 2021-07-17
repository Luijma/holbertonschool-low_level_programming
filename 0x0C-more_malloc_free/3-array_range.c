#include "holberton.h"
/**
 * array_range - creates array of integer
 * @min: smallest number in array
 * @max: biggest number in array
 * Return: array of int, NULL if invalid numbers
 */
int *array_range(int min, int max)
{
	int *array;
	int elements;
	int i;

	if (min > max)
		return (NULL);


	elements = max - min;
	array = malloc((elements + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

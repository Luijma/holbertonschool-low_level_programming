#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes it with c
 * @size: size of array created
 * @c: character to initialize all indexes of array
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);
	if (array == NULL || size < 1)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}

#include "holberton.h"
/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: number of elements
 * @size: bytes to allocate for
 * Return: returns pointer of undefined type, Null if
 * failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;
	unsigned int bytes;

	if (size == 0 || nmemb == 0)
		return (NULL);

	bytes = nmemb * size;
	array = malloc(bytes);

	if (!array)
		return (NULL);
	for (i = 0; i < bytes; i++)
	{
		array[i] = 0;
	}
	return (array);
}

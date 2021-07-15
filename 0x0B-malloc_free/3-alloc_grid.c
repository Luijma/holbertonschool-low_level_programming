#include "holberton.h"
/**
 * alloc_grid - returns pointer to 2d array of int
 * @width: width of array
 * @height: height of array
 * Return: NULL if failure, if width or height is negative, NULL
 * otherwise, pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **newArray;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	newArray = (int **)malloc(height * sizeof(int *));

	if (newArray == NULL)
	{
		free(newArray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		newArray[i] = (int *)malloc(width * sizeof(int));
		if (newArray[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(newArray[j]);
			}
			free(newArray);
			return (NULL);
		}
	}
	return (newArray);
}

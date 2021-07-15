#include "holberton.h"

/**
 * free_grid - frees a 2d array
 * @grid: array to be freed
 * @height: rows of array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if(grid == NULL)
		return;

	for(i = 0; i < height; i++)
	{
		free((grid[i]));
	}
	free(grid);
}

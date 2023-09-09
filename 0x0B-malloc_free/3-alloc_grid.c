#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first integer
 * @height: second integer
 * Return: NULL on failure
 * NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

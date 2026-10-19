#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a two-dimensional array of integers
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			while (row > 0)
				free(grid[--row]);
			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}

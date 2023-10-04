#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free memory allocated for a 2D grid
 * @grid: The pointer to the 2D grid
 * @height: The number of rows in the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (j = 0; j < height; j++)
	{
		if (grid[j] != NULL)
		{
			free(grid[j]);
		}
	}
	free(grid);
}

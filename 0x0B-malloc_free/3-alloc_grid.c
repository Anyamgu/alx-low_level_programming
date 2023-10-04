#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D array of integers and initialize to 0
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(ptr[y]);
				free(ptr);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}

	return (ptr);
}

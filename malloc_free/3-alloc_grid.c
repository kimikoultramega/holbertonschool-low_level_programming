#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}

	return (grid);
}



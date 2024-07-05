#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{

	int **biblioteca;
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	biblioteca = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
}

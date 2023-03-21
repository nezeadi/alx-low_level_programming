#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free a 2-dim array
 * @grid: pointer to a 2-dimensional array
 * @height: no of rows in the 2 dimensional array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

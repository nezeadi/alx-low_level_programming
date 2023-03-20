#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-dim array
 * @width: witdth of the array
 * @height: height of the array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

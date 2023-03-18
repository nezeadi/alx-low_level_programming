#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function to create an array of integers
 * @min: first element in array
 * @max: last element in array
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ((max - min) + 1); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}

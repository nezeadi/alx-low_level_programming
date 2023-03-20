#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create and array
 * @size: no of elements in the array
 * @c: value to initialize the array elements with
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || !ptr)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		ptr[counter] = c;
	}
	return (ptr);
}

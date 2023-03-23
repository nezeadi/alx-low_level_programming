#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function passed as a parmeter
 * @array: array of intergers
 * @size: size of the array
 * @action: function passed as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && size != '\0')
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}

#include "function_pointers.h"

/**
 * array_iterator - execute a function on each array parameter
 * @array: array of integers
 * @size: size of the array
 * @action: function called back
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

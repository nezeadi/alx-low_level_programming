#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free memory allocated to dog struct
 * @d: dog structure to be freed
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to struct dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aja;
	int length;
	char *n;

	if (name == 0 || owner == 0)
		return (NULL);

	aja = malloc(sizeof(dog_t));
	if (aja == NULL)
		return (NULL);

	for (length = 1, n = name; *n; length++)
		n++;
	aja->name = malloc(length);
	if (aja->name == 0)
	{
		free(aja);
		return (NULL);
	}

	for (length = 1, n = owner; *n; length++)
		n++;
	aja->owner = malloc(length);
	if (aja->owner == 0)
	{
		free(aja->name);
		free(aja);
		return (NULL);
	}

	for (length = 0; *name != 0; length++)
		aja->name[length] = *name++;
	aja->name[length] = 0;

	for (length = 0; *owner != 0; length++)
		aja->owner[length] = *owner++;
	aja->owner[length] = 0;
	aja->age = age;

	return (aja);
}

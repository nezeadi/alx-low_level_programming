#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print details of a dog
 * @d: struct a dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == 0)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %.6f\n", d->age);

		if (d->owner == 0)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
	else
	{
		return;
	}
}


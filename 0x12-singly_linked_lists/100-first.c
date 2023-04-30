#include "lists.h"

/**
 * beforeMain - a function that executes before main
 * Return: nothing
 */
void beforeMain(void) __attribute__((constructor));

void beforeMain(void)
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

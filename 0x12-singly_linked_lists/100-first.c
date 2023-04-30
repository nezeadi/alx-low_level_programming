#include "lists.h"

/**
 * beforeMain - a function that executes before main
 * Return: nothing
 */
void beforeMain() __attribute__((constructor));

void beforeMain()
{
	printf("you're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

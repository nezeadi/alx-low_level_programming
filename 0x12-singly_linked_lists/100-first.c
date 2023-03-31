#include <stdlib.h>
#include <stdio.h>
/**
 * tortoise - function which executes before main function
 * Return: nothing
 */
void __attribute__((constructor)) tortoise()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

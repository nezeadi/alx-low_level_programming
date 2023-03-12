#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 *main - program that prints its name
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	UNUSED (argv);
	for (i = 0; i < argc-1; i++)
	{
	}
	printf("%d\n", i);
	return (0);
}

#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char* argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}


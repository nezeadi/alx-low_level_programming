#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 * @argc: number of arguments supplied to main function
 * @argv: array of arguments supplied to main function
 * Return: always o
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

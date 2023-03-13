#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * digitCheck - function to check if char is a digit
 * @entry: pointer to string to be checked
 * Return: 1 if true 0 if false
 */
int digitCheck(char *entry)
{
	int j; /*initialize counter*/

	for (j = 0; entry[j] != '\0'; j++)
	{
		if (isdigit(entry[j]))
			return (1);
	}
	return (0);
}

/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (digitCheck(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

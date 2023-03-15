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
	unsigned int j; /*initialize counter*/

	while (j < strlen(entry))
	{
		if (!isdigit(entry[j]))
			return (0);
		j++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, conv_num, sum = 0;

	i = 1;
	while (i < argc)
	{
		if (digitCheck(argv[i]))
		{
			conv_num = atoi(argv[i]);
			sum += conv_num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

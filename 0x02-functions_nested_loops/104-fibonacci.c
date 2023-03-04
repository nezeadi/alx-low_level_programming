#include <stdio.h>

/**
 * main - a program to print the first 100 numers
 * of the fibonacci sequence separated by a comma
 * Return: 0
 */

int main(void)
{
	int counter;

	unsigned long int num1 = 1.0;
	unsigned long int num2 = 2.0;
	unsigned long int sum;

	printf("%lu, ", num1);
	for (counter = 1; counter < 98; counter++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu", num1);

		if (counter != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}

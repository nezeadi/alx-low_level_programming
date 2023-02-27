#include <stdio.h>

/**
 * main - a program to print the first 100 numers
 * of the fibonacci sequence separated by a comma
 * Return: 0
 */

int main(void)
{
	int counter;

	long double num1 = 1.0;
	long double num2 = 2.0;
	long double sum;

	printf("%.0Lf, ", num1);
	for (counter = 1; counter < 98; counter++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%.0Lf", num2);

		if (counter != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}

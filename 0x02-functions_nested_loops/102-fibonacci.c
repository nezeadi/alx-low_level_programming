#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2 followed by a new line
 * Return: always 0
 */

int main(void)
{
	long int counter;
	long int num1 = 1;
	long int num2 = 2;
	long int sum;

	printf("%ld, ", num1);
	for (counter = 1; counter < 50; counter++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%ld", num1);
		if (counter < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}



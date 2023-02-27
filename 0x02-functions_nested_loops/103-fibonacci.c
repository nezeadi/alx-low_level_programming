#include <stdio.h>

/**
 * main - a program that prints the sum of the even valued numbers,
 * of the fibonacci sequence followed by a new line
 * Return: always 0
 */

int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int sum;
	long int even_sum = 2;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if (num2 % 2 == 0)
			even_sum += num2;
	}
	printf("%lu\n", even_sum);
	return (0);
}


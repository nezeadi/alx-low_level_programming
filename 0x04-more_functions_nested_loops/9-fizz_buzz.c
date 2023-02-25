#include <stdio.h>

/**
 * main - a program that prints 1 to 100 followed by a new line
 * print Fizz for multiples of 3, Buzz for multiples of 5 and FizzBuzz
 * for multiples of 5 and 3
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}




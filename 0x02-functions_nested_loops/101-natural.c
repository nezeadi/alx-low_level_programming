#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 3 and 5
 * below 1024 (excluded)
 * Return: always 0
 */

int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}



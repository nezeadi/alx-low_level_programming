#include <stdio.h>

/**
 * main - function to find largest prime number
 *
 * Return: 0
 */

int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a <= n / 2)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}

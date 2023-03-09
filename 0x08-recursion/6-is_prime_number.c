#include "main.h"

/**
 * IsPrime - function to check manually determine if int is prime
 * @index: counter to be incremented
 * @n: interger to be cheched
 * Return: 0 if false and 1 if true
 */
int IsPrime(int index, int n)
{
	if ((n % index) == 0)
	{
		return (0);
	} else if (index <= (n / 2))
	{
		return (IsPrime((index + 1), n));
	} else
	{
		return (1);
	}
}

/**
 * is_prime_number - function check if an int is prime
 * @n: number to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n >= -1 && n <= 1)
	{
		return (0);
	} else if (n == 2 || n == 3)
	{
		return (1);
	} else
	{
		return (IsPrime(2, n));
	}
}

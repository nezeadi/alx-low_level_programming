#include "main.h"

/**
 * factorial - a function to determind factorial of a number
 * @n: number whose factorial is to be calculated
 * Return: int factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

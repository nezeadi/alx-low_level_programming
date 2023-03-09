#include "main.h"

/**
 * factorial - a function to determind factorial of a number
 * @n: number whose factorial is to be calculated
 * Return: int factorial of number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));								
	}
}

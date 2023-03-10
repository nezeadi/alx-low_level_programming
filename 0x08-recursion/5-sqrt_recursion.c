#include "main.h"

/**
 * squareroot - a function to manually find the perfect square of an integer
 * @start: start point of test
 * @end: number whose square root is sought
 * Return: int -1 for non perfect square roots or square roots
 * for perfect squares
 */
int squareroot(int start, int end)
{

	if ((start * start) == end)
	{
		return (start);
	}
	else if ((start * start) != end && ((start * start) < end))
		return (squareroot((start + 1), end));
	return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose square root is to be calculated
 * Return: interger square root of n or -1 where n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	} else if (n == 1)
		return (1);
	return (squareroot(1, n));
}

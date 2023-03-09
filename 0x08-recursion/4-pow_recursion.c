#include "main.h"

/**
 * _pow_recursion - a function to calculate x raised to power y
 * @x: int to be raised
 * @y: power to be raised to
 * Return: valueof x to the power y
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

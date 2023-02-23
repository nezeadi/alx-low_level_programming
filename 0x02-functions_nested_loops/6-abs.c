#include "main.h"

/**
 * _abs - a function to compute absolute value of a number
 * @number: functon argument)
 * Return: absolute value of number
 */

int _abs(int number)
{

	if (number >= 0)
	{
		return (number);
	}
	else
	{
		return (number * -1);
	}
}

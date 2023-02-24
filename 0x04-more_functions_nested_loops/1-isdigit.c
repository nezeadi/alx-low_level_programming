#include "main.h"

/**
 *_isdigit - a function to confirm if a character is a digit
 * @c: function parameter. Digit to be verified
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

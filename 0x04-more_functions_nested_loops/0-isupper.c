#include "main.h"

/**
 * _isupper - a function to check if a letter is upper case
 * @c: function argument. Parameter to be checked
 * Return: 1 if c is uppercase and o otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


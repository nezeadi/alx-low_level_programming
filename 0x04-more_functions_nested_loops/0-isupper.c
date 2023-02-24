#include "main.h"

/**
 * _isupper - a function to check if a letter is upper case
 * @c: function argument. Parameter to be checked
 * Return: 1 if c is uppercase and o otherwise
 */

int _isupper(int c)
{
	char letter = c + '0';

	if (letter >= 'A' || letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


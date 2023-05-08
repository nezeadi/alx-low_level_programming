#include "main.h"

/**
 * binary_to_unit - function to convert binary to an unsigned int
 * @b: binary string to be converted
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	
	number = 0;
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
		{
			number = (number << 1) | 1;
		}
		else if (*b == '0')
		{
			number = number << 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (number);
}


#include "main.h"

/**
 * print_binary - function to print binary rep of a number
 * @n: number to be represented in binary format
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int index = 1;

	index = index << ((sizeof(index) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (index > 0)
	{
		if ((index & n) == 0)
		{
			index >>= 1;
		}
		else
		{
			break;
		}
	}
	while (index > 0)
	{
		if ((index & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		index = index >> 1;
	}
}


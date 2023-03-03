#include "main.h"

/**
 * print_number - a function to print and integer
 * @n: function argument. Integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int integer_print;

	integer_print = n;

	if (n < 0)
	{
		_putchar(45);
		integer_print = -n;
	}

	if (integer_print / 10)
	{
		print_number(integer_print / 10);
	}
	_putchar((integer_print % 10) + '0');
}

#include "main.h"

/**
 * print_to_98 - a number which prints to 98 for any side of it
 *@n: function argument which is the count starting point
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
			}
			n++;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}

#include "main.h"

/**
 *print_times_table - a function to print times tables of numbers
 *between 3-15
 *@n: function argument number for which times table will be generated
 *Return: nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				if (product == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else if (product < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
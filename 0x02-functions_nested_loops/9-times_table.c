#include "main.h"

/**
 * times_table - a function to print the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;
			if (product == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(product);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(product / 10 + '0);
				_putchar(product % 10 + '0');
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}



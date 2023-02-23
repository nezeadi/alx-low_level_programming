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

			_putchar(product);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}



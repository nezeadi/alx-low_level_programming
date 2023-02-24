#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: function argument. No of times '\' should be printed on terminal
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}


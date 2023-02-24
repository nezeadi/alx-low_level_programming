#include "main.h"

/**
 * print_line - a function that prints a line of lenth n
 * @n: the number of times the character '_' should be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

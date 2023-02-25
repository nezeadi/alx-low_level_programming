#include "main.h"

/**
 * print_triangle - a function to print a triangle using '#'
 *
 * @size: function arugment to specify triangle height
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}




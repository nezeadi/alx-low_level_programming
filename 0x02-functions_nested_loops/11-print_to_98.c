#include "main.h"
#include <stdio.h>

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
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else
	{
		printf("%d, ", n);
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of integers to be rpinted
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			/*code to print integers separated by separator*/
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}

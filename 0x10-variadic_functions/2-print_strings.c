#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of integers to be rpinted
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *strings;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		/*code to print strings separated by separator*/
		strings = va_arg(args, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strings == NULL)
			printf("(nil)");
		else
		{
			printf("%s", strings);
		}
	}
	va_end(args);
	printf("\n");
}

#include "variadic_functions.h"
/**
 * print_strings - function that prints all its parameters
 * @separator: string to be printed between numbers
 * @n: number of parameters in the list
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
	}
	va_end(args);
	printf("\n");
}

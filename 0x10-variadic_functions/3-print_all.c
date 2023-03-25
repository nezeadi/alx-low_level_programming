#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * prints_char - function that prints character
 * @list: contains chracter to be printed
 *
 * Return: nothing
 */
void prints_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * prints_int - function that prints numbers
 * @list: contains chracter to be printed
 *
 * Return: nothing
 */
void prints_int(va_list list)
{
	printf("%d", (int) va_arg(list, int));
}

/**
 * prints_float - function that prints decimal
 * @list: contains chracter to be printed
 *
 * Return: nothing
 */
void prints_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * prints_string - function that prints string
 * @list: contains chracter to be printed
 *
 * Return: nothing
 */
void prints_string(va_list list)
{
	char *string = va_arg(list, char*);

	while (string != NULL)
	{
		printf("%s", string);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - function that prints anything
 * @format: string containing type infor for the args
 *
 *  Return: nothing
 */
void print_all(const char * const format, ...)
{
	const char *pointer;
	va_list list;
	int i = 0, nf = 0;

	func_index types[] = {
		{prints_char, 'c'}, {prints_int, 'i'},
		{prints_float, 'f'}, {prints_string, 's'}
	};

	pointer = format;
	va_start(list, format);
	while (format != NULL && *pointer)
	{
		if (types[i].d_type == *pointer)
		{
			if (nf)
				printf(", ");
			nf = 1;
			types[i].f(list);
			pointer++;
			i = -1;
		}
		i++;
		pointer += i / 4;
		i %= 4;
	}
	printf("\n");

	va_end(list);
}

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _putchar(char c);

/**
 * struct func_index - index for selecting functions to use for printing
 * - for task 4 - print_all
 *
 *   @f: function to use
 *   @d_type: data type to be printed
 */
typedef struct func_index
{
	void (*f)(va_list);
	char d_type;
} func_index;
#endif

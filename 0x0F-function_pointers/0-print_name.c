#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to be printed
 * @f: function to be called back to print a name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

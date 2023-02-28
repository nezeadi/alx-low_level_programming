#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s: function argument. String to be printed in reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = (sizeof(s) / sizeof(s[0])); i < 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

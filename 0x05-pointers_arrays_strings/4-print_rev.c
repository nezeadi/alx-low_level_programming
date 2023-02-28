#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - a function to print a string in reverse
 * @s: function argument. String to be printed in reverse
 */

void print_rev(char *s)
{
	int i;
	
	for (i = _strlen(s) - 1; i < 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

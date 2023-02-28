lude "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s: function argument. String to be printed in reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = s.length; i < 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

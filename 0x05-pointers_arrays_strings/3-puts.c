#include "main.h"

/**
 * _puts - a function that prints a string, followed
 * by a new line
 * @str: function argument. String to be displayed to stdout
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(stri[i]);
	}
	_putchar('\n');
}

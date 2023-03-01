#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - a function that prints half of a string
 * @str - string pointer to be printed
 */

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
	{
		for (i = _strlen(str) / 2; i <= _strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (_strlen(str) - 1) / 2; i <= _strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
}

#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function that reverses a string
 * @s: function argument. string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char new_s = " ";

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		new_s[j] = s[i];
		j++;
	}

	for (j = 0; j <= _strlen(new_s); j++)
	{
		s[j] = new_s[j];
	}
}


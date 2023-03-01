#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function that reverses a string
 * @s: function argument. string to be reversed
 */

void rev_string(char *s)
{
	int i;
	char ns;

	for (i = 0; i <= _strlen(s) / 2; i++)
	{
		ns = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = ns;
	}
}


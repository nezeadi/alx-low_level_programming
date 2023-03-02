#include "main.h"

/**
 * *string_toupper - function to convert sting to uppercase
 * @s: string argument to converted to upper case
 * Return: char or upper case string
 */

char *string_toupper(char *s)
{
	int i;
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 97 && s[i] < 122)
		{
			j = s[i] - 32;
		}
		else
		{
			j = s[i];
		}
	}
	return (j);
}

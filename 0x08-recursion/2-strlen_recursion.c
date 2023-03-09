#include "main.h"

/**
 * int _strlen_recursion - function to return string length
 * @s - string to be measured
 * Return: int depicting string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
	return (0);
}


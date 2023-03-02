#include "main.h"

/**
 * _strcmp - a function like strcmp to compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer value depending on outcome of comparison
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}

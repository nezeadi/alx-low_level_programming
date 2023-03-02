#include "main.h"

/**
 * _strcmp - a function like strcmp to compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer value depending on outcome of comparison
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2 || s1 == s2)
	{
		return (s1 - s2);
	}
	else
	{
		return (s2 -s1);
	}
}


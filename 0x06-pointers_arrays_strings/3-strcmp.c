#include "main.h"

/**
 * _strcmp - a function like strcmp to compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer value depending on outcome of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);

}


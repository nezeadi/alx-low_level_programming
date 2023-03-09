#include "main.h"

/**
 * _strpbrk - a function to search a string for a set of bytes
 * @s: string to be searched
 * @accept: one of the bytes to be searched for
 * Return: pointer to byte in s that matches accept or
 * NULL if there are no matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

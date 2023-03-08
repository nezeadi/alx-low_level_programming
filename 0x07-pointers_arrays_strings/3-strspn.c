#include "main.h"

/**
 * _strspn - a function to get the length of a prefix substring
 * @s: string to be seached for prefix length
 * @accept: no of bytes of sting to be returned
 * Return: no of bytes in the the initial segment of string.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}


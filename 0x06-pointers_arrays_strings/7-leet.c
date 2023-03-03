#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @s: string argument to be encoded
 * Return: char array of new encoded string
 */

char *leet(char *s)
{
	char arry[20] = "a4A4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arry[j] != '\0'; j++)
		{
			if (s[i] == arry[j])
			{
				s[i] = arry[j + 1];
				break;
			}
		}
	}
	return (s);
}


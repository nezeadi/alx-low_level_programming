#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string to be serached
 * @c: character to be searched for within string
 * Return: pointer to first occurence of character in string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}

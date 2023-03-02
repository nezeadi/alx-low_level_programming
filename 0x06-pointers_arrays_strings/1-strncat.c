#include "main.h"

/**
 * _strncat - function to concatenate n bytes of string src to dest
 * @dest: destination string to be contatenated with source
 * @src: string to be dest
 * @n: no of bytes of string src to be joined to dest
 * Return: character value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

		dest[i + j] = '\0';
		return (dest);
}

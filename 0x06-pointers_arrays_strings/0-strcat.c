#include "main.h"

/**
 * *_strcat - a function to apeend src string to dest string
 * @dest: string to contain concatenated values
 * @src: string whose value is to be added to the dest string.
 * Return: pointer contaning new concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}


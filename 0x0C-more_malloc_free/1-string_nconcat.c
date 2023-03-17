#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a string to concatenate two strings
 * @s1: first string (destination)
 * @s2: second string (string to be added)
 * @n: no of bytes of s2 to be added to s1
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	ptr = malloc(sizeof(char) * n + i + 1);
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < n; k++)
	{
		ptr[k + i] = s2[k];
	}

	ptr[k + i] = '\0';

	return (ptr);
}



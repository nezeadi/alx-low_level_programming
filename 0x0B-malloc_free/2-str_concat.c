#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
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

	ptr = malloc(sizeof(char) * (i + j));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		ptr[k + i] = s2[k];
	}

	ptr[k + i] = '\0';

	return (ptr);
}

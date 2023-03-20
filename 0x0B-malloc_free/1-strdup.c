#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to hold copy of string in a pointer
 * @str: string to be stored in pointer
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	
	ptr = malloc(sizeof(char) * (strlen(str) +1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

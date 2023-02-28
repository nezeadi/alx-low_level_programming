#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s - pointer argument referencing the
 * address of string whose length is returned
 * Return: integer length of the string parameter
 */

int _strlen(char *s)
{
	char string_value[] = *s;

	int string_length;

	for (string_length = 0; string_value[string_length] != '\0'; string_length++)
	{
	}
	return (string_length);

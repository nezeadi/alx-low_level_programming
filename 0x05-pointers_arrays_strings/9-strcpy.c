#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - function to copy string content
 * @dest: func arg. pointer destination to be copied to
 * @src: func arg. pointer to source string
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}



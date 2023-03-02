#include "main.h"

/**
 * *_strncpy - function to work like strncpy
 *@dest: destination string
 *@src: source string
 *@n: number of bytes of source string to be copied
 *Return: char of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

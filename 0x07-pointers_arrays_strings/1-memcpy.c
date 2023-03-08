#include "main.h"

/**
 * *_memcpy - a function to copy memory from source to destination
 * @dest: destination of copied memory
 * @src: source of memory
 * @n: number of bytes of memory to be copied
 * Return: pointer of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}


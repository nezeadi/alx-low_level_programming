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
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}


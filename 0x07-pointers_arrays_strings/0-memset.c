#include "main.h"

/**
 * *_memset - a function to fill memory with a constant byte
 * @s: pointer to be filled with constant
 * @b: constant byte to be filled in memory s
 * @n: number of bytes of b to be filled in s
 * Return: char pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

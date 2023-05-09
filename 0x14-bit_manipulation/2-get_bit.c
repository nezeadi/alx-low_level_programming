#include "main.h"

/**
 * get_bit - function that returns value of a bit at a given index
 * @n: number whose bit at given index is to be returned
 * @index: index of bit in n to be returned
 * Return: value of the bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}

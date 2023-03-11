#include "main.h"

/**
 * print_diagsums - function to print the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to array with diagonals to be summed
 * @size: size of the array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sum1, sum2);
}

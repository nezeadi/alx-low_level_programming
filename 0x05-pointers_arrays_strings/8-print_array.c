#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints the elements of an arry
 * @a: function argument. pointer of array
 * @n: function argument. How many times to prints
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
											}
		printf("\n");
}


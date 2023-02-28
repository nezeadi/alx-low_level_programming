#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: first function argument
 * @b: second function argument
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}

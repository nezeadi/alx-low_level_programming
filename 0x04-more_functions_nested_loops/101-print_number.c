#include "main.h"

/**
 * print_number - a function to print and integer
 * Return: nothing
 */

void print_number(int n)
{
	/*First we determine the lenth of integer*/
	int integer_length = 0;
	int i;
	int m = n;

	while (n != 0)
	{
		n = n / 10;
		integer_length++;
	}

	/*initiate a loop with a size of interger lenth*/
	for (i = integer_length - 1; i >= 1; i--)
	{
		/**
		 *within the loop use putchar to display value of integer
		 *modulo 10 to the power of current value of loop counter
		 */
		_putchar('0' + (m % 10 ^ i));
	}
}

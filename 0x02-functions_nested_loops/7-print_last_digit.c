#include "main.h"

/**
 * print_last_digit - a function that prints last digit of a number
 * @number: function argument (a number)
 * Return: the last digit of argument
 */

int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;
	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);
	return (last_digit);
}

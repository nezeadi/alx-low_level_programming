#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract a number from another
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide a by b
 * @a: first number
 * @b: second number
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first number
 * @b: second number
 *
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}


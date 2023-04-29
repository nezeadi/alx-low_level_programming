#include "function_pointers.h"

/**
 * op_add - addition function
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction function
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first number
 * @b: second number
 * Return: quotient of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first number
 * @b: second number
 * Return: modulo of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}

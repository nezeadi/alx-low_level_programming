#include <stdio.h>

/**
 * main - a program that prints  0-9 using putchar()
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}

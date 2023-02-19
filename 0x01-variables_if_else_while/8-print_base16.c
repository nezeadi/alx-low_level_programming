#include <stdio.h>

/**
 * main - a program to print all numbers in the hexadecimal base
 * Return: Always 0
 */

int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

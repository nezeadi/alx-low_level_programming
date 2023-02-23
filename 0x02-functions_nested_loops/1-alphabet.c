#include "main.h"

/**
 * main - a program to print the alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	return (0);
}

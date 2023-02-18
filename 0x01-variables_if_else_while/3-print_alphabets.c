#include <stdio.h>

/**
 * main - a program to print the alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char letter:

	for (letter = 'a', letter <= 'Z', letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

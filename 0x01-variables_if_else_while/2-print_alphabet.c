#include <stdio.h>
/**
*main - a program to print eh alphabet in lowercase
*Return: Always 0
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

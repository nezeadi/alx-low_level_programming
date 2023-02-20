#include <stdio.h>

/**
 * main - a program to print number combinations
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	/*first loop to control first digit of combo*/
	for (i = 0; i < 9; i++)
	{
		/*second loop to control second digit of combo*/
		for (j = 0; j < 10; j++)
		{
			if ( i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

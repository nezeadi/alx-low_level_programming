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
			/*third loop to print combo as required*/
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 *main - a program to print 3-number combinations
 *Return: Always 0
 */

int main(void)
{
	int i, j, k;

	/*first loop to control first digit of combo*/
	for (i = 0; i < 9; i++)
	{
		/*second loop to control second digit of combo*/
		for (j = 0; j < 10; j++)
		{
			/*third loop to control the third digit of combo*/
			for (k = 0; k < 10; k++)
			{
				/*third loop to print combo as required*/
				if ((i < j) && (j < k))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

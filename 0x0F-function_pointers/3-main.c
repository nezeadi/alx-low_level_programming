#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: num of runtime parameters
 * @argv: array of runtime parameters
 * Return: result
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a, b;
		int (*fxn)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		fxn = get_op_func(argv[2]);
		if ((*argv[2] == '/' || *argv[2] == '%') && b  == 0)
		{
			printf("Error\n");
			exit(97);
		}
		printf("%d\n", fxn(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}

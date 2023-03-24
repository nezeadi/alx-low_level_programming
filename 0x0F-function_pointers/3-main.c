#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program to test function pointers
 * with mathematical operations
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/*check number of arguments if equal to 4*/
	if (argc == 4)
	{
		/*declare and assign variables*/
		int number_1, number_2;
		int (*function)(int, int);

		number_1 = atoi(argv[1]);
		number_2 = atoi(argv[3]);
		function = get_op_func(argv[2]);

		/*check division or modulo by 0*/
		if ((*argv[2] == '%' || *argv[2] == '/') && number_2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", function(number_1, number_2));
		return (0);

	}
	printf("Error\n");
	exit(98);
}

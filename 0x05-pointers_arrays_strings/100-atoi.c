#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - function to convert string to int
 * @s: function argument. pointer to string to be converted
 * Return: interger value in string
 */

int _atoi(char *s)
{
	int i, num;
	int sign = 1

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}

		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (sign * num);
}


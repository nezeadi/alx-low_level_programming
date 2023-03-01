#include "main.h"


/**
 * _atoi - function to convert string to int
 * @s: function argument. pointer to string to be converted
 * Return: interger value in string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	return (sign * num);
}


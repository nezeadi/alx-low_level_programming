#include "main.h"
#include "2-strlen_recursion.c"

/**
 * palindromeCheck - function to check if a string is palindrom
 * @str: string to be checked
 * @left: left most character index
 * @right: right most character index
 * Return: 1 if true and 0 if false
 */
int palindromeCheck(char *str, int left, int right)
{
	if (str == NULL || left < 0 || right < 0)
	{
		return (0);
	}
	if (left >= right)
	{
		return (1);
	}
	if (str[left] == str[right])
	{
	return (palindromeCheck(str, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	if (palindromeCheck(s, 0, (_strlen_recursion(s)-1)))
		return (1);
	return (0);
}


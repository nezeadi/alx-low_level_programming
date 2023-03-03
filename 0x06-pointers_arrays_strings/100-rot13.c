#include "main.h"

/**
 * *rot13 - function to encode string using rot13
 * @s: string to be encoded
 * Return: char array of new encoded string
 */

char *rot13(char *s)
{
	/*declare variables*/
	int i;

	/*declare first loop to iterate through string s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*statement to apply rot 13*/
		if (((s[i] >= 65) && (s[i] <= 77)) || ((s[i] >= 97) && (s[i] <= 109)))
		{
			s[i] = s[i] + 13;
		}
		else if (((s[i] >= 78) && (s[i] <= 90)) || ((s[i] >= 110) && (s[i] <= 122)))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}

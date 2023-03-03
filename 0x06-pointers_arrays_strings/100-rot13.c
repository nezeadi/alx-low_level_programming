#include "main.h"

/**
 * *rot13 - function to encode string using rot13
 * @s: string to be encoded
 * Return: char array of new encoded string
 */

char *rot13(char *s)
{
	/*declare variables*/
	char upper[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char lower[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int j = 0;
	int i;

	/*declare first loop to iterate through string s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; upper[j] != 0; j++)
		{
			if (s[i] == upper[j])
			{
				s[i] = lower[j];
				break;
			}
		}
	}
	return (s);
}

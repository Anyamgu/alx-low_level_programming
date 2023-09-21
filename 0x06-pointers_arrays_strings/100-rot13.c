#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13
 * @s: input string
 *
 * Return: string function
 */

char *rot13(char *s)
{
	int h, i;
	char num1[] = "ABCDEFGHIJKLMNOPQRSTUVWYZabcdefghijklmnopqrstuvwxyz";
	char num2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (h = 0; s[h] != '\0'; h++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[h] == num1[i])
			{
				s[h] = num2[i];
				break;
			}
		}
	}
	return (s);
}


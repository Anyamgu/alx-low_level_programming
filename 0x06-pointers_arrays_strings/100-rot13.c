#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13
 * @s: input string
 *
 * Return: string function
 */

char *rot13(char *s)
{
	int h;
	char num1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char num2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (h = 0; h <= 52; h++)
		{
			if (*s == num1[h])
			{
				*s = num2[h];
				break;
			}
		}
		s++;
	}
	return (ptr);
}

#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input string
 *
 * Return: value of n
 */

char *leet(char *n)
{
	int w, x;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (w = 0; n[w] != '\0'; w++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[w] == str1[x])
			{
				n[w] = str2[x];
			}
		}
	}
	return (n);
}

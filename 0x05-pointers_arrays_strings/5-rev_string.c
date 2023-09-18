#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string of pointer
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len, u, start;

	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		u = 0;
		start = len / 2;
	}
	while (start--)
	{
		temp = s[len - u - 1];
		s[len - u - 1] = s[u];
		s[u] = temp;
		u++;
	}
}

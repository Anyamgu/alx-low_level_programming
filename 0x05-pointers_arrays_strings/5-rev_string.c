#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string of pointer
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int u;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (u = 0; u < counter; u++)
	{
		counter--;
		rev = s[u];
		s[u] = s[counter];
		s[counter] = rev;
	}
}

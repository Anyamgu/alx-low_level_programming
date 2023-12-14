#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c
 * in the string s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int g;

	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
		{
			return (s + g);
		}
	}

	return ('\0');
}

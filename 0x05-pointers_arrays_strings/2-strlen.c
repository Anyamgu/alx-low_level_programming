#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int string_len;

	string_len = 0;

	while (s[string_len])
	{
		string_len++;
	}
	return (string_len);
}

#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: a string
 * @accept: string containing the bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	 int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
	if (*s == accept[r])
	{
	return (s);
	}
	}
	s++;
	}
	return ('\0');
}

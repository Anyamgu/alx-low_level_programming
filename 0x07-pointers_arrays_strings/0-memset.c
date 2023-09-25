#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: number of times copying b
 * @b: char to copy
 * @s: memory area to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

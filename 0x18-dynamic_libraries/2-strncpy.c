#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: the source string pointer
 * @dest: string pointer
 * @n: number of bytes
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0; f < n && src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strncat - function that concatenates two string
 * @n: number of bytes from @src
 * @src: the parameter input
 * @dest: function parameter
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int f, h;

	f = 0;

	while (dest[f])
	{
		f++;
	}
	for (h = 0; h < n && src[h] != '\0'; h++)
	{
		dest[f + h] = src[h];
	}
	dest[f + h] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @src: Concatenate parameter
 * @dest: Concatenate parameter
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int f, g;

	f = 0;

	while (dest[f])
	{
		f++;
	}
	for (g = 0; src[g] ; g++)
	{
		dest[f++] = src[g];
	}
	return (dest);
}

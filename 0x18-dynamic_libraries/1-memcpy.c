#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number to copy from src
 * @src: char to be copied
 * @dest: memory area to be filled
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		dest[h] = src[h];
	}

	return (dest);
}

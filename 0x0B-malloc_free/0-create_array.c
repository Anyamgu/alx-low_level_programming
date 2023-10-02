#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array input
 * @c: store the strings of characters
 *
 * Return: a pointer to the char c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		ptr[b] = c;
	}
	return (ptr);
}

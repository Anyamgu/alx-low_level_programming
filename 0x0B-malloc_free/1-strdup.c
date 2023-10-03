#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	size_t g, h;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (g = 0; str[g] != '\0'; g++)
	{
		ptr = (char *)malloc(sizeof(char) * (g + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < g; h++)
	{
		ptr[h] = str[h];
	}
	return (ptr);
}

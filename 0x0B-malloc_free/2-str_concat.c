#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_length - Get the length of a string
 * @str: The string to measure
 * Return: The length of the string
 */
size_t _str_length(char *str)
{
	size_t length = 0;

	while (str && str[length])
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = _str_length(s1);

	size_t len2 = _str_length(s2);

	size_t total_length = len1 + len2;

	char *ptr;

	size_t i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(sizeof(char) * (total_length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[total_length] = '\0';
	return (ptr);
}

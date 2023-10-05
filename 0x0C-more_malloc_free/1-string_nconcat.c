#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * get_str_length - Returns the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */

unsigned int get_str_length(char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - Concatenates two strings, including up to n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 * or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, k, l;
	char *t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = get_str_length(s1);
	len2 = get_str_length(s2);

	if (n >= len2)
	{
		n = len2;
	}
	t = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (t == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		t[k] = s1[k];
	}
	for (l = 0; l < n; l++, k++)
	{
		t[k] = s2[l];
	}
	t[k] = '\0';
	return (t);
}

#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *f = needle;

		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}
		if (*f == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}

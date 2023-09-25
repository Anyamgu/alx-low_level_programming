#include "main.h"

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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *s = haystack;
			char *f = needle;

			while (*f != '\0' && *s == *f)
			{
				s++;
				f++;
			}
			if (*f == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}

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
	int n;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		n = 0;
	}
	if (haystack[n] == needle[n])
	{
		do {
			if (needle[n + 1] == '\0')
			{
				return (haystack);
			}
			n++;
		} while (haystack[n] == needle[n]);
	}
	haystack++;
	return ('\0');
}

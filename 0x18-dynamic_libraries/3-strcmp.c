#include "main.h"

/**
 *  _strcmp - function that compares two string
 *  @s1: compares string
 *  @s2: compares string
 *
 *  Return: s1, s2
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			j = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (j);
}

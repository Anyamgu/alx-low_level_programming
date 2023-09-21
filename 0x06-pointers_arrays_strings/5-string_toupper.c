#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @str: input string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		if (str[r] >= 97 && str[r] <= 122)
		{
			str[r] = str[r] - 32;
		}
	}
	return (str);
}

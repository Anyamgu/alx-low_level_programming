#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for any other character
 */

int _isupper(int c)
{
	if (c >= 'A' && c < 'a')
	{
		return (1);
	}
	return (0);
}

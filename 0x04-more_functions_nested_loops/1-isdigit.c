#include "main.h"

/**
 * _isdigit - Checks for a digit 0 through 9
 * @c: Chsracter to be checked
 * Return: 1 if it is a digit or 0 if it is a character
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

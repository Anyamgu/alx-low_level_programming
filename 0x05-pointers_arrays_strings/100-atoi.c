#include "main.h"

/**
 *  _atoi - function that convert a string to an integer
 *  @s: string to be converted
 *  Return: the int converted from the string
 */

int _atoi(char *s)
{
	unsigned int num1 = 0;
	int len = 1;

	do {
		if (*s == '-')
		{
			len *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num1 = (num1 * 10) + (*s - '0');
		}
		else if (num1 > 0)
			break;
	} while (*s++);

	return (num1 * len);
}

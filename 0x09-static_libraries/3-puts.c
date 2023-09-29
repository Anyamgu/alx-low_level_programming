#include "main.h"

/**
 *  _puts - function that prints a string followed by anew line
 *  @str: pointer to the string
 *  Return: string and a new line
 */

void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}

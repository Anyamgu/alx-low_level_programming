#include "main.h"

/**
 * print_rev - function that prints the string in reverse
 * @s: string reference pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

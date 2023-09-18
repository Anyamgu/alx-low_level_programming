#include "main.h"

/**
 *  puts_half - function that prints half of a string
 *  If the number of characters is odd
 *  the function should print the last n characters of the string
 *  where n = (length_of_the_string - 1) / 2
 *  @str: input
 *  Return: half of input
 */

void puts_half(char *str)
{
	int b, n, longu;

	longu = 0;

	for (b = 0; str[b] != '\0'; b++)
	{
		longu++;
	}
	n = (longu / 2);
	if ((longu % 2) == 1)
	{
		n = ((longu + 1) / 2);
	}
	for (b = n; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}


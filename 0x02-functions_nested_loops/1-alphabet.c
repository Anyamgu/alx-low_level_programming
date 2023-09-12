#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}


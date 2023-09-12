#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char num;
	char t;

	for (num = 0; num <= 9; num++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}


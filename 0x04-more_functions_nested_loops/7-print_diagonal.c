#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (space = 1; space <= ln; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}


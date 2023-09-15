#include "main.h"

/**
 * print_diagonal - draws a diagonal line at the terminal
 * @n: is the number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

